template <typename T>
class Heap
{
public:
	Heap(int initialSize);
	Heap(const Heap<T>& heap); // The copy constructor
	~Heap();

	void add(T& newItem);
	bool isEmpty() const;
	void remove() throw EmptyHeap;
	T peekTop() const throw EmptyHeap;
private:
	T* theCompleteBinaryTree;
	int sizeOfArray;
	int numItemsInHeap;
	//void swap(T item);
};
