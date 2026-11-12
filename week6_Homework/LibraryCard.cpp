/**
 *Week 6 HW
 * Dr Chibuzo Ukegbu
 * CS2210
 * .cpp file
 *
 */

#include "LibraryCard.h"


#include "LibraryCard.h"

#include <iostream>

bool LibraryCard::validHolder(const std::string& name) {
    return name.size() >= 2;
}

// Delegate to the full constructor.
LibraryCard::LibraryCard()
    : LibraryCard{"Guest", 0.0} {
}

// Delegate to the full constructor.
LibraryCard::LibraryCard(std::string name)
    : LibraryCard{name, 0.0} {
}

// All construction paths reach this constructor.
LibraryCard::LibraryCard(std::string name, double startingFine)
    : holder{validHolder(name) ? name : "Guest"},
      cardNumber{nextNumber++},
      booksOut{0},
      fines{startingFine < 0.0 ? 0.0 : startingFine} {

    ++activeCount;
}

LibraryCard::~LibraryCard() {
    --activeCount;
    std::cout << "Card " << cardNumber << " closed\n";
}

bool LibraryCard::setHolder(std::string name) {
    bool success{false};

    if (validHolder(name)) {
        holder = name;
        success = true;
    }

    return success;
}

bool LibraryCard::checkOut() {
    bool success{false};

    if (booksOut < MAX_BOOKS && fines <= CHECKOUT_FINE_LIMIT) {
        ++booksOut;
        success = true;
    }

    return success;
}

bool LibraryCard::returnBook(int daysLate) {
    bool success{false};

    if (booksOut > 0) {
        if (daysLate < 0) {
            daysLate = 0;
        }

        --booksOut;
        fines += daysLate * DAILY_FINE;
        success = true;
    }

    return success;
}

bool LibraryCard::payFine(double amount) {
    bool success{false};

    if (amount > 0.0 && amount <= fines) {
        fines -= amount;
        success = true;
    }

    return success;
}

void LibraryCard::print() const {
    std::cout << "Card " << cardNumber
              << " | " << holder
              << " | books: " << booksOut
              << " | fines: $" << fines
              << '\n';
}

int LibraryCard::activeCards() {
    return activeCount;
}