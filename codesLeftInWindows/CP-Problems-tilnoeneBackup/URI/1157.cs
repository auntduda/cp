using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        for(int i=1;i<=n;i++){
            if(n%i==0){
                Console.Write("{0}\n", i);
            }
        }
    }
}