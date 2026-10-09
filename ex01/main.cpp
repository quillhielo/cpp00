#include "PhoneBook.hpp"
#include "Contact.hpp"

int    isAsciiPrintable(const std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        char c = char(str[i]);
        if (c < 32 || c > 126)
        {
            std::cout << "Use only printable ASCII characters:" << std::endl;
            return (0);
        }
    }
    return (1);
}
int     isNumeric(const std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        char c = char(str[i]);
        if(c < 48 || c > 57)
        {
            std::cout << "Use only numeric characters" << std::endl;
            return (0);
        }
    }
    return (1);
}

int main(void)
{
    PhoneBook   phonebook;
    Contact     contact;
    std::string input;

    std::cout << "Welcome to the PhoneBook application!" << std::endl;
    std::cout << "Choose an option: ADD, SEARCH, or EXIT" << std::endl;
    std::getline(std::cin, input);
    while(input != "EXIT")
    {
        if (input == "ADD")
        {
            std::cout << std::endl;
            std::cout << "First name : ... " << std::endl;
            std::getline(std::cin, input);
            while(input.empty() || !isAsciiPrintable(input))
            {
                if (input.empty())
                    std::cout << "First name cannot be empty. Please enter a valid first name: " << std::endl;
                std::getline(std::cin, input);
            }
            contact.setFirstName(input);

            std::cout << "Last name : ... " << std::endl;
            std::getline(std::cin, input);
            while(input.empty() || !isAsciiPrintable(input))
            {
                if(input.empty())
                    std::cout << "Last name cannot be empty. Please enter a valid last name: " << std::endl;
                std::getline(std::cin, input);
            }
            contact.setLastName(input);
            std::cout << "Nickname : ... " << std::endl;
            std::getline(std::cin, input);
            while(input.empty() || !isAsciiPrintable(input))            
            {
                if(input.empty())
                    std::cout << "Nickname cannot be empty. Please enter a valid nickname: " << std::endl;
                std::getline(std::cin, input);
            }
            contact.setNickname(input);
            std::cout << "Phone number : ... " << std::endl;
            std::getline(std::cin, input);
            while(input.empty() || !isAsciiPrintable(input) || !isNumeric(input))            
            {
                if(input.empty())
                    std::cout << "Phone number cannot be empty. Please enter a valid phone number: " << std::endl;
                std::getline(std::cin, input);
            }
            contact.setPhoneNumber(input);
            std::cout << "Darkest secret : ... " << std::endl;
            std::getline(std::cin, input);
            while(input.empty() || !isAsciiPrintable(input))            
            {
                if(input.empty())
                    std::cout << "Darkest secret cannot be empty. Please enter a valid darkest secret: " << std::endl;
                std::getline(std::cin, input);
            }
            contact.setDarkestSecret(input);
            phonebook.addContact(contact);
            std::cout << std::endl;
        }
        else if (input == "SEARCH")
        {
            std::cout << std::endl;
            phonebook.displayContacts();
        }
        else
        {
            std::cout << "Invalid option. Please choose ADD, SEARCH, or EXIT." << std::endl;
        }
        std::cout << "Choose an option: ADD, SEARCH, or EXIT" << std::endl;
        std::getline(std::cin, input);
    }
    return (0);
} 
