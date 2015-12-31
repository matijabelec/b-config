/* 
 * File:   config_tree.cpp
 * Author: Matija Belec <matijabelec1@gmail.com>
 * 
 * Created on December 30, 2015, 8:50 PM
 */

#include "config_tree.h"

namespace bcfg {

config_tree::config_tree() {
}

config_tree::~config_tree() {
}

void config_tree::insert(std::string name, std::string value) {
    m_options[name] = value;
}

int config_tree::remove(std::string name) {
    if(m_options.erase(name) )
        return 0;
    
    return -1;
}

} // namespace bcfg
