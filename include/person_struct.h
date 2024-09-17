#ifndef PERSON_STRUCT_H_
#define PERSON_STRUCT_H_

#include <iostream>

struct Person {
  std::string name;
  std::string id;
};

// Overload the << operator for Person struct
std::ostream& operator<<(std::ostream& os, const Person& person) {
  os << "ID: " << person.id << ", Name: " << person.name;
  return os;
}

#endif