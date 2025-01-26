
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int l1,r1,l2,r2;
//   cin>>l1>>r1>>l2>>r2;
//   if((l1<=r1 && r1<=l2 && l2<=r2)||(l2<=r2 && r2<=l1 && l1<=r2))cout<<-1<<endl;
//   else{
//       //Having Legit Intersection
//       int l=max(l1,l2);
//       int r=min(r1,r2);
//       cout<<l<<" "<<r<<endl;
//   }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Check if intervals do not overlap
    if (r1 < l2 || r2 < l1)
    {
        cout << -1 << endl; // No intersection
    }
    else
    {
        // Find the intersection
        int l = max(l1, l2);
        int r = min(r1, r2);
        cout << l << " " << r << endl; // Output the intersection
    }

    return 0;
}
