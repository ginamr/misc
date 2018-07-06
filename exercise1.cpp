// Implement a method to perform basic string compression using the counts
// of repeated characters. You can assume the string has only uppercase and lowercase letters

#include <iostream>
#include <string>

using namespace std;

string str_compress(const char* s)
{
	string result;
	char* current = const_cast<char*>(s);
	char* look_ahead = current + 1;
	while (*current && *look_ahead)
	{
		result.append(1, *current);

		int count = 1;
		while (*current++ == *look_ahead++)
		{
			count++;
		}
		string strCount = std::to_string(count);

		result.append(strCount);
	}

	return result;
}

int main()
{
	const char* test1 = "aaAAbbBBcccCCCddddDDDDeeeeeEEEEEffffffFFFFFF";
	//a2A2b2B2c3C3d4D4e5E5f6F6
	string result1 = str_compress(test1);
	std::cout << "result1 = " << result1 << std::endl;
}
