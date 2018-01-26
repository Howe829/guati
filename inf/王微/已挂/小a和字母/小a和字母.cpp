#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
 
using namespace std;

int n;
string s;

int main()
{
	while (cin >> n >> s)
    {
		bool vis[100] = {0};
	    int x = 0;
	    int ans = 0;
	    for (int i = 0; i < n; i++)
	    {
	        if (s[i] <= 'Z' && s[i] >= 'A')
	            x = 0, memset(vis, 0, sizeof(vis));
	        else if (s[i] <= 'z' && s[i] >= 'a')
	        {
	            if (!vis[s[i] - 'a'])
	                vis[s[i] - 'a'] = true, x++;
	        }
	        ans = max(ans, x);
	    }
	    cout << ans << endl;
	}
    
    return 0;
}
