#include <iostream>
#include <string>

std::string xorCipher(const std::string& text, char key) {
    std::string result = text;
    
    for (size_t i = 0; i < text.size(); i++) {
        // TODO: сюда одна строчка —
        // result[i] должен стать text[i] после XOR с key
    }
    
    return result;
}

int main() {
    std::string original = "Hello";
    char key = 'K';
    
    std::string encrypted = xorCipher(original, key);
    std::string decrypted = xorCipher(encrypted, key);
    
    std::cout << "Original:  " << original << std::endl;
    std::cout << "Encrypted: " << encrypted << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;
    
    return 0;
    
    // SOME CODE
    // and more code
}
