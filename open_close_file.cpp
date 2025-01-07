#include <iostream>
// #include <color>
// #include <graphics.h>
using namespace std;


//constructor simple exmaple


class FileHandle{
	
	public:
		explicit FileHandle(ofstream& stream, const char* filepath) : _stream(stream) {
			_stream.open(filepath);
			
		}
		
		~FileHandle {
			_stream.close();
		}
		
	private:
		ofstream& _stream;
		
};
int main()
{
	

	return 0;
}

