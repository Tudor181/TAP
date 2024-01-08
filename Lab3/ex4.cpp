#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


class Actor {
private:
    string lastName;
    string firstName;
    int age;
    string role;
    static int instances;

public:
    Actor(string lastName, string firstName, int age, string role) {
        this->lastName = lastName;
        this->firstName = firstName;
        this->age = age;
        this->role = role;
        instances++;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    string getLastName() {
        return this->lastName;
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    string getFirstName() {
        return this->firstName;
    }

    void displayDetails() {
        cout << "Last Name: " << this->lastName << endl;
        cout << "First Name: " << this->firstName << endl;
        cout << "Age: " << this->age << endl;
        cout << "Role: " << this->role << endl;
    }

    static int getInstances() {
        return instances;
    }

    ~Actor() {
        cout << "Destructor called." << endl;
    }
};


class Movie {
private:
    string title;
    string director;
    int releaseYear;
    float duration;
    static int instances;
    vector<Actor> actors;
    int movieBudget;

public:
    Movie(string title, string director, int releaseYear, float duration, int movieBudget, vector<Actor> actors) {
        this->title = title;
        this->director = director;
        this->releaseYear = releaseYear;
        this->duration = duration;
        instances++;
        this->actors = actors;
        this->movieBudget = movieBudget;
    }

    friend void sortByBudget(Movie x);
    friend void sortByActorCount(Movie x);
    friend void printCommonActors(Movie x, Movie y);

    void addActor(Actor actor) {
        this->actors.push_back(actor);
    }

    void removeActor(Actor actor) {
        for (int i = 0; i < this->actors.size(); i++) {
            if (this->actors[i].getLastName() == actor.getLastName() && this->actors[i].getFirstName() == actor.getFirstName()) {
                this->actors.erase(this->actors.begin() + i);
            }
        }
    }
};

void printCommonActors(Movie x, Movie y) {
    map<string, Actor> actorsFromX;
    for (auto actor : x.actors) {
        actorsFromX[actor.getLastName() + actor.getFirstName()] = actor;
    }

    for (auto actor : y.actors) {
        if (actorsFromX.find(actor.getLastName() + actor.getFirstName()) != actorsFromX.end()) {
            cout << actor.getLastName() << " " << actor.getFirstName() << endl;
        }
    }
}

void sortByBudget(Movie x) {
    sort(x.actors.begin(), x.actors.end(), [](Actor a, Actor b) { return a.getLastName() < b.getLastName(); });
}

void sortByActorCount(Movie x) {
    sort(x.actors.begin(), x.actors.end(), [](Actor a, Actor b) { return a.getLastName() < b.getLastName(); });
}

int main()
{

    Actor actor1("John", "Doe", 30, "Lead");
    Actor actor2("Alice", "Smith", 25, "Supporting");
    Actor actor3("Michael", "Johnson", 35, "Villain");
    Actor actor4("Emily", "Brown", 28, "Companion");


    Film movie1("Adventure in Space", "Steven Spielberg", 2010, 2.5, 2000000, {actor1, actor2});
    Film movie2("Journey to the Unknown", "Christopher Nolan", 2015, 3.0, 3000000, {actor3, actor4});


    cout << "Common Actors in the Movies:" << endl;
    printCommonActors(movie1, movie2);


    cout << "Total Actor Instances: " << Actor::getInstante() << endl;

    return 0;
}
