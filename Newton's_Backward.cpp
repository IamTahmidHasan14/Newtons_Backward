#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[10], y[10][10];
    int n;
    cout << "Enter the number of value: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << endl << "Enter X" << i+1 << ": ";
        cin >> x[i];
        cout << "Enter Y" << i+1 << ": ";
        cin >> y[i][0];
    }
    for (int i=1; i<n; i++) {
		for (int j = n-1; j>=i; j--)
			y[j][i] = y[j][i-1] - y[j-1][i-1];
	}

	cout<<"---Difference Table---"<<endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
			cout << "\t" << y[i][j];
		cout << endl;
	}

    cout << endl;
    cout << endl;
    float X1, p, u, YN;
    int fact=1, h;
    cout << "Enter x(not): ";
    cin >> X1;
    h = x[1]-x[0];
    p = (X1-x[n-1])/h;
    cout << "P: "<<p;

    float YN2=y[n-1][0];
    u=p;
    for(int i=1;i<n;i++){
        YN= YN + (u*y[n-1][i]/fact);
        fact=fact*i;
        u=u*(p+(i-1));
        cout << endl << u;
    }
    YN = YN + YN2;
    cout << endl << "In Newton's Backward, Y("<< X1 <<"): " << YN << endl;
}
