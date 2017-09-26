#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.h"
#include "BinarySearchTree.h"
//#include "BinaryNode.h"

int main(int argc, char* argv[])
{
	//Example declaration of a BST
	//BinarySearchTree<Pokemon, std::string> bst;
	//Example adding
	//Pokemon p("Bulbasaur", 1, "Bulbasaur");
	//bst.add(p);
	Pokemon P;

	std::string name,a,strdex,jname;
	char q=',';
	//int choice=0;
	int i=0;
	int dex = 0;
	std::cout << "What file name would you like this saved to?" << std::endl;
	std::string filename;
	std::cin>>filename;
	std::ifstream file;
			file.open(argv[1]);
  std::ofstream usrfile (filename);

	while(getline(file, a)){
	i=0;
	name="";
	strdex="";
	jname="";
	while(a[i] != q){
		name=name+a[i];

		i++;
	}
	i++;
	while(a[i]!= q){
		strdex=strdex+a[i];
		i++;
	}
	i++;
	while(i<a.length()){
		jname=jname+a[i];
		i++;
	}

	//std::cout<<name<<" "<<strdex<<" "<<strjname<<"\n";
	dex=std::stoi(strdex,nullptr,10);
	usrfile << name<<" "<<dex<<" "<<jname << std::endl;
	//p = Pokemon(name, dex, jname);
	P.setdexValue(dex);
	P.setjnameValue(jname);
	P.setnameValue(name);
	//bst.add(P);
	//p = Pokemon();
	}
	file.close();
	usrfile.close();
	return 42;
}
