#include <iostream>
#include <string>
using namespace std;


// ��������е���߲���,����ֻ��Ҫ��������Ҫ��Ϳ�����
// 1, P �� T ֻ����һ����PAT���������붼Ҫ��
// 2, P֮ǰ���ַ�������PT֮����ַ�������T֮����ַ���
// 3, PT֮��������ַ�

int main()
{
	int n;
	cin >> n;
	string str;

	while (n--) {
		cin >> str;
		int P = 0, A = 0, T = 0;
		int pre = 0, last = 0, i = 0;

		for (i = 0; i < str.size(); i++)
		{
			if (str[i] == 'P') P++, pre = i;
			else if (str[i] == 'A') A++;
			else if (str[i] == 'T') T++, last = i;
			else break;
		}

		int flag = (P == 1 && T == 1 && A > 0 && last - pre != 1 && (pre - 0) * (last - pre - 1) == str.size() - last - 1);
		printf("%s\n", (i >= str.size() && flag) ? "YES" : "NO");
	}
	return 0;
}