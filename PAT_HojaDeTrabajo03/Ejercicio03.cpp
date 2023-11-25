#include "Ejercicio03.h"
#include <unordered_map>
using namespace std;
Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    if (!head) return nullptr;

    std::unordered_map<Node<int>*, Node<int>*> nodeMap;

    Node<int>* current = head;
    while (current) {
        nodeMap[current] = new Node<int>{current->value};
        current = current->next;
    }

    current = head;
    while (current) {
        nodeMap[current]->next = nodeMap[current->next];
        nodeMap[current]->random = nodeMap[current->random];
        current = current->next;
    }

    return nodeMap[head];
}
