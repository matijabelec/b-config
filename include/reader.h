/* 
 * File:   reader.h
 * Author: Matija Belec <matijabelec1@gmail.com>
 *
 * Created on December 30, 2015, 7:55 PM
 */

#ifndef READER_H
#define READER_H

#include <fstream>
#include "config_tree.h"

namespace bcfg {

class reader {
    public:
        reader();
        virtual ~reader();
        
        /**
         * used to load configuration options from file
         * 
         * @param filename  as configuration file
         * @param configs   object used to fill with loaded keys
         * @return integer  returns 0 if no error, otherwise returns error id
         */
        int load_from_file(const char* filename, bcfg::config_tree& configs);
        
};

} // namespace bcfg

#endif /* READER_H */

