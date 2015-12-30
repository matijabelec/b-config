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
    std::string name;
    std::string value;
    
    while(1) {
        getline(fs, line);
        if(fs.eof() )
            break;
        
        //TODO: get name and value from line
        
        // try to insert configuration option
        if(m_tree.insert(name, value) ) {
            return -1;
        }
    }
    fs.close();
    
    return 0;
}

} // namespace bcfg
