#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

// Genişlik ve yükseklik ayarları
const int width = 150;
const int height = 28;

// Ateş karakterleri
const std::string fireChars = " .:;ltI!|)(}{][jftJUWB8&%$#@";
const int maxCharIndex = fireChars.length();

#endif //GLOBAL_VARIABLES_H
