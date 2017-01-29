#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name){
	
	output_file.open(file_name)
	closed = false;
    
}

WriteFile::~WriteFile(){
	
	output_file.close();
	delete[] file_name;
	
}

void WriteFile::close(){
	
	if(!closed){
		
		output_file.close();
		closed = true;
		
	}
	
}

void WriteFile::writeLine(String* line){
	
	if (!closed && length(line) > 0){
		
		output_file << getText(line) << endl;
		
	}
	
}


