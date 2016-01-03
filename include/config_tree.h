/* 
 * File:   config_tree.h
 * Author: Matija Belec <matijabelec1@gmail.com>
 *
 * Created on December 30, 2015, 8:50 PM
 */

#ifndef CONFIG_TREE_H
#define CONFIG_TREE_H

#include <map>

namespace bcfg {

class config_tree {
    private:
        std::map<std::string, std::string> m_options;
        
    public:
        config_tree();
        virtual ~config_tree();
        
        /**
         * inserts option to options
         * 
         * @param name      name of option to insert
         * @param value     value for option to insert
         * @return integer  returns 0 if no errors
         */
        int insert(std::string name, std::string value);
        
        /**
         * remove option from options by name
         * 
         * @param name      name of option to remove
         * @return integer  returns 0 if no errors, otherwise returns error id
         */
        int remove(std::string name);
};

} // namespace bcfg

#endif /* CONFIG_TREE_H */

