#include "executive.h"


executive::executive(std::string filename) {
  // variables
//std::string file = filename;

std::ifstream file;
    file.open(filename);
    bool w=0;
if(!file){
  std::cout<<"the givin file didnt work\n";

}
int x = 0;

insize = 0;
choice = 0;

file >> insize;
//std::cout<<"car   " <<insize;
if(insize==0){
  choice=5;
  if(w==0){
    std::cout<<"either the given file wasnt formated correctly, or the given file had no one in it.\n";
  }
}
voter* voters = new voter[insize];
std::string a , b , d;
int c;
while (x < insize) {
  file >> a;
  file >> b;
  file >> c;
  file >> d;
voters[x] = voter(a, b, c, d);
//voters[x].printinfo(); //just test code

  x++;
}
votersx = voters;
file.close();
}

  // code
void executive::run() {
  while (choice != 5) {
    std::cout<< "what would you like to do? \n  1: Query last name\n  2: Query age range\n  3: Query affiliations\n  4: Report number of people with affiliation\n  5: Quit\n";

    std::cin >> choice;

    if ( choice == 1 ) {
      std::cout << "What last name would you like to search for?";
      std::cin>> searchin;
      int i = 0;
      bool z = 0;
      voter* voterx;
      while (i< (insize)) {
        //std::cout<<votersx[i].getlname() << " ";
        voterx = &votersx[i];
        if ( votersx[i].getlname() == searchin ) {
          voterx->printinfo();
          z = 1;
        }

        i++;
      }
      if (z == 0) {
        std::cout<< "no results found\n";
      }
      }

      if ( choice == 2 ) {
        int low,high;
        std::cout << "What is the lowest age you want?\n";
        std::cin>>low ;
        std::cout<<"what is the highest age you want?\n";
        std::cin>>high;
        int i = 0;
        bool z = 0;
        voter* voterx;
        while (i< (insize)) {
          //std::cout<<votersx[i].getlname() << " ";
          voterx = &votersx[i];
          if ( votersx[i].getage() >= low && votersx[i].getage() <= high ) {
            voterx->printinfo();
            z = 1;
          }

          i++;
        }
        if (z == 0) {
          std::cout<< "no results found\n";
        }
        }

        if ( choice == 3 ) {
          std::cout << "What party would you like to search for?";
          std::cin>> searchin;
          int i = 0;
          bool z = 0;
          voter* voterx;
          while (i< (insize)) {
            //std::cout<<votersx[i].getlname() << " ";
            voterx = &votersx[i];
            if ( votersx[i].getparty() == searchin ) {
              voterx->printinfo();
              z = 1;
            }

            i++;
          }
          if (z == 0) {
            std::cout<< "no results found\n";
          }
          }

          if ( choice == 4) {
            std::cout << "What party would you like to search for?";
            std::cin>> searchin;
            int q =0;
            int i = 0;
            /*bool z = 0;
            voter* voterx;*/
            while (i< (insize)) {
              //std::cout<<votersx[i].getlname() << " ";
              //voterx = &votersx[i];
              if ( votersx[i].getparty() == searchin ) {
                q++;
                //z = 1;
              }

              i++;
            }
            std::cout<< "there are "<< q << " members from that party.\n";

            }
    }
    std::cout<< "good bye";
  }
