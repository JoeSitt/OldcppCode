/**
*	@file LinkedList.cpp
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#include "LinkedList.h"


LinkedList::LinkedList(){
  m_front = NULL;
	m_size = 0;
}


LinkedList::~LinkedList() {
  while(!isEmpty()){
		removeFront();
	}
}


bool LinkedList::isEmpty() const{
	if(m_front == NULL){
		return (true);
	}
	else{
		return(false);
	}
}


int LinkedList::size() const{
	return(m_size);
}


void LinkedList::printList() const{
	City* traverse = NULL;
	if(isEmpty()){
		std::cout << "";
	}
	else{
		traverse = m_front;
		while(traverse != NULL){
			std::cout << traverse -> getnameValue() << " with population "<<traverse -> getpopValue()<<" and infection level "<<traverse -> getinpopValue()<<"\n";
			traverse = traverse -> getNext();
		}
    std::cout<<"\n";
	}
}

void LinkedList::printcity(std::string a) const{
	City* traverse = NULL;
	if(isEmpty()){
		std::cout << "";
	}
	else{
		traverse = m_front;
		while(traverse != NULL){
      if(traverse -> getnameValue()==a){
			std::cout << traverse -> getnameValue() << " with population "<<traverse -> getpopValue()<<" and infection level "<<traverse -> getinpopValue()<<"\n";}
			traverse = traverse -> getNext();
		}
    std::cout<<"\n";
	}
}


bool LinkedList::search(int value) const{
	City* searcher = NULL;
	if(isEmpty()){
		return(false);
	}
	for(searcher = m_front; searcher != NULL; searcher = searcher-> getNext()){
		if(searcher -> getpopValue() == value){
			//std::cout << value << " is in the list";
			return(true);
		}

	}
	for(searcher = m_front; searcher != NULL; searcher = searcher-> getNext()){
		if(searcher -> getpopValue() != value){
			//std::cout << value << " is not in the list";
			return(false);
		}

	}

	return(true);
}

bool LinkedList::searchname(std::string value) const{
	City* searcher = NULL;
	if(isEmpty()){
		return(0);
	}
	for(searcher = m_front; searcher != NULL; searcher = searcher-> getNext()){
		if(searcher -> getnameValue() == value){
			//std::cout << value << " is in the list";
			return(1);
		}

	}
	for(searcher = m_front; searcher != NULL; searcher = searcher-> getNext()){
		if(searcher -> getnameValue() != value){
			//std::cout << value << " is not in the list";
			return(0);
		}

	}

	return(1);
}

void LinkedList::addBack(std::string name,int value,int value2){
	City* newNode = NULL; //creates new City
	City* traverse = NULL; //sifts through the Citys
	if(m_size == 0){
		m_front = new City();
		m_front -> setpopValue(value);
    m_front -> setinpopValue(value2);
    m_front -> setnameValue(name);
		m_size = m_size + 1;
	}
	else{
		m_size++;
		traverse = m_front;
		while(traverse -> getNext() != NULL){
			traverse = traverse -> getNext();
		}
		newNode = new City();
    newNode -> setpopValue(value);
    newNode -> setinpopValue(value2);
    newNode -> setnameValue(name);
		traverse -> setNext(newNode);
	}
}

void LinkedList::addBack( City* move) {
	City* newNode = NULL; //creates new City
	City* traverse = NULL; //sifts through the Citys
	if(m_size == 0){
		m_front = new City();
		m_front -> setpopValue(move->getpopValue());
    m_front -> setinpopValue(0);
    std::string stringy="new "+move->getnameValue();
    m_front -> setnameValue(stringy);
		m_size = m_size + 1;
	}
	else{
		m_size++;
		traverse = m_front;
		while(traverse -> getNext() != NULL){
			traverse = traverse -> getNext();
		}
		newNode = new City();
    newNode -> setpopValue(move->getpopValue());
    newNode -> setinpopValue(0);
    newNode -> setnameValue("new "+move->getnameValue());
		traverse -> setNext(newNode);
	}
  std::cout<<"node was created ";
}

void LinkedList::moveBack(City* moved){
	City* newNode = moved; //creates new City
	City* traverse = NULL; //sifts through the Citys
	if(m_size == 0){

	}
	else{
		//m_size++;
		traverse = m_front;
		while(traverse -> getNext() != NULL){
			traverse = traverse -> getNext();
		}
		newNode = moved;
    newNode->setNext(NULL);
    //newNode -> setpopValue(value);
    //newNode -> setinpopValue(value2);
    //newNode -> setnameValue(name);
		traverse -> setNext(newNode);
	}
}

void LinkedList::addFront(std::string name,int value,int value2){
	if(m_size == 0){
		m_front = new City();
    m_front -> setpopValue(value);
    m_front -> setinpopValue(value2);
    m_front -> setnameValue(name);
		m_size++;
	}
	else{
		m_size++;
		City* newFront = NULL;
		City* temp = NULL;
		temp = m_front;
		newFront = new City();
    newFront -> setpopValue(value);
    newFront -> setinpopValue(value2);
    newFront -> setnameValue(name);
		m_front = newFront;
	}
}

bool LinkedList::removeFront(){
	City* temp = NULL;
	if(isEmpty()){
		return(false);
	}
	else{
		m_size--;
		temp = m_front;
		m_front = m_front -> getNext();
		delete temp;
		temp = NULL;
		return(true);
	}
}

bool LinkedList::removeBack(){
	City*  newBack = NULL;
	City* back = NULL;
	if(isEmpty()){
		return(false);
	}
	else if(size() == 1){
		back = m_front;
		removeFront();
		return(true);
	}
	else{
		m_size--;
		back = m_front;
		while(back -> getNext() != NULL){
			back = back -> getNext();
		}
		newBack = m_front;
		while(newBack -> getNext() != back){
			newBack = newBack -> getNext();
		}
		delete back;
		back = NULL;
		newBack -> setNext(NULL);
		return(true);
	}
}


void LinkedList::increaseinpop(){
  City* traverse=m_front;
  int i=0;
//  increasecityinpop(traverse->getnameValue());
  while( i < m_size-1){
    //traverse = traverse -> getNext();
    increasecityinpop(traverse->getnameValue());
    traverse = traverse -> getNext();
    i++;

  }
  printList();

}


void LinkedList::increasecityinpop(std::string value ){
  City* ville=NULL;
  City* searcher;
  int i=0;
  for(searcher = m_front; i<m_size-1; searcher = searcher-> getNext()){
		if(searcher -> getnameValue() == value){
      ville=searcher;}
    i++;
    }
  if(ville==NULL){
  std::cout<<value<<" cannot be found";
  }
  else{
  ville->setinpopValue(ville->getinpopValue()+1);
  if(ville->getinpopValue()==1){
    ville->setpopValue(ville->getpopValue()/10);
  }
  if(ville->getpopValue()==2){
    ville->setpopValue(ville->getpopValue()/20);
  }
  if(ville->getpopValue()==3){
    ville->setpopValue(ville->getpopValue()/25);
    addBack(ville);

  }
  if(ville->getinpopValue()==4){
    if(!searchname(ville->getnameValue())){
      addBack(ville);
    }
    ville->setpopValue(ville->getpopValue()/100000000000000000000000);
  }
  }
}


void LinkedList::sort(){
  int i=0;
  int x=0;
  if(size()> 1){
    City* prev= NULL;
    City* cur=m_front;
    //City* Temp= NULL;
    City* next= m_front->getNext();
  while(i<m_size-0){
    x=0;
  prev= NULL;
  cur=m_front;
  //City* Temp= NULL;
  next= m_front->getNext();

  while(/*cur->getNext()!=NULL&&*/m_size>x){
    if(cur->getpopValue() > next->getpopValue()){

      if(cur=m_front){
        std::cout<<"split\n";
        m_front=cur->getNext();
        moveBack(cur);
      }
      else{
        prev->setNext(next);
        moveBack(cur);
      }
      prev=next;
      next=next->getNext();
      std::cout<<"change\n";
      printList();
    }
    else{
      prev=cur;
      cur=next;
      if(m_size-x>0){
      next=next->getNext();
    }
          std::cout<<"no change\n";
      printList();

    }
    x++;
    }
i++;


  }

  delete prev;
  //delete Temp;
  delete next;
  delete cur;
}
}
