#if !defined WRITE_FILE_H
#define WRITE_FILE_H

#include "Text.h"
#include <fstream>
using namespace std;

class WriteFile {
	
	private:
		ofstream output_file;
		bool closed;
		
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		
		WriteFile* createWriteFile(const char* file_name);
		void destroyWriteFile(WriteFile* wf);
		void writeLine(WriteFile* wf, String* line);
		void close(WriteFile* wf);
		
};

#endif
