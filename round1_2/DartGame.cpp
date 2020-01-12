#include <iostream>
#include<math.h>
#include <string>
#define Max_Score 10
using namespace std;

int main() {

	string score;
	int result[3] = { 0, };
	int j = 0;
	cin >> score;

	for (int i = 0; i < score.length(); i++)
	{
		if (score[i] == 'S' || score[i] == 'T' || score[i] == 'D')  //bonus
		{
			if ('S' == score[i]) { result[j] = pow(result[j], 1); }
			else if ('D' == score[i]) { result[j] = pow(result[j], 2); }
			else if ('T' == score[i]) { result[j] = pow(result[j], 3); }
			if (score[i + 1] != '*' && score[i + 1] != '#') { j++; }
		}
		else if (score[i] == '*' || score[i] == '#') //option
		{
			if ('*' == score[i]) {
				result[j] = result[j] * 2;

				if (j != 0)
					result[j - 1] = result[j - 1] * 2;

			}
			else if ('#' == score[i])
				result[j] = result[j] * -1;


			j++;
		}
		else { // number
			result[j] = score[i] - '0';
			if (score[i + 1] == '0') {
				result[j] = Max_Score;
				i++;
			}
		}
	}
	int sum = 0; // All Score Total
	cout << endl;
	for (int i = 0; i < 3; i++) {
		sum += result[i];
	}
	cout << sum << endl;
}