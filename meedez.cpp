#include<bits/stdc++.h>
using namespace std;
main()
{
   int count1=0,c[26],d[26],count2=0;
   string a,b;
   cin>>a>>b;
   for(int i=0;i<26;i++)
   {
      c[i]=0;
      d[i]=0;
   }
   if(a.size()==b.size())
   {
      for(int i=0;i<a.size();i++)
      {
          if(a[i]=='a' || a[i]=='A')
          {
               c[0]++;
          }
       if(a[i]=='b' || a[i]=='B')
          {
               c[1]++;
          }
          if(a[i]=='c' || a[i]=='C')
          {
               c[2]++;
          }
          if(a[i]=='d' || a[i]=='D')
          {
               c[3]++;
          }
          if(a[i]=='e' || a[i]=='E')
          {
               c[4]++;
          }
          if(a[i]=='f' || a[i]=='F')
          {
               c[5]++;
          }
       if(a[i]=='g' || a[i]=='G')
          {
               c[6]++;
          }
          if(a[i]=='h' || a[i]=='H')
          {
               c[7]++;
          }
          if(a[i]=='i' || a[i]=='I')
          {
               c[8]++;
          }
          if(a[i]=='j' || a[i]=='J')
          {
               c[9]++;
          }
          if(a[i]=='k' || a[i]=='K')
          {
               c[10]++;
          }
       if(a[i]=='l' || a[i]=='L')
          {
               c[11]++;
          }
          if(a[i]=='m' || a[i]=='M')
          {
               c[12]++;
          }
          if(a[i]=='n' || a[i]=='N')
          {
               c[13]++;
          }
          if(a[i]=='o' || a[i]=='O')
          {
               c[14]++;
          }
          if(a[i]=='p' || a[i]=='P')
          {
               c[15]++;
          }
       if(a[i]=='q' || a[i]=='Q')
          {
               c[16]++;
          }
          if(a[i]=='r' || a[i]=='R')
          {
               c[17]++;
          }
          if(a[i]=='s' || a[i]=='S')
          {
               c[18]++;
          }
          if(a[i]=='t' || a[i]=='T')
          {
               c[19]++;
          }
          if(a[i]=='u' || a[i]=='U')
          {
               c[20]++;
          }
       if(a[i]=='v' || a[i]=='V')
          {
               c[21]++;
          }
          if(a[i]=='w' || a[i]=='W')
          {
               c[22]++;
          }
          if(a[i]=='x' || a[i]=='X')
          {
               c[23]++;
          }
          if(a[i]=='y' || a[i]=='Y')
          {
               c[24]++;
          }
          if(a[i]=='z' || a[i]=='Z')
          {
               c[25]++;
          }




          if(b[i]=='a' || b[i]=='A')
          {
               d[0]++;
          }
       if(b[i]=='b' || b[i]=='B')
          {
               d[1]++;
          }
          if(b[i]=='c' || b[i]=='C')
          {
               d[2]++;
          }
          if(b[i]=='d' || b[i]=='D')
          {
               d[3]++;
          }
          if(b[i]=='e' || b[i]=='E')
          {
               d[4]++;
          }
          if(b[i]=='f' || b[i]=='F')
          {
               d[5]++;
          }
       if(b[i]=='g' || b[i]=='G')
          {
               d[6]++;
          }
          if(b[i]=='h' || b[i]=='H')
          {
               d[7]++;
          }
          if(b[i]=='i' || b[i]=='I')
          {
               d[8]++;
          }
          if(b[i]=='j' || b[i]=='J')
          {
               d[9]++;
          }
          if(b[i]=='k' || b[i]=='K')
          {
               d[10]++;
          }
       if(b[i]=='l' || b[i]=='L')
          {
               d[11]++;
          }
          if(b[i]=='m' || b[i]=='M')
          {
               d[12]++;
          }
          if(b[i]=='n' || b[i]=='N')
          {
               d[13]++;
          }
          if(b[i]=='o' || b[i]=='O')
          {
               d[14]++;
          }
          if(b[i]=='p' || b[i]=='P')
          {
               d[15]++;
          }
       if(b[i]=='q' || b[i]=='Q')
          {
               d[16]++;
          }
          if(b[i]=='r' || b[i]=='R')
          {
               d[17]++;
          }
          if(b[i]=='s' || b[i]=='S')
          {
               d[18]++;
          }
          if(b[i]=='t' || b[i]=='T')
          {
               d[19]++;
          }
          if(b[i]=='u' || b[i]=='U')
          {
               d[20]++;
          }
       if(b[i]=='v' || b[i]=='V')
          {
               d[21]++;
          }
          if(b[i]=='w' || b[i]=='W')
          {
               d[22]++;
          }
          if(b[i]=='x' || b[i]=='X')
          {
               d[23]++;
          }
          if(b[i]=='y' || b[i]=='Y')
          {
               d[24]++;
          }
          if(b[i]=='z' || b[i]=='Z')
          {
               d[25]++;
          }

      }
      for(int i=0;i<26;i++)
      {
          if(c[i]==d[i])
           count2++;
      }
      if(count2==26)
      {
          for(int i=0;i<a.size();i++)
          {
          if(a[i]!=b[i])
          {

              if(((b[i]==a[i-1]) && (b[i-1]==a[i]))  || ((b[i]==a[i+1]) && (b[i+1]==a[i])))
              {
                  count1++;
                  i++;

              }


      }
      }

      cout<<count1;

}
}
else cout<<-1;
}

