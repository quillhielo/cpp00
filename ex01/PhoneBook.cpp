#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contact_count_ = 0;
    next_index_ = 0;
}

void PhoneBook::addContact(Contact contact)
{
        contacts_[next_index_] = contact;
        if(contact_count_ < 8)
            contact_count_++;
        next_index_ = (next_index_ + 1) % 8;
}

void PhoneBook::displayContactDetails(int index) const
{
    std::cout << "First name: " << contacts_[index - 1].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts_[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts_[index - 1].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts_[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts_[index - 1].getDarkestSecret() << std::endl;
    std::cout << std::endl;
}

void PhoneBook::displayContacts() const 
{
    std::string abreviature = "";
    std::string input;
    int index = 0;
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    if (contact_count_ == 0)
        return;
    for (int i = 0; i < contact_count_; i++) 
    {
        std::cout << std::setw(10) << i + 1 << "|";
        if(contacts_[i].getFirstName().length() > 10)
        {
            abreviature = contacts_[i].getFirstName().substr(0, 9) + ".";
            std::cout << std::setw(10) << abreviature << "|";
        }
        else
            std::cout << std::setw(10) << contacts_[i].getFirstName() << "|";
        if (contacts_[i].getLastName().length() > 10)
        {
            abreviature = contacts_[i].getLastName().substr(0,9) + ".";
            std::cout << std::setw(10) << abreviature << "|";
        }
        else
            std::cout << std::setw(10) << contacts_[i].getLastName() << "|";
        if (contacts_[i].getNickname().length() > 10)
        {
            abreviature = contacts_[i].getNickname().substr(0,9) + ".";
            std::cout << std::setw(10) << abreviature ;
        }
        else
            std::cout << std::setw(10) << contacts_[i].getNickname();
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter contact index to view details: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (!input.empty() && input[0] >= '1' && input[0] <= contact_count_ + '0' && input.length() == 1)
    {
        index = input[0] - '0';
    }
    else
    {
        std::cout << "Invalid input, returning to main menu." << std::endl;
        std::cout << std::endl;
        return;
    }
    displayContactDetails(index);

}

PhoneBook::~PhoneBook(){};