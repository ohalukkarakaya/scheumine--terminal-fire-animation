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

const std::string colorCodes[] = {
        "\033[38;2;0;0;0m",    // Siyah (en düşük yoğunluk)
        "\033[38;2;32;0;0m",   // Koyu kırmızı
        "\033[38;2;64;0;0m",   // Daha açık kırmızı
        "\033[38;2;96;0;0m",   // Kırmızı
        "\033[38;2;128;32;0m", // Koyu turuncu
        "\033[38;2;160;64;0m", // Turuncu
        "\033[38;2;192;96;0m", // Açık turuncu
        "\033[38;2;255;128;0m",// Parlak turuncu
        "\033[38;2;255;160;64m",// Sarı-turuncu
        "\033[38;2;255;192;128m" // Sarı (en yüksek yoğunluk)
};

#endif //GLOBAL_VARIABLES_H
