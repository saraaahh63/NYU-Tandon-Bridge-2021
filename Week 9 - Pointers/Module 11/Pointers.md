# Pointers and Dynamic Storage

**Pointers - Why?**
* A way to store a "reference" to an object
* A way to store large amounts of information not associated with a function (the heap)
* A way to link objects together

**What it looks like**
* In C++ a pointer must specify the datatype that it points to
* In main memory, the pointer is simply a stored number
* The stored number represents the memory address of the item being pointed to

        int * ptr;

**Getting Pointers to Point**
* Pointers can be made to point to something
* The address of the item being pointed to is stored in the pointer
* We can get the address of an item by using the "address-of" operator, the ampersand (&), in front of the variable's name

        int x = 100;
        int * ptr;
        ptr = &x;

* We can access the data that a pointer is pointing to by "dereferencing" the pointer. We do this using the dereferencing operator, the star (*).

        int x = 100;
        int * ptr;
        ptr = &x;
        cout<< *ptr;
        *ptr = 20; // the same as x = 20;

* Pointers always point to something. If the pointer isn't pointing to something VALID, it should point to NULL or nullptr.

**Defining Multiple Pointers**
* When defining pointers, the * is associated with only the next item in the sequence. If you need multiple pointers in the same line, you need more stars!

        int *ptr1, x;
        int *ptr2, *ptr3;

**Dynamic Memory**
* Pointers can point to heap-dynamic memory
* Heap-dynamic memory is allocated when you ask for it, and remains allocated util you destroy it, this means it can survive function calls
* A variable can be created on the heap for a particular datatype, but it does not have a name, so you use pointers to refer to it
* Once memory is allocated on the heap, it will not be deallocated until you do it or the program ends
* You have to be very careful to destroy it after you're done
* If you lose track of a heap-dynamic variable it becomes "garbage on the heap" aka a "memory leak"

        int * ptr = new int;

**For every new, there must be a delete**
* If memory is allocated, it must be destroyed
* You must destroy it once and only once
  * Forgetting to destroy it results in a memory leak
  * Deleting it twice results in a "double delete" which will crash your program
  * Deleting NULL or nullptr has no effect

        delete ptr;
        ptr = NULL;

**What about arrays?**
* Heap-dynamic arrays don't have to have a static size!
* Once created, heap-dynamic arrays can't grow, but they can be created to be any size initially
* Since we are working with a pointer, a new, larger, heap-dynamic array can be made to replace a smaller one
* Deleting a heap-dynamic array is a bit different

        int x;
        cout<<"How big? ";
        cin>> x;
        int * arr = new int [x];
        delete [] arr;

**What can we do with heap-dynamic arrays?**
* Heap-dynamic arrays are no different that the "normal" arrrays which you've been using
* Use heap-dynamic arrays just like all other arrays, using the square brackets operator

**Pointer Arithmetic**
* C++ allows pointers to be manipulated using simple math operations
* Use the addition operator (+) to move the pointer forward some number of spaces (x = x+5 will make the pointer poiny to 5 elements higher in the array)
* Use the subtraction operator (-) to move the pointer backwards

**Vectors**
* A vector is a dynamically growing array, in which you don't need to worry about the size, it will even tell you how many items are in it.

        #include <vector>
        using namespace std;

        vector<int> v;
        for (int i=0; i < 100; i++)
            v.push_back(i * 100);
        for (int i=0; i < v.size(); i ++)
            cout<< v[i]<<endl;

* Vectors allow us to access all of the elements by using a "ranged for loop"

        #include <vector>
        using namespace std;

        vector<int> v;
        for (int i=0; i < 100; i++)
            v.push_back(i * 100);
        for (int i: v)
            cout<< i <<endl;


