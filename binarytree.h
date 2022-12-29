template<class T> class TreeElement
{
private:
	int data;
	TreeElement* left;	
	TreeElement* right;	
	TreeElement* back;	
public:
	
	TreeElement() :data(0), left(nullptr), right(nullptr), back(nullptr) {}

	
	TreeElement(int d, TreeElement* l, TreeElement* r, TreeElement* b) :data(d), left(l), right(r), back(b) {}

	
	TreeElement(TreeElement& t) :data(t.getData()), left(t.getLeft()), right(t.getRight()), back(t.getBack()) {}

	
	void setData(int d) {
		data = d;
	}

	
	int getData() {
		return data;
	}

	void setLeft(TreeElement* l) {
		left = l;
	}

	
	TreeElement* getLeft() {
		return left;
	}

	void setRight(TreeElement* r) {
		right = r;
	}

	TreeElement* getRight() {
		return right;
	}

	
	void setBack(TreeElement* b) {
		back = b;
	}

	TreeElement* getBack() {
		return back;
	}

};


template<class T> class BinaryTree
{
	TreeElement* root;		
	TreeElement* findElement(int n);	
	TreeElement* recursiveFindElement(int n);	
	TreeElement* recursiveFindElement(TreeElement* r, int n);
	void recursiveRemove(int n, TreeElement* r);
public:
	
	BinaryTree() :root(nullptr) {};

	
	BinaryTree(TreeElement* r) :root(r) {};


	void add(int current_n, int new_n);

	
	void remove(int n);

};