/*
 * main.cpp
 *
 *  Created on: 28 дек. 2025 г.
 *      Author: iskan
 */

#include "rsa.h"

int main () {

    RSA rsa;

    std::string msg = "81";

    std::vector<int> encrypted = rsa.encrypt(msg);
    std::vector<int> decrypted = rsa.decrypt();

    std::cout << "Message: " << msg << std::endl;

    std::cout << "Encrypted: ";

    for(int i = 0; i < static_cast<int>(encrypted.size()); i++) {

    	std::cout << encrypted[i];

    }

    std::cout << std::endl;

    std::cout << "Decrypted: ";

    for(int i = 0; i < static_cast<int>(decrypted.size()); i++) {

        std::cout << decrypted[i];

    }

	return 0;

}



