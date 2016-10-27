//
//  main.cpp
//  Daniil
//
//  Created by Sergey Kopytov on 25.10.16.
//  Copyright © 2016 Sergey Kopytov. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> mas;
    int alpha = 1;
    
    for (int i = 0; i<100; i++){
        mas.push_back(0);
    }

    while (alpha != 0){
        std::cin >> alpha;
        mas[alpha]++;
    }
    
    for (int i = 1; i< 100; i++){
        std::cout << "Chislo " << i << " vstrechaetsa: " << mas[i] << " raz" << std::endl;
    }
    
    System("pause");
    
    return 0;
}
