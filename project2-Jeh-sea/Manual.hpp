#ifndef MANUAL_HPP
#define MANUAL_HPP

#include <iostream>
#include <regex>
#include "Book.hpp"
using namespace std; 

class Manual : public Book 
{

    public:
        Manual();
        Manual(const string& Title, const string& Author, const int& Page_Count, const string& device, const string& URL = "",  
               const bool& Digital = false, const bool& visual_aid = false);
        string setDevice(string& device);
        string setWebsite(string& website_link);
        bool setVisualAid();
        
        string getDevice();
        string getWebsite();

        bool hasVisualAid();
        bool hasWebsite();
        
    private: 
        string device; 
        string URL; 
        bool visual_aid;
        bool website;  
};
#endif