/****************************************************
 *						Problem 13					*
 * https://leetcode.com/problems/roman-to-integer/  *
 ****************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		std::string out;
		std::vector<std::pair<int, std::string>> map{
			{1000, "M"},
			{900, "CM"},
			{500, "D"},
			{400, "CD"},
			{100, "C"},
			{90, "XC"},
			{50, "L"},
			{40, "XL"},
			{10, "X"},
			{9, "IX"},
			{5, "V"},
			{4, "IV"},
			{1, "I"}
		};
		for (const auto& p : map)
		{
			while (num >= p.first)
			{
				out += p.second;
				num -= p.first;
			}
		}
		return out;
	}
};

int main()
{
	Solution s;
	int input;
	std::cin >> input;
	std::cout << s.intToRoman(input);
	return 0;
}