/* 
 * File:   reader.cpp
 * Author: Matija Belec <matijabelec1@gmail.com>
 * 
 * Created on December 30, 2015, 7:55 PM
 */

#include "reader.h"

namespace bcfg {

reader::reader() {
    //TODO: implement
}

reader::~reader() {
    //TODO: implement
}

int reader::load_from_file(const char* filename) {
    std::ifstream fs(filename);
    
    if(!fs.is_open() )
        return -1;
    
    std::string line;
    while(1) {
        getline(fs, line);
        if(fs.eof() )
            break;
        
        //TODO: save configuration option
    }
    fs.close();
    
    return 0;
}

} // namespace bcfg
