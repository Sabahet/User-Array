

#include "Header.h"


template < class T >
void TOC <T> ::  insertAt(T x, int y){
    int j =0;
    if(y<=num_used){
    if(capacity == num_used ){
        resize();
    }
    for(int i=(num_used-y); i>0; i-- ){

    myArray[num_used-j] = myArray[num_used-1-j];
        j++;
    }
    myArray[y]=x;
    num_used++;
    cout << "Sucsessfully inserted " << x << " at position " << y << ". " << endl;
    }else{
        cout << " OUT OF BOUNDS" << endl;
    }
}
//template < class T >
//void TOC <T> :: set(T x){
//    capacity = size;
//    for(int i =0; i <capacity; i++){
//        myArray[i] = x;
//
//    }
//    num_used = capacity;
//    cout << "Sucsessfully set your whole array equal to " << x << ". " << endl;
//}

template < class T >
void TOC <T> :: add(T x){
    int a=0;

   
    if(capacity==num_used ){
        resize();
    }
    myArray[num_used] = x;
    num_used++;
    while( a != -1){ //num_used=1; num_used < capacity; num_used++
    
        cin >> a;
        if(num_used<capacity && num_used !=0 && a != -1){
        myArray[num_used] = a;
            num_used++;
            }


    }


}

template < class T >
int TOC <T> :: getPosition(T x){
    for(int i =0; i <num_used; i++){
        if(myArray[i]==myArray[x]){
            return myArray[x];

        }
    }
    return 0;
}

template < class T >
int TOC <T> :: getNumUsed(){

return num_used;
}


template < class T >
void TOC <T> :: remove(int x){
    num_used--;
    for(int i=x; i<num_used; i++ ){
    myArray[i] = myArray[i+1];
}
    cout << "Sucsessfully removed element in the " << x << " position and shifted the array size. " << endl;
}


template < class T >
void TOC <T> :: display(){
    for(int i=0; i < num_used; i++){
        cout << myArray[i] << ", ";
    }
}

template < class T >
int TOC <T> :: getCapacity(){
    return capacity;

}
template < class T >
bool TOC <T> :: ifEmpty(){
    if(num_used == 0){
        return true;
    }else{
        return false;
    }

}

 template < class T >
    bool TOC <T> :: full(){
        if(num_used >= capacity && num_used != 0 ){
    return true;
        }else{
            return false;
        }
    }
 template < class T >
    void  TOC <T> :: change(T y,T x){
        myArray[y]= x;

}
template <class T>
T TOC<T>:: get(int y){
        return myArray[y];
}

template <class T>
void TOC <T> :: resize(){
    if (capacity < 100){
    if(capacity == num_used){
        T*myArray2;
        myArray2 = new T[capacity];
        for(int i =0; i>capacity; i++){
            myArray2[i]=myArray[i];
        }
        delete [] myArray;
        T*myArray;
        myArray2 = new T[capacity*2];
        
        for(int i =0; i>capacity; i++){
            myArray[i]=myArray2[i];
        }
        capacity = capacity*2;
    }
        
    }
}

