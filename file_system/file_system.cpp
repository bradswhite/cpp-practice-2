#include "file_system.h"

FileSystem::FileSystem() {}
FileSystem::FileSystem(std::string parentDir) : parentDir(parentDir) {}

void FileSystem::addFile(std::string fileName)
{
  FileClass newFile(parentDir + "/" + fileName);
  fileClasses.push_back(newFile);
}

// readFiles();

void FileSystem::writeFiles(std::string text)
{
  std::for_each(fileClasses.begin(), fileClasses.end(), [text](FileClass fc) { fc.write(text); });
}
