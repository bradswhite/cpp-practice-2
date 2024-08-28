#pragma once

#include <vector>

#include "../file_class/file_class.h"

#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

class FileSystem
{
  std::vector<FileClass> fileClasses;
  std::string parentDir = "./";
  
  public:
    FileSystem();
    FileSystem(std::string parentDir);

    void addFile(std::string fileName);

    // readFiles();

    void writeFiles(std::string text);
};

#endif
