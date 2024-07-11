#ifndef _funkcje_h_
#define _funkcje_h_

#include <iostream>
#include "produkt.h"

template <class T>
class List
{
	struct Element
	{
		T value;
		Element *next;
		Element *prev;
	};
	Element *first;
	Element *last;
	int fCapacity;
	
	public:
	
	List();
	List(List &oryginalnaLista);
	~List();
	void AddLast(T val);
	void AddFirst(T val);
	void PrintList();
	int Capacity() {return fCapacity;};
	void RemoveLast();
	void RemoveFirst();
	void Clear();
	T GetLast() {return last->value;};
	T GetFirst() {return first->value;};
	void AddAt(int id, T val);
	void RemoveAt(int id);
	T GetAt(int id);
};

template <class T>
List<T>::List()
{
	fCapacity=0;
	first=NULL;
	last=NULL;
}

template <class T>
List<T>::List(List &oryginalnaLista)
{
	fCapacity=oryginalnaLista.fCapacity;
	first=oryginalnaLista.first;
	last=oryginalnaLista.last;
}

template <class T>
List<T>::~List()
{
	if (fCapacity==0)
	{
		std::cout << "\n\nDestruktor: Lista jest pusta!\n\n";
	}
	else
	{
		Clear();
	}
}

template <class T>
void List<T>::AddLast(T val)
{
	Element *elem = new Element;
	elem->value=val;
	elem->next=NULL;
	if (fCapacity==0)
	{
		elem->prev=NULL;
		
		first = elem;
		last = elem;
	}
	else
	{
		elem->prev=last;
		
		last->next = elem;
		last = elem;
	}
	fCapacity++;
}

template <class T>
void List<T>::RemoveLast()
{
	if (fCapacity==0)
	{
		std::cout << "\n\nRemove: Lista jest juz pusta!\n\n";
	}
	else if (fCapacity==1)
	{
		delete last;
		first = NULL;
		last = NULL;
	}
	else
	{
		last=last->prev;
		delete last->next;
		last->next=NULL;
	}
	fCapacity--;
}


template <class T>
void List<T>::AddFirst(T val)
{
	Element *elem = new Element;
	elem->value = val;
	elem->prev=NULL;
	if (fCapacity==0)
	{
		elem->next=NULL;
		
		first = elem;
		last = elem;
	}
	else
	{
		elem->next=first;
		
		first->prev = elem;
		first = elem;
	}
	fCapacity++;
}

template <class T>
void List<T>::RemoveFirst()
{
	if (fCapacity==0)
	{
		std::cout << "\n\nRemove: Lista jest juz pusta!\n\n";
	}
	else if (fCapacity==1)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first=first->next;
		delete first->prev;
		first->prev=NULL;
	}
	fCapacity--;
}

template <class T>
void List<T>::PrintList()
{
	Element *tmp;
	tmp=first;
	for (int i=0; i<fCapacity; i++)
	{
		std::cout << "\nElement " << i << ": " << tmp->value;
		tmp=tmp->next;
	}
}

template <class T>
void List<T>::Clear()
{
	for (int i=0; i<=fCapacity; i++)
	{
		RemoveLast();
	}
}

template <class T>
void List<T>::AddAt(int id, T val)
{
	if (id==0)
	{
		AddFirst(val);
	}
	else if (id==fCapacity)
	{
		AddLast(val);
	}
	else
	{
		Element *elem = new Element;
		elem->value = val;
		Element *tmp;
		tmp=first;
		for (int i=0; i<id; i++)
		{
			tmp=tmp->next;
		}
		elem->prev=tmp->prev;
		elem->next=tmp;
		tmp->prev->next=elem;
		tmp->prev=elem;

		fCapacity++;
	}
}

template <class T>
void List<T>::RemoveAt(int id)
{
	if (id==0)
	{
		RemoveFirst();
	}
	else if (id==fCapacity)
	{
		RemoveLast();
	}
	else
	{
		Element *tmp;
		tmp=first;
		for (int i=0; i<id; i++)
		{
			tmp=tmp->next;
		}
		tmp->prev->next=tmp->next;
		tmp->next->prev=tmp->prev;
		delete tmp;

		fCapacity--;
	}
}

template <class T>
T List<T>::GetAt(int id)
{
	if (id==0)
	{
		GetFirst();
	}
	else if (id==fCapacity)
	{
		GetLast();
	}
	Element *tmp;
	tmp=first;
	for (int i=0; i<id; i++)
	{
		tmp=tmp->next;
	}
	return tmp->value;
}

#endif
