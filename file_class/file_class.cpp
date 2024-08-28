#include "file_class.h"

FileClass::FileClass(std::string name) : name(name) {
  // Check if file already exists then create file
  if (!std::filesystem::exists(name))
    write("\n");
}

std::string FileClass::read()
{
  std::ifstream file(name, std::ifstream::in);
  std::string data;
  while (!file.eof()) { getline(file, data); }
  file.close();
  return data;
}

void FileClass::write(std::string text)
{
  std::ofstream file(name);
  file << text;
  file.close();
}

void FileClass::destroy()
{
}
