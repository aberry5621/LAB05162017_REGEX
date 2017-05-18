//
//  main.cpp
//  LAB05162017_REGEX
//
//  Created by ax on 5/18/17.
//  Copyright © 2017 COMP235. All rights reserved.
//
#include <regex>
#include <string>
#include <iostream>

int main(int argc, const char * argv[]) {

    std::cout << "REGEX!\n";

    std::string s1 ("20 watermelons, 11 oranges\n");
    std::regex e1 ("\\b11\\b");   // matches number 11 inside word blocks
    
    // using string/c-string (3) version:
    std::cout << std::regex_replace (s1,e1,"ZED");
    
    std::string s2 ("20 watermelons, 11 oranges\n");
    std::regex e2 ("\\bwater");   // matches character sequence "water" preceded by word block
    
    // using string/c-string (3) version:
    std::cout << std::regex_replace (s2,e2,"");
    
    std::string s3 = R"(html = "<div id="slider" class="container"></div>")";
    std::regex e3 ("slider");   // matches text "slider:
    
    // using string/c-string (3) version:
    std::cout << std::regex_replace (s3,e3,"slideshow");
    
    std::string s4a ("20201 K Street, Washington, DC");
    std::string s4b ("94920 B Street, San Rafael, CA");
    std::regex e4 ("\d\d\d\d\d");   // matches 5 number sequences
    
    std::cout << std::endl;
    
    // using string/c-string (3) version:
    std::cout << "Found sequence at: " << std::regex_search (s4a,e4) << std::endl;
    std::cout << "Found sequence at: " << std::regex_search (s4b,e4) << std::endl;
    
    
    return 0;
}
