#include <iostream>
#include <string>
using namespace std;

class Books {
private:
    string title;
    string author;
    double price;
    string publisher;
    int stock;
public:
    Books() {
        title = "";
        author = "";
        price = 0.0;
        publisher = "";
        stock = 0;
    }
    Books(string t, string a, double p, string pub, int s) {
            title = t;
            author  = a;
            price = p;
            publisher = pub;
            stock = s;
        }
    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << " copies" << endl;
    }
    void processOrder(string searchTitle, string searchAuthor, int requiredCopies) {
        if (title == searchTitle && author == searchAuthor) {
            if (stock >= requiredCopies) {
                double totalCost = price * requiredCopies;
                cout << "Book is available. Total cost for " << requiredCopies << " copies: $" << totalCost << endl;
                stock -= requiredCopies;
            } else {
                cout << "Required copies not in stock." << endl;
            }
        } else {
            cout << "Book not found in the inventory." << endl;
        }
    }
};

int main() {
    Books book1("The Great Gatsby", "F. Scott Fitzgerald", 15.99, "Scribner", 10);
    cout << "Book details:" << endl;
    book1.displayBookDetails();
    cout << "\nEnter book details to search and order:" << endl;
    string searchTitle, searchAuthor;
    int requiredCopies;
    cout << "Enter title: ";
    getline(cin, searchTitle);
    cout << "Enter author: ";
    getline(cin, searchAuthor);
    cout << "Enter required copies: ";
    cin >> requiredCopies;
    book1.processOrder(searchTitle, searchAuthor, requiredCopies);
    return 0;
}