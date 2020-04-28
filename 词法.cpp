#include <iostream>

using namespace std;

int main()

{

	int n,i,j;
    cout<<"请输入你要选择阶乘的数字："<<endl;
	while (cin>>n)

	{

		int flag=1;

		int carry=0;        //设置进位

		int res=0;

		int str[40000];     //根据题目要求设置数组的大小

		str[0]=1;

		for (i=2;i<=n;i++)   //从2开始计算阶乘

		{

			for (j=1;j<=flag;j++)     //根据进位flag大小来判断当前阶乘结果的的位数

		     {

			res=str[j-1]*i+carry;

			str[j-1]=res%10;

			carry=res/10;

               	      }

			while (carry)  //当进位大于一时将结果扩展到下一位

			{

				flag++;

				str[flag-1]=carry%10;

				 carry/=10;

			}

		}
        cout<<"你计算的阶乘为："<<endl;
		for (i=flag-1;i>=0;i--)    //将结果数组倒序输出，注意最后一位是"i=flag-1",因为"flag=1" 对应str[0],以此类推

 		{

			 cout<<str[i];

		}

		 cout<<endl;

	 }

 	return 0;

}
