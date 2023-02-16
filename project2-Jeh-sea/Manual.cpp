#include "Book.hpp"
#include "Manual.hpp"

Manual::Manual() {
    URL = "";
    device = "";
    visual_aid = "";
    website = "";
}

Manual::Manual(const string& Title, const string& Author, const int& Page_Count, const string& device, const string& URL = "",  
               const bool& Digital = false, const bool& visual_aid = false) {
    this->title_ = Title; 
    this->author_ = Author; 
    this->pageCount_ = Page_Count; 
    this->digital_ = Digital;
    this->device = device;
    this->URL = URL;
    this->visual_aid = visual_aid;
}

string Manual::setDevice(string& device) {
    this->device = device; 
}

string Manual::setWebsite(string& website_link)
{
    regex website_pattern("(https?://)?(www\\.)?[a-zA-Z0-9]+\\.[a-zA-Z]{2,}");
    if (regex_match(website_link, website_pattern))
    {
        URL = website_link;
        website = true;
        return true;
    }
    else
    {
        URL = "Broken Link";
        website = true;
        return false;
    }
}

bool Manual::setVisualAid() {
    this->visual_aid = true;
}

string Manual::getDevice() {
    return this->device; 
}

string Manual::getWebsite() {
    return this->URL; 
}

bool Manual::hasVisualAid() {
    return this->visual_aid;
}

bool Manual::hasWebsite() {
    return !this->URL.empty();
}