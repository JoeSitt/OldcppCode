template <typename T>
Heap<T>::Heap(int initialSize){

}

template <typename T>
Heap<T>::Heap(const Heap<T>& heap){
sizeOfArray=2*sizeOfArray;
nheap = new Heap(sizeOfArray);

} // The copy constructor

template <typename T>
Heap<T>::~Heap(){
  while(!isEmpty()){
  remove();
  }
}

template <typename T>
void Heap<T>::add(T& newItem){

}

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
  hArray[]
}

template <typename T>
T Heap<T>::peekTop() const throw EmptyHeap{
  if (isEmpty()) {
    throw EmptyHeap;
  }
  hArray[0].print();
}
