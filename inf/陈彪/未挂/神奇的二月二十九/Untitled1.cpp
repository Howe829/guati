
#include<cstdio>
#include<set>
#include<queue>
#include<cstring>
#include<algorithm>
#include<map>
#include<ctime>
#include<string>
using namespace std;
char sss[20][20] = {{"January"}, {"February"}, {"March"}, {"April"}, {"May"}, {"June"}, {"July"}, {"August"}, {"September"}, {"October"}, {"November"} , {"December"}};

bool js(int y,int r, int yy, int rr)
{
	if(y < yy)return true;
	if(y > yy)return false;
	if(r <= rr)return true;
	return false;
}

bool rn(int y)
{
	if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return true;
	return false;
}

map<string, int>mp;
void init()
{
	mp["January"] = 1;
	mp["February"] = 2;
	mp["March"] = 3;
	mp["April"] = 4;
	mp["May"] = 5;
	mp["June"] = 6;
	mp["July"] = 7;
	mp["August"] = 8;
	mp["September"] = 9;
	mp["October"] = 10;
	mp["November"] = 11;
	mp["December"] = 12;
}

void work(int &y1,int &y2,int &m1,int &m2,int &d1,int &d2)
{
	if(y1 > y2)
	{
		swap(y1,y2);
		swap(m1,m2);
		swap(d1,d2);
		return;
	}
	if(y1 < y1)
	{
		return;
	}
	if(m1 > m2)
	{
		swap(y1,y2);
		swap(m1,m2);
		swap(d1,d2);
		return;
	}
	if(m1 < m2)
	{
		return;
	}
	if(d1 > d2)
	{
		swap(y1,y2);
		swap(m1,m2);
		swap(d1,d2);
		return;
	}
}

int find(int y)
{
	int t, t1, t2;
	t = (y - 2000) / 4 + 1;
	t1 = (y - 2000) / 100 + 1;
	t2 = (y - 2000) / 400 + 1;
	return (t - t1 + t2);
}

int main()
{
	int N, kase = 0;
	char s1[15], s2[15];
	int y1, d1, y2, d2, m1, m2;
	srand(time(NULL));
	//freopen("out.txt", "w", stdout);
	//freopen("in.txt","r", stdin);
	scanf("%d", &N);
	init();
	while(N--)
	{
		scanf("%s%d,%d", s1, &d1, &y1);
		scanf("%s%d,%d", s2, &d2, &y2);
		if(mp.count(s1))
		{
			m1 = mp[s1];
		}
		else while(1);
		if(mp.count(s2))
		{
			m2 = mp[s2];
		}
		else while(1);
		if(y1 == y2)
		{
			if(rn(y1) && js(m1,d1, 2, 29) && js(2, 29, m2, d2))
			{
				printf("Case %d: %d\n", ++kase, 1);
				continue;
			}
			printf("Case %d: %d\n", ++kase, 0);
			continue;
		}
		int t = find(y2 - 1) - find(y1);
		if(rn(y1) && js(m1,d1, 2, 29)) t++;
		if(rn(y2) && js(2, 29, m2, d2)) t++;
		printf("Case %d: %d\n", ++kase, t);
	}
	return 0;
}
