using System;

namespace CS
{
    
    class Utility<T>{
        public static void swap(ref T a, ref T b){
            // Console.WriteLine("a: " + a + ",b:" + b);
            T tmp = a;
            a = b;
            b = tmp;
        }
        public static void swap( T a,  T b){
            // Console.WriteLine("a: " + a + ",b:" + b);
            T tmp = a;
            a = b;
            b = tmp;
        }        

        public static void bubblesort(T[] data){
            // foreach(T d in data){
            //     Console.WriteLine("d: " + d);
            // }

            bool sort_flag = true;

                    // T a = data[2], b = data[1];
                    // Console.WriteLine(System.Collections.Generic.Comparer<T>.Default.Compare(a,b));

            for(int j = 0; j < (20 - 1); j++)
             {
                for(int i = 0; i < (10 - 1); i++){
                    // Console.WriteLine(System.Collections.Generic.Comparer<T>.Default.Compare(data[i],data[i+1]));
                    int c = System.Collections.Generic.Comparer<T>.Default.Compare(data[i],data[i+1]);
                    if(c > 0) {
                        swap(ref data[i], ref data[i+1]);
                        sort_flag = false; 
                        // i = 0;
                    }
                }
                Console.WriteLine(sort_flag);
                if (sort_flag == true) break;
            }

            foreach(T d in data){
                Console.WriteLine(d);
            }
            

        }

    }
    class Program
    {

        static void Main(string[] args)
        {
            int a = 2, b = 4;
            Console.WriteLine("a: " + a + ",b:" + b);
            Utility<int>.swap(ref a, ref b);
            Console.WriteLine("a: " + a + ",b:" + b);
            
            Utility<int>.swap(2, 4);
            

            int[] data = {1,2,3,4,9,8,7,6,0,5};
            Utility<int>.bubblesort(data);            
        }
    }
}
