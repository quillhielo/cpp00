#pragma once
#include <string>

class Contact {
    private:
        std::string first_name_;
        std::string last_name_;
        std::string nickname_;
        std::string phone_number_;
        std::string darkest_secret_;
    public:
        Contact();
        std::string getFirstName()const;
        void setFirstName(std::string first_name);
		std::string getLastName()const;
        void setLastName(std::string last_name);
		std::string getNickname()const;
        void setNickname(std::string nickname);
		std::string getPhoneNumber()const;
        void setPhoneNumber(std::string phone_number);
		std::string getDarkestSecret()const;
		void setDarkestSecret(std::string darkest_secret);
        ~Contact();
};
