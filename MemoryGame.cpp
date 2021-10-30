#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
#include<windows.h>
using namespace std;
class game
{
    bool ans;
    char comma,a;
    int q,m,n;
    int i,j,row,col,x;

    int r1, c1, r2, c2,cards[100][100];
public:
    void getdata()
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        cout<<endl<<"*********************** Welcome ***********************";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<endl<<endl<<"Enter no of cols: ";
        cin>>m;
        cout<<"Enter no of rows: ";
        cin>>n;
        cout<<endl;
    }

    //fill board
    void fill_board()
    {
        srand((unsigned)time(NULL));
            for (int r=0; r<n; r++)
    {
        for (int c=0; c<m; c++)
        {
            cards[r][c]=rand()%8+1;
            cout<<setw(2)<<cards[r][c];
        }
        cout<<endl<<'\n';
    }
    cout<<endl;
    }
    //display board
    void display()
    {
            cout<<"    ";
    for(int i=1;i<=m;i++)
    {
        if(i<=9)
        cout<<"  "<<i;
        else
        cout<<" "<<i;
    }
    cout<<"  ";
    cout<<endl<<"    ";
    for (int i=0; i<=3*m; i++)
    {
        cout<<"-";
    }
    cout<<endl;
    for (int r=0; r<n; r++)
    {
        if(r<9)
        cout<<r+1<<"  | ";
        else
            cout<<r+1<<" | ";
        for (int c=0; c<m; c++)
        {
                cout<<"*  ";
        }
        cout<<endl;
    }
    cout<<endl;
    //selection
    }
    void selection()
    {
    cout<<"Please insert the first card row and column seperated by a comma:\n";
    cin>>r1>>comma>>c1;
    cout<<"Please insert the second card row and column seperated by a comma:\n";
    cin>>r2>>comma>>c2;
    //fix
    r1--;
    c1--;
    r2--;
    c2--;
    }
     //reveal
     void reveal()
     {
        cout<<endl;
        cout<<"    ";
        for(int i=1;i<=m;i++)
        {
            if(i<=9)
            cout<<"  "<<i;
            else
            cout<<" "<<i;
        }
        cout<<"  ";
        cout<<endl<<"    ";
        for (int i=0; i<=3*m; i++)
        {
            cout<<"-";
        }
        cout<<endl;
        for (int r=0; r<n; r++)
        {
            if(r<9)
            cout<<r+1<<"  | ";
            else
                cout<<r+1<<" | ";
            for (int c=0; c<m; c++)
            {
                if ((r==r1)&&(c==c1))
                {
                    cout<<cards[r][c]<<"  ";
                }
                else if((r==r2)&&(c==c2))
                {
                    cout<<cards[r][c]<<"  ";
                }
                else
                {
                    cout<<"*  ";
                }
            }
            cout<<endl;
        }
     }
        //match?
    void match()
    {
        bool ans;
        if (cards[r1][c1]==cards[r2][c2])
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout<<endl<<"both are matching"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        ans=1;
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        cout<<endl<<"both are not matching"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    }
    cout<<endl;
    cout<<"    ";
    for(int i=1;i<=m;i++)
    {
        if(i<=9)
        cout<<"  "<<i;
        else
        cout<<" "<<i;
    }
    cout<<"  ";
    cout<<endl<<"    ";
    for (int i=0; i<=3*m; i++)
    {
        cout<<"-";
    }
    cout<<endl;
    if(ans==1)
    {
        for (int r=0; r<n; r++)
    {
        if(r<9)
        cout<<r+1<<"  | ";
        else
            cout<<r+1<<" | ";
        for (int c=0; c<m; c++)
        {
            if ((r==r1)&&(c==c1))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                cout<<cards[r][c]<<"  ";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            }
            else if((r==r2)&&(c==c2))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                cout<<cards[r][c]<<"  ";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

            }
            else
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }
    }
    else
    {
        for (int r=0; r<n; r++)
    {
        if(r<9)
        cout<<r+1<<"  | ";
        else
            cout<<r+1<<" | ";
        for (int c=0; c<m; c++)
        {
            if ((r==r1)&&(c==c1))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<cards[r][c]<<"  ";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            }
            else if((r==r2)&&(c==c2))
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                cout<<cards[r][c]<<"  ";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
            }
            else
            {
                cout<<"*  ";
            }
        }
        cout<<endl;
    }
    }
    }
    void check()
{
    int x;
    cout<<endl<<"Enter element: ";
    cin>>x;
   // int i,j,row,col,x,cards[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(x==cards[i][j])
            {
                cout<<"Found AT "<<"<"<<i<<","<<j<<">"<<endl;
                q++;
            }

        }
    }
    if(q==0)
    {
        cout<<"Not found";
    }
}
};
int main()
{
    game g;
    char a;
    int x;
A:
    g.getdata();
    g.fill_board();
    g.display();
    g.selection();
    g.reveal();
    g.match();
    g.check();
    cout<<endl<<endl<<"Do you want to continue?: ";
    cin>>a;
    if(a=='Y'||a=='y')
    {
        goto A;
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        cout<<endl<<endl<<"*********************** End ***********************";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    }
    return 0;
}

