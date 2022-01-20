//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed; ll ce = 0, cg = 0, cy = 0, cp = 0, ct = 0,tot=0;
    string s; cin >> s; transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'e')ce++;
        else if (s[i] == 'g')cg++;
        else     if (s[i] == 'y')cy++;
        else  if (s[i] == 'p')cp++;
        else  if (s[i] == 't')ct++;
    
    }
    while (ce >= 1 and cg >= 1 and cy >= 1 and cp >= 1 and ct >= 1) {
        ce--; cg--; cy--; cp--; ct--; tot++;
}
    cout << tot << endl;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف