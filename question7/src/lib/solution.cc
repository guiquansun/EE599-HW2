#include "solution.h"

std::map<char,char> Solution::JudgeMappable(std::string from, std::string to){
    std::map<char,char> result;
    std::map<char,char> noelement;
    if (from.size()!=to.size()) {
      return noelement;
    }

    if (from.size() == 0 || to.size() == 0) {
      return noelement;
    } 
    if (from.size() == 1 || to.size() == 1) {

      result.insert(std::pair<char,char>(from[0],to[0]));

      return result;

    }
    
    for(int i = 0; i < from.size(); i++){

      if (from[i] == to[i]) {

        return noelement;
        
      }
      else {
        result.insert(std::pair<char,char>(from[i],to[i]));

      }
    }

    for(int m  = 0; m < from.size()-1; m++){

      for(int n = m + 1; n < from.size(); n++){

        if(from[m] == from[n] && to[m]!=to[n]) {

          return noelement;

        }
      }
      
    }

    return result;
  }
