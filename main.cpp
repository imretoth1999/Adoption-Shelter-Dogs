#include "Dog.h"
#include "UI.h"
#include "Test.h"
#include <Windows.h>
#include "DogValidator.h"
#include "RepositoryException.h"
using namespace std;

int main()
{
	//Test t;
	//t.testAll();
	DogValidator v;
	Repository repo{};
	repo.readFromFile();
	/*Dog d1{ "Labrador","Rex",1,"https://gfp-2a3tnpzj.stackpathdns.com/wp-content/uploads/2016/07/Charcoal-Labrador-Puppies-for-Sale-600x600.jpg" ,10 };
	Dog d2{ "Golden Retriever","Jack",2,"http://www.dogbreedslist.info/uploads/allimg/dog-pictures/Golden-Retriever-2.jpg",1 };
	Dog d3{ "Pitbull","Inka",3,"https://5.imimg.com/data5/GX/VI/MY-1596325/pitbull-dog-breed-250x250.jpg",4 };
	Dog d4{ "Teckel","Mike",4,"https://img01-olxro.akamaized.net/img-olxro/179957217_1_261x203_teckel-de-inalta-calitate-genetica-bucuresti.jpg",3 };
	Dog d5{ "Pug","Jane",5,"https://img01-olxro.akamaized.net/img-olxro/197921025_1_261x203_mops-pug-oradea.jpg",5 };
	Dog d6{ "German Sheppard","Milo",6,"http://cdn1-www.dogtime.com/assets/uploads/gallery/german-shepherd-dog-breed-pictures/happysitting-8.jpg" ,6 };
	Dog d7{ "Bulldog","James",7,"https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSQ9VKW8SoCos3IvZulenZQJtbFVKDh1_5jWbfTDSfWnpyIDjSJwg" ,2 };
	Dog d8{ "Beagle","Jessica",8,"https://img01-olxro.akamaized.net/img-olxro/64344400_1_261x203_puiuti-beagle-de-vanzare-oradea.jpg",2 };
	Dog d9{ "Pudel","Martha",1,"https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT8XQv3hFkRWnDzJmQzxse0EXvTmt1c_7q6oqIfO4SU10hcmTghFw" ,1 };
	Dog d10{ "Dobermann","Lucky",10,"https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSWT_IEZ2205jP4IyKIRmxPaPAcaVPuQWm2r_2M-WHhrCxex9HZpw",8 };
	repo.addDogRepo(d1);
	repo.addDogRepo(d2);
	repo.addDogRepo(d3);
	repo.addDogRepo(d4);
	repo.addDogRepo(d5);
	repo.addDogRepo(d6);
	repo.addDogRepo(d7);
	repo.addDogRepo(d8);
	repo.addDogRepo(d9);
	repo.addDogRepo(d10);*/
	Controller ctrl{ repo,v };
	UI ui{ ctrl };
	ui.run();
	return 0;
}