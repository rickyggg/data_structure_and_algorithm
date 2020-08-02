typedef enum ColorType { Red, Black } ColorType;
typedef struct RedBlackNode *RedBlackTree;
struct RedBlackNode {
  int Element;
  RedBlackTree Left;
  RedBlackTree Right;
  ColorType Color;
};
RedBlackNode *NullNode = nullptr;
RedBlackNode *Initialize() {
  RedBlackTree T;
  if (NullNode == nullptr) {
    NullNode = new RedBlackNode;
    NullNode->Left = NullNode->Right = NullNode;
    NullNode->Color = Black;
    NullNode->Element = __INT_MAX__;
  }
  T = new RedBlackNode;
  T->Element = -__INT_MAX__;
  T->Left = T->Right = NullNode;
  T->Color = Black;
  return T;
}
RedBlackNode *SingleRotateWithLeft(RedBlackNode *node);
RedBlackNode *SingleRotateWithRight(RedBlackNode *node);
static RedBlackNode *Rotate(int Item, RedBlackNode *Parent) {
  if (Item < Parent->Element)
    return Parent->Left = Item < Parent->Left->Element
                              ? SingleRotateWithLeft(Parent->Left)
                              : SingleRotateWithRight(Parent->Left);
  else
    return Parent->Right = Item < Parent->Right->Element
                               ? SingleRotateWithLeft(Parent->Right)
                               : SingleRotateWithRight(Parent->Right);
}
RedBlackTree X, P, GP, GGP;
void HandleReorient(int Item, RedBlackTree T) {
  X->Color = Red;
  X->Left->Color = Black;
  X->Right->Color = Black;
  if (P->Color == Red) {
    GP->Color = Red;
    if ((Item < GP->Element) != (Item < P->Element))
      P = Rotate(Item, GP);
    X = Rotate(Item, GGP);
    X->Color = Black;
  }
  T->Right->Color = Black;
}
RedBlackTree Insert(int Item, RedBlackTree T) {
  X = P = GP = T;
  NullNode->Element = Item;
  while (X->Element != Item) {
    GGP = GP;
    GP = P;
    P = X;
    if (Item < X->Element)
      X = X->Left;
    else
      X = X->Right;
    if (X->Left->Color == Red && X->Right->Color == Red)
      HandleReorient(Item, T);
  }
  if (X != NullNode)
    return NullNode;
  X = new RedBlackNode;
  X->Element = Item;
  X->Left = X->Right = NullNode;
  if (Item < P->Element)
    P->Left = X;
  else
    P->Right = X;
  HandleReorient(Item, T);
  return T;
}