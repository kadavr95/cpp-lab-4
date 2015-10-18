#include <iostream.h>
#include <iomanip>
#include <conio.h>
#include <math.h>

void main( )
{
  double x, a, s, n, j;
  int i,p;
  cout<<"Enter x, accuracy: ";
  cin>>x>>a;
  s=i=n=1;
  while (a<=fabs(n))
  {
		n=n*(-1)*(4*i-5)/(4*i)*x;
		s=s+n;
		i++;
  }
  p=0;
  for (j=a; j<1; j=j*10)
		p++;
  cout<<setiosflags(ios::fixed)<<setprecision(p)<<"Series result: "<<s;
  s=pow(1+x, 0.25);
  cout<<setiosflags(ios::fixed)<<setprecision(p)<<" Function result: "<<s;
  getch();
}