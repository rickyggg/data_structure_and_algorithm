#include <atomic>
#include <iostream>
#include <mutex>
using namespace std;

class Singleton {
private:
  Singleton() { cout << "construct" << endl; };
  ~Singleton() { cout << "destruct" << endl; };

  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  static atomic<Singleton *> m_instance;
  static mutex mtx;

public:
  static Singleton &getInstance();
};

Singleton &Singleton::getInstance() {
  if (m_instance == nullptr) {
    unique_lock<mutex> lock(mtx); // RAII
    if (m_instance == nullptr)
      m_instance = new Singleton;
  }
  return *m_instance;
}