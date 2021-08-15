#define ll long long
const int mod = 1e9 + 7;

ll ksm(ll a, ll k) {
    a %= mod;
    ll res = 1;
    while (k) {
        if (k & 1)
            res = res * a % mod;
        a = a * a % mod;
        k >>= 1;
    }
    return res;
}

ll ksc(ll a, ll b) {
    ll res = 0;
    while (b) {
        if (b & 1)
            res = (res + a) % mod;
        a = a * 2 % mod;
        b >>= 1;
    }
    return res;
}