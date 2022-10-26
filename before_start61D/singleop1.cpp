#include <iostream>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        char s[n];
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
// int binaryToDecimal(int n)
// {
//     int num = n;
//     int dec_value = 0;
//     int base = 1;
 
//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;
 
//         dec_value += last_digit * base;
 
//         base = base * 2;
//     }
 
//     return dec_value;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,y;
//         cin>>n;
//         string str;
//         cin>>str;
//         int s = stoi(str);
//         int x=binaryToDecimal(s);
//         for(int i=1;i!=0;i++)
//         {
//                 int k=fabs(x/pow(2,i));
//                 int l=x^k;
//                 if(l>=x)
//                 {   
//                     y=i;
//                     cout<<y<<endl;
//                     break;
//                 }
//         }
//     }
//     return 0;
// }
