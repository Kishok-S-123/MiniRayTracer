#include <fstream>
#include <iostream>

int main(){

    int w, h;
    
    w = 500;
    h = 500;

    std::ofstream image;
    image.open("diddly.ppm");

    if(image.is_open()){  
        image << "P3" << std::endl;
        image << w << " " << h << std::endl;
        image << "255" << std::endl;
        
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){ 
                image << i/2 << " " << "0" << " " << j/2 << std::endl;
            }
        }
    }
    image.close();
    return 0;
}