#pragma once
#include "Ordenamiento1.h"

template <typename T>
class List
{
	struct Node
	{
		T* item ;
		Node* next;
		Node* anterior;

		Node(T* item) {
			this->item = item;
			this->next = nullptr;
		}

	};
	
	Node* head;
	Node* tail;
	int size = 0;

public:
	int getSize() {
		return this->size;
	}

	bool isEmpty() {
		return this->size == 0;
	}

	void add(T* item) {
		Node* node = new Node(item);

		if (this->isEmpty()) {
			this->head = this->tail = node;
		}
		else {
			this->tail->next = node;
			this->tail = this->tail->next;
		}
		
		this->size++;
	}

	T* get(int index) {

		if (index >= this->size || index < 0) {
			return nullptr;
		}

		Node* iterator = this->head;
		int i = 0;
		while (i < index) {
			iterator = iterator->next;
			i++;
		}
		return iterator->item;
	}

	void clear() {
		this->head = nullptr;
		this->tail = nullptr; 
		this->size = 0;
	}

	List<T>* bubbleSort(Ordenamiento1<T>* comparator, int n) {
		Node** i = &(this->head);
		
		
		while (*i != nullptr) {

			Node** j = &(*i)->next;

			
			while (*j != nullptr) {
				T** itemA = &(*i)->item;	
				T** itemB = &(*j)->item;
				
				
				if (n == 0) {

					if (comparator->compare(**itemA, **itemB) > 0) {
						T* aux = *itemA;
						*itemA = *itemB;
						*itemB = aux;
					}
				}
				if (n == 1) {
					if (comparator->compare(**itemA, **itemB) < 0) {
						T* aux = *itemA;
						*itemA = *itemB;
						*itemB = aux;
					}
				}
				
				
				j = &(*j)->next;
			}

			i = &(*i)->next;
		}
		
		return this;
	}

	void RemoveAt(int index) {

		Node* temp = this->head;
		int count = 0;
		while (temp != nullptr) {

			if (index == 0) {
				this->head = temp->next;
				break;
			}
			if (index > 0 && count == (index - 1)) {
				temp->next = temp->next->next;
			}

			count++;
			temp = temp->next;
		}
		this->size--;
	}
};

