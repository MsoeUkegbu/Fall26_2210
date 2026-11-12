//
// Created by ukegbu on 10/9/2026.
//


#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

#include <string>

class LibraryCard {
private:
    // Each object has its own copy of these members.
    std::string holder;
    const int cardNumber;
    int booksOut;
    double fines;

    // These members are shared by the entire class.
    inline static int nextNumber{5001};
    inline static int activeCount{0};

    static constexpr int MAX_BOOKS{3};
    static constexpr double CHECKOUT_FINE_LIMIT{5.00};
    static constexpr double DAILY_FINE{0.25};

    // Uses only its argument, so it does not need an object.
    static bool validHolder(const std::string& name);

public:
    LibraryCard();
    explicit LibraryCard(std::string name);
    LibraryCard(std::string name, double startingFine);

    // Prevent copying and copy assignment.
    LibraryCard(const LibraryCard&) = delete;
    LibraryCard& operator=(const LibraryCard&) = delete;

    ~LibraryCard();

    // Read-only access to an individual card.
    std::string getHolder() const { return holder; }
    int getNumber() const { return cardNumber; }
    int getBooksOut() const { return booksOut; }
    double getFines() const { return fines; }

    // Operations that may change an individual card.
    bool setHolder(std::string name);
    bool checkOut();
    bool returnBook(int daysLate);
    bool payFine(double amount);

    void print() const;

    // Reads shared class data; no object is required.
    static int activeCards();
};

#endif


