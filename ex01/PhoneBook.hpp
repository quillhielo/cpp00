#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts_[8];
        int contact_count_;
        int next_index_;
    public:
        PhoneBook();
        void addContact(Contact contact);
        void displayContacts()const;
        void displayContactDetails(int index)const;
        ~PhoneBook();
};



