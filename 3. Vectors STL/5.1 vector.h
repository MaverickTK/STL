class Vector{

 // Vector : Dynamic Array
    int cs; //current size of array
    int ms; // maximum size
    int *arr; //pointer that is pointing dynamic array
    // above all are private members


    public:
        Vector(){
            cs=0;
            ms=1;
            arr=new int[ms];
        }

        void push_back( const int d){
            if(cs==ms){
                //if array is full
                int *oldArr = arr;
                arr= new int[2*ms]; // points to new array (doubling size concept)
                ms= 2*ms;
                for(int i=0;i<cs;i++)
                {
                    arr[i]= oldArr[i];
                }
                //clear the old memory

                delete[] oldArr;
             }

             arr[cs]=d;
             cs++;

        }

        void pop_back(){
            cs--;

        }

        int front() const {   // here we write const bcz we are not modifying the data
            return arr[0];
        }

        int back() const {   // here we write const bcz we are not modifying the data
            return arr[cs-1];
        }

        bool empty() const {  // here we write const bcz we are not modifying the data
            return cs==0;
        }

        int capacity(){
            return ms;
        }

        int at(const int i){
            return arr[i]; // returning ith element 
        }

        //operator overloading

        int operator[] (const int i){
            return arr[i];
        }

        int size() const {
            return cs;
        }

};
