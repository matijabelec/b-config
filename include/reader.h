/* 
 * File:   reader.h
 * Author: Matija Belec <matijabelec1@gmail.com>
 *
 * Created on December 30, 2015, 7:55 PM
 */

#ifndef READER_H
#define READER_H

#include <fstream>

namespace bcfg {

class reader {
    private:
        
    public:
        reader();
        virtual ~reader();
        
        /**
         * used to load configuration options from file
         * 
         * @param filename   as configuration file
         * @return integer  returns 0 if no error, otherwise returns error id
         */
        int load_from_file(const char* filename);
        
};

} // namespace bcfg

#endif /* READER_H */

