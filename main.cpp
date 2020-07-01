

#include "Header.h"
#include "Func.cpp"
int main() {
    
    int x=12;
    TOC <int> array(10);
    
    while (x !=0){

    cout << "What would you like to do with your myArray? Enter the corresponding number. Enter 0 to exit." << endl << endl;
    cout << "1. Fill the myArray or add an element" << endl;
    cout << "2. Display elements in the myArray" << endl;
    cout << "3. Check if the myArray is full" << endl;
    cout << "4. Check if the myArray is empty" << endl;
    cout << "5. Insert the element in the myArray." << endl;
    cout << "6. Remove the element from the myArray" << endl;
    cout << "7. Check the position of the chosen element in the myArray" << endl;
    cout << "8. Change chosen element in the myArray" << endl;
    cout << "9. Check the capacity of the myArray " << endl;
    cout << "10. Check how many elements are currently in the myArray" << endl;
    cout << "11. Print the element from the chosen position in the myArray" << endl;

        cin >> x;


        if(x == 1){
            int a;
            cout << "Please enter the numebers you want in your array. " << endl;
            cin >> a;
            array.add(a);

        }
        
        if(x == 2){
            cout << "Your array consists of: " << endl;
            
            array.display();
        }
        
        if(x==3){
            if(array.full()==1){
                
                cout << "Your array is full. " << endl;
            }
            if(array.full()==0){
                cout << "Your array is not full. " << endl;
            }
        }
        
        if(x == 4){
            if(array.ifEmpty()==1){
                
                cout << "Your array is empty. " << endl;
            }
            if(array.ifEmpty()==0){
                cout << "Your array is not empty. " << endl;
            }

        }
        
        if(x == 5){
            cout << "What would you like to insert and where" << endl;
            
            int a;
            int b;
            cin >> a;
            cin >> b;
            array.insertAt(a, b);
            
        }
        
        if (x == 6){
            int b;
            cout << "At which location in the array would you like removed? " << endl;
            cin >> b;
            array.remove(b);
            
        }
        if(x == 7){
            int a;
            cout << " What array position would you wish to check? " << endl;
            cin >> a;
            cout << "The position " << a << " contains " << array.getPosition(a) << endl;
            
        }
        if(x==8){
            int a;
            int b;
            cout << "Please enter the element you want to change and what you want to change it to " << endl;
            cin >>a;
            cin >>b;
            array.change(a,b);


        }
        
        if(x==9){
            cout << "The capacity of your array is " << array.getCapacity() << endl;
            
        }
        if (x == 10 ){
            cout << "The ammount of elements currently used is " << array.getNumUsed() << endl;
        }
        if(x == 11){
            cout << "Enter the postion on the array to see its contents." << endl;
            int a;
            cin >> a;
            cout << "The number is "<<array.get(a) << endl;
            
        }
        


    }
    return 0;
}



