#include <iostream>

int main() {
    int landscape[5][5][1];

    std::cout << "Enter the heights of blocks:" << std::endl;
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 1; k++) {
                std::cin >> landscape[i][j][k];
                while (landscape[i][j][k] > 10 || landscape[i][j][k] < 0) {
                    std::cout << "Error! Max height = 10, min = 0!" << std::endl;
                    std::cout << "Enter the heights of blocks:" << std::endl;
                    std::cin >> landscape[i][j][k];
                }
            }
        }
    }

    int height = 0;
    while (height != -1) {
        std::cout << "Enter the height for horizontal slice:" << std::endl;
        std::cin >> height;
        while ((height > 10 || height < 0) && height != -1) {
            std::cout << "Error! Max height = 10, min = 0!" << std::endl;
            std::cout << "Enter the height for horizontal slice:" << std::endl;
            std::cin >> height;
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                for (int k = 0; k < 1; k++) {
                    if (landscape[i][j][k] >= height) {
                        std::cout << "1" << " ";
                    } else {
                        std::cout << "0" << " ";
                    }
                }
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
