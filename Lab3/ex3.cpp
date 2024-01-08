#include <iostream>
#include <vector>
using namespace std;

class Book{
private:
    string title;
    string author;
    int ISBN;
    float price;
    static int instances;
public:
    Book(string title, string author, int ISBN, float price)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        this->price = price;
        instances++;
    }
    Book(const Book &book)
    {
        this->title = book.title;
        this->author = book.author;
        this->ISBN = book.ISBN;
        this->price = book.price;
    }
    static inline int getInstances()
    {
        return instances;
    }
    inline void setTitle(string title)
    {
        this->title = title;
    }
    inline string getTitle() const
    {
        return this->title;
    }
    inline void setAuthor(string author)
    {
        this->author = author;
    }
    inline string getAuthor() const
    {
        return this->author;
    }
    inline void setISBN(int ISBN)
    {
        this->ISBN = ISBN;
    }
    inline int getISBN() const
    {
        return this->ISBN;
    }
    inline void setPrice(float price)
    {
        this->price = price;
    }
    inline float getPrice() const
    {
        return this->price;
    }
    ~Book()
    {
        cout << "Destructor called for book." << endl;
    }
};
int Book::instances = 0;

int main()
{
    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;

    vector<Book> books;
    for (int i = 0; i < numBooks; i++)
    {
        string title, author;
        int ISBN;
        float price;
        cout << "Enter book details (title, author, ISBN, price): ";
        cin >> title >> author >> ISBN >> price;
        books.push_back(Book(title, author, ISBN, price));
    }

    cout << "Total book instances: " << Book::getInstances() << endl;

    string searchedAuthor;
    cout << "Enter the author's name to search for: ";
    cin >> searchedAuthor;

    bool found = false;
    cout << "Books by author '" << searchedAuthor << "':" << endl;
    for (const Book &book : books)
    {
        if (book.getAuthor() == searchedAuthor)
        {
            cout << "Title: " << book.getTitle() << ", ISBN: " << book.getISBN() << ", Price: " << book.getPrice() << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No books found for author '" << searchedAuthor << "'." << endl;
    }

    return 0;
}
