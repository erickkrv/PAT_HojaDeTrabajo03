#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
	Node<int>* head2 = nullptr;
	Node<int>* tail2 = nullptr;
	Node<int>* aux = head;

	while(aux != nullptr)
	{
		Node<int>* nodo2 = new Node<int>{aux->value};
		if(head2 == nullptr)
		{
			head2 = nodo2;
			tail2 = nodo2;
		}
		else
		{
			tail2->next = nodo2;
			tail2 = nodo2;
		}
		aux = aux->next;
	}
	return head2;
}
