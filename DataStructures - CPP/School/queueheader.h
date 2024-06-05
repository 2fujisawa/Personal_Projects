#pragma one

template<typename datatype>

class queue
{
    private:
    //Assigning Data members/variables that are going to be used
    datatype* array;
    int maxsize;
    int count;
    int front;
    int back;

    public:
    queue(int size); //constructor
    ~queue(); //destructor

    void add(datatype data);//method that adds to the back of the queue with template data type
    datatype remove(); //method that removes front element
    datatype peek();
    bool full();
    bool empty();
    int arraysize();

};

template<typename datatype>
queue<datatype> :: queue(int size)
{
    maxsize = size;
    front = 0;
    back = -1;
    count = 0;
    array = new datatype[maxsize];
    
}

template<typename datatype>
queue<datatype> :: ~queue()
{
    delete[] array; //deleting multiple objects the entire array instead of just one
                    //which would be delete[array] so only a single object
}

template<typename datatype>
bool queue<datatype> :: full()
{
    return count == maxsize;
}

template<typename datatype>
bool queue<datatype> :: empty()
{
    return count == 0;
}

template<typename datatype>
int queue<datatype> :: arraysize()
  {
    return count;
  }

template<typename datatype>

void queue<datatype> :: add(datatype data)
{
    if(full()) //If the array reached its max then return
    {
        return;
    }
    else
    {
        if(back == maxsize - 1)
        {
            back = -1; 
        }

        array[++back] = data; // incrememnts the back of the array by 1
        count = count + 1;
    }
}

template<typename datatype>

datatype queue<datatype> :: remove() //removing 
{
    datatype returningvalue = array[front++]; //moving the front of the array by moving it ahead by 1
    --count; //removing the cout here eliminates the first position for the queue 
    if(front == maxsize)
    {
        front = 0;
    }

    return returningvalue;
}

template<typename datatype> 

datatype queue<datatype> :: peek()
{
    return array[front];
}

