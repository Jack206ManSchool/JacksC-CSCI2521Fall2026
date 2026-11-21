#include <string>

using namespace std;

class MorseType {
	public:
		MorseType(int s);
		void SetMIndex(int index, string value);
		string GetMIndex(int index);
		int GetMSize();
	private:
		int size;
		string letters[0];
};