#include <iostream>

int main() {
    bool landscape[5][5][10];

    std::cout << "Enter the heights of blocks:" << std::endl;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int height;
            std::cin >> height;
            if (height < 0 || height > 10) {
                std::cerr << "Invalid block height!" << std::endl; // как Я понял cerr используется для вывода непосредственно ошибок
                return 0;
            }
            for (int k = 0; k < height; k++) {
                landscape[i][j][k] = true;
                }
            for (int k = height; k < 10; k++) {
                landscape[i][j][k] = false;
            }
        }
    }

    int level;
    std::cout << "Level:";
    std::cin >> level;
    if (level < 0 || level >= 10) {
        std::cerr << "Invalid scan level!" << std::endl;
        return 0;
    }

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (landscape[i][j][level]) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
