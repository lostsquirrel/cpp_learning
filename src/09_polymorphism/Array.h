//Array.h
#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>

template<class T>  //数组类模板定义
class Array {
private:
	T* list;        //用于存放动态分配的数组内存首地址
	int size;       //数组大小（元素个数）
public:
	Array(int sz = 50);     //构造函数
	Array(const Array<T> &a);   //复制构造函数
	~Array();           //析构函数
	Array<T> & operator =(const Array<T> &rhs);    //重载"=“
	T & operator [](int i); //重载"[]”
	const T & operator [](int i) const;     //重载"[]”常函数
	operator T *();        //重载到T*类型的转换
	operator const T *() const;
	int getSize() const;        //取数组的大小
	void resize(int sz);        //修改数组的大小
};

template<class T> Array<T>::Array(int sz) {        //构造函数
	assert(sz >= 0);        //sz为数组大小（元素个数），应当非负
	size = sz;  // 将元素个数赋值给变量size
	list = new T[size];    //动态分配size个T类型的元素空间
}

template<class T> Array<T>::~Array() { //析构函数
	delete[] list;
}

template<class T>
Array<T>::Array(const Array<T> &a) {    //复制构造函数
	size = a.size;     //从对象x取得数组大小，并赋值给当前对象的成员
	list = new T[size]; // 动态分配n个T类型的元素空间
	for (int i = 0; i < size; i++)     //从对象X复制数组元素到本对象
		list[i] = a.list[i];
}

/*
 为什么有的函数返回引用

 如果一个函数的返回值是一个对象的值，就是右值，不能成为左值。
 如果返回值为引用。由于引用是对象的别名，通过引用可以改变对象的值，因此是左值。
 */
//续上，重载"="运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值
template<class T>
Array<T> &Array<T>::operator =(const Array<T>& rhs) {
	if (&rhs != this) {
		//如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
		if (size != rhs.size) {
			delete[] list; //删除数组原有内存
			size = rhs.size;    //设置本对象的数组大小
			list = new T[size];  //重新分配size个元素的内存
		}
		//从对象X复制数组元素到本对象
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;   //返回当前对象的引用
}
//重载下标运算符，实现与普通数组一样通过下标访问元素，具有越界检查功能
template<class T>
T &Array<T>::operator[](int n) {
	assert(n >= 0 && n < size);  //检查下标是否越界
	return list[n];       //返回下标为n的数组元素
}
template <class T>
const T &Array<T>::operator[](int n) const {
	assert(n >= 0 && n < size);  //检查下标是否越界
	return list[n];       //返回下标为n的数组元素
	//重载指针转换运算符，将Array类的对象名转换为T类型的指针
}

template <class T>
Array<T>::operator T * () {
	return list;    //返回当前对象中私有数组的首地址
}

//取当前数组的大小
template <class T>
int Array<T>::getSize() const {
	return size;
}

// 将数组大小修改为sz
template <class T>
void Array<T>::resize(int sz) {
	assert(sz >= 0);    //检查sz是否非负
	if (sz == size)//如果指定的大小与原有大小一样，什么也不做
	return;
	T* newList = new T [sz];//申请新的数组内存
	int n = (sz < size) ? sz : size;//将sz与size中较小的一个赋值给n
	//将原有数组中前n个元素复制到新数组中
	for (int i = 0; i < n; i++)
	newList[i] = list[i];
	delete[] list;//删除原数组
	list = newList;// 使list指向新数组
	size = sz;//更新size
}

#endif  //ARRAY_H
