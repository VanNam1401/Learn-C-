#include <iostream>
#include <vector>
using namespace std;

class Card
{
private:
    string nameBook;
    string nameAuthor;
    int numberBook;

public:
    Card()
    {
    }
    Card(string nameBook, string nameAuthor, int numberBook)
    {
        this->nameBook = nameBook;
        this->nameAuthor = nameAuthor;
        this->numberBook = numberBook;
    }
    void display()
    {
        cout << "Name Book: " << this->nameBook << endl;
        cout << "Name Author: " << this->nameAuthor << endl;
        cout << "Number Book: " << this->numberBook << endl;
    }
    int getNumBook()
    {
        return this->numberBook;
    }
    static void sortCards(vector<Card> &cards)
    {
        for (int i = 0; i < cards.size() - 1; i++)
        {
            for (int j = i + 1; j < cards.size(); j++)
            {
                if(cards[i].getNumBook() > cards[j].getNumBook())
                {
                    swap(cards[i], cards[j]);
                }
            }
        }
        for(int i=0;i<cards.size();i++)
        {
           cout << cards[i].numberBook << " " << cards[i].nameBook << " " << cards[i].nameAuthor << endl;
        }
    }
};

int main() {
	vector<Card> cards;
	cards.push_back(Card("Kinh tu the", "Hong Hung ", 1));
	cards.push_back(Card("Kinh phat", "Hong dao ", 6));
	cards.push_back(Card("Kinh ta dao", "Hong hong ", 2));
	cards.push_back(Card("Kinh kong", "Hong hi ", 5));
    Card vt;
    vt.sortCards(cards);
	 for (auto x: cards) {
			 x.display();
	}
}