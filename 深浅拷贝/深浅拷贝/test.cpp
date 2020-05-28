#define _CRT_SECURE_NO_WARNINGS 1
/*#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
//Éî¿½±´
namespace lpf
{
	class String
	{
	public:
		String(const char* s = "")
		{
			if (nullptr == s)
				s = " ";

			_str = new char[strlen(s) + 1];
			strcpy(_str, s);
		}
		String(const String& s)
			:_str(new char[strlen(s._str) + 1])
		{
			strcpy(_str, s._str);
		}
		String& operator=(const String& s)
		{
			String strTemp(s._str);
			swap(_str, strTemp._str);
			return *this;
		}
		~String()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}
	private:
		char* _str;
	};
}

int main()
{
	lpf::String s1("hello");
	lpf::String s2(s1);
	lpf::String s3;
	s3 = s1;
	return 0;
}*/

//stringµÄÉî¿½±´
#include<iostream>
using namespace std;

namespace lpf
{
	class string
	{
		string(const char* ptr = ""))
		{
			if (ptr == nullptr)
				ptr = "";

			_ptr = new char[strlen(ptr) + 1];
			strcpy(_ptr, ptr);
		}
		string(const string& tmp)
			:_ptr(new(strlen(tmp._str) + 1))
		{
			strcpy(_str, tmp._ptr);
		}
		string& operator=(const string& tmp)
		{
			string temp(tmp._ptr);
			swap(temp._ptr, _ptr);
			return *this;
		}
		~string()
		{
			if (_ptr) {
				delete[] _ptr;
				_ptr = nullptr;
			}
		}
	private:
		char* _ptr;
	};
}
int main()
{
	return 0;
}