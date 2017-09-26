template <typename T>
Heap<T>::Heap(int initialSize){
temp= T[initialSize];
theCompleteBinaryTree
}

template <typename T>
Heap<T>::Heap(const Heap<T>& heap){
int a=sizeOfArray;
sizeOfArray=2*sizeOfArray;
nheap = new Heap(sizeOfArray);
int i=0;
while(i<a){
  nheap::
}

} // The copy constructor

template <typename T>
Heap<T>::~Heap(){
  while(!isEmpty()){
  remove();
  }
}

template <typename T>
void Heap<T>::add(T& newItem){
theCompleteBinaryTree[numItemsInHeap]=newItem;

}

// template <typename T>
// void Heap<T>::swap(T item){
//
// }
template <typename T>
bool Heap<T>::isEmpty() const{
  if (numItemsInHeap==0) {
    return 1;
  }
  return 0;
}

template <typename T>
void Heap<T>::remove() throw EmptyHeap{
  if (isEmpty()) {
    throw EmptyHeap;
  }
  if (numItemsInHeap==1) {
    theCompleteBinaryTree[0]=nullptr;
    numItemsInHeap--;
  }
  //T top=theCompleteBinaryTree[0];
  int current,l,r=0;
  l=1;
  r=2;

  while(theCompleteBinaryTree[l]!=nullptr&&theCompleteBinaryTree[r]!=nullptr){
    if (current!=0) {
      l=current*2;
      r=current*2+1;
    }

    if(theCompleteBinaryTree[l]>theCompleteBinaryTree[r]){
      theCompleteBinaryTree[current]=theCompleteBinaryTree[l];
      current=l;
    } else{
      theCompleteBinaryTree[current]=theCompleteBinaryTree[r];
      current=r;
    }
  }
  theCompleteBinaryTree[current]=nullptr;
  numItemsInHeap--;
}

template <typename T>
T Heap<T>::peekTop() const throw EmptyHeap{
  if (isEmpty()) {
    throw EmptyHeap;
  }
  return theCompleteBinaryTree[0];
}
