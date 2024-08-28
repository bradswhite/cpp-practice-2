#pragma once
#include <iostream>
#include <fstream>

#ifndef FILE_CLASS_H
#define FILE_CLASS_H

class FileClass
{
  public:
    std::string name;

    FileClass(std::string name);
 
    void write(std::string text);
    std::string read();
  
    void destroy();

};

#endif
