#include "simple_list.h"
#include "person_struct.h"

int main() {
  Node<int>* head = nullptr;

  AddFront(&head, 1);
  AddBack(&head, 2);
  AddBack(&head, 3);

  std::cout << "List: ";
  PrintList(head);

  RemoveFront(&head);

  std::cout << "After removing front: ";
  PrintList(head);

  // Clean up memory
  DeleteList(&head);

  Node<Person>* headPerson = nullptr;
  AddFront(&headPerson, Person{"Name", "00000"});
  PrintList(headPerson);
  DeleteList(&headPerson);

  return 0;
}
