#include <iostream>

using namespace std;

int main()

{

	int n,i,j;
    cout<<"��������Ҫѡ��׳˵����֣�"<<endl;
	while (cin>>n)

	{

		int flag=1;

		int carry=0;        //���ý�λ

		int res=0;

		int str[40000];     //������ĿҪ����������Ĵ�С

		str[0]=1;

		for (i=2;i<=n;i++)   //��2��ʼ����׳�

		{

			for (j=1;j<=flag;j++)     //���ݽ�λflag��С���жϵ�ǰ�׳˽���ĵ�λ��

		     {

			res=str[j-1]*i+carry;

			str[j-1]=res%10;

			carry=res/10;

               	      }

			while (carry)  //����λ����һʱ�������չ����һλ

			{

				flag++;

				str[flag-1]=carry%10;

				 carry/=10;

			}

		}
        cout<<"�����Ľ׳�Ϊ��"<<endl;
		for (i=flag-1;i>=0;i--)    //��������鵹�������ע�����һλ��"i=flag-1",��Ϊ"flag=1" ��Ӧstr[0],�Դ�����

 		{

			 cout<<str[i];

		}

		 cout<<endl;

	 }

 	return 0;

}
