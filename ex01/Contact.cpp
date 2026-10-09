#include "Contact.hpp"

Contact::Contact()
: first_name_(),
 last_name_(),
  nickname_(),
   phone_number_(),
    darkest_secret_()
{
}

std::string Contact::getFirstName()const { return(first_name_);}
void Contact::setFirstName(std::string first_name){first_name_ = first_name;}
std::string Contact::getLastName()const{ return(last_name_);}
void Contact::setLastName(std::string last_name){last_name_ = last_name;}
std::string Contact::getNickname()const{ return(nickname_);}
void Contact::setNickname(std::string nickname){nickname_ = nickname;}
std::string Contact::getPhoneNumber()const { return(phone_number_);}
void Contact::setPhoneNumber(std::string phone_number){phone_number_ = phone_number;}
std::string Contact::getDarkestSecret()const { return(darkest_secret_);}
void Contact::setDarkestSecret(std::string darkest_secret){darkest_secret_ = darkest_secret;}
Contact::~Contact(){};
