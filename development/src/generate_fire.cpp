#include "../include/generate_fire.h"

std::vector<int> firePixelsArray(width * height, 0);

void generateFire() {
    // Taban satırına rastgele yoğunluk ekle
    for (int i = 0; i < width; ++i) {
        int randomCol = rand() % width;
        int index = randomCol + width * (height - 1);
        firePixelsArray[index] = rand() % maxCharIndex;
    }

    // Ateşi yukarı hareket ettir ve yoğunluğu azalt
    for (int i = 0; i < width * (height - 1); ++i) {
        int averageValue = (firePixelsArray[i] +
                            firePixelsArray[i + 1] +
                            firePixelsArray[i + width] +
                            firePixelsArray[i + width + 1]) / 4;
        firePixelsArray[i] = averageValue;
    }

    // Ateş efektini terminale yazdır
    std::string fireString;
    for (int i = 0; i < width * (height - 1); ++i) {
        int colorIndex = firePixelsArray[i] * 10 / maxCharIndex;
        fireString += colorCodes[colorIndex] + fireChars[firePixelsArray[i]];
        if (i % width == width - 1)
            fireString += '\n';
    }
    int terminalHeight = getTerminalHeight();
    std::cout << "\033[" << terminalHeight - height << ";1H" << fireString << "\033[0m";
}