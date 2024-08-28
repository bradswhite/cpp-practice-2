#include <iostream>
//#include <vector>

#include "file_class/file_class.h"
#include "file_system/file_system.h"
// extend file_class with prompts??

int main()
{
  FileClass* file = new FileClass("./data/data.txt");
  file->write("Lorem ipsum dolor sit amet, officia excepteur ex fugiat reprehenderit enim labore culpa sint ad nisi Lorem pariatur mollit ex esse exercitation amet. Nisi anim cupidatat excepteur officia. Reprehenderit nostrud nostrud ipsum Lorem est aliquip amet voluptate voluptate dolor minim nulla est proident. Nostrud officia pariatur ut officia. Sit irure elit esse ea nulla sunt ex occaecat reprehenderit commodo officia dolor Lorem duis laboris cupidatat officia voluptate. Culpa proident adipisicing id nulla nisi laboris ex in Lorem sunt duis officia eiusmod. Aliqua reprehenderit commodo ex non excepteur duis sunt velit enim. Voluptate laboris sint cupidatat ullamco ut ea consectetur et est culpa et culpa duis.");
  std::cout << file->read() << std::endl;
  delete file;
 
  FileSystem* fileSys = new FileSystem("./data");

  fileSys->addFile("data1.txt");
  fileSys->addFile("data2.txt");
  fileSys->addFile("data3.txt");

  fileSys->writeFiles("Lorem ipsum dolor sit amet, qui minim labore adipisicing minim sint cillum sint consectetur cupidatat.");

  delete fileSys;

  return 0;
}
