/* 
 * File:   main.cpp
 * Author: Matija Belec <matijabelec1@gmail.com>
 * 
 * Created on December 30, 2015, 07:45 PM
 */

#include <iostream>
#include "include/reader.h"
#include "include/writer.h"
using namespace std;

int main() {
    
    bcfg::writer the_writer;
    
    bcfg::reader the_reader;
    if(the_reader.load_from_file("test.conf") ) {
        std::cerr << "error with loading configuration from file" << std::endl;
    } else {
        std::clog << "configuration loaded successfully" << std::endl;
    }
    
    return 0;
}

