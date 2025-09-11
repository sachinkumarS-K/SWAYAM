class MyCircularQueue
{
public:
        vector<int> arr;
        int f, r;
        int size;
        MyCircularQueue(int k)
        {
                f = -1, r = -1;
                size = k;
                for (int i = 0; i < k; i++)
                        arr.push_back(0);
        }

        bool enQueue(int value)
        {
                if (isFull())
                        return false;
                if (isEmpty())
                        f = r = 0;
                else
                        r = (r + 1) % size;
                arr[r] = value;
                return true;
        }

        bool deQueue()
        {
                if (isEmpty())
                        return false;
                if (f == r)
                        f = r = -1;
                else
                        f = (f + 1) % size;
                return true;
        }

        int Front()
        {
                if (f == -1)
                        return -1;
                return arr[f];
        }

        int Rear()
        {
                if (r == -1)
                        return -1;
                return arr[r];
        }

        bool isEmpty() { return f == -1; }

        bool isFull() { return ((r + 1) % size == f); }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */