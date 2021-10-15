#include <list>

namespace graphics {
    
    int light() {
        
        list<int> lights;
        void createLight(xPos, yPos, zPos, xRotation, yRotation, zRotation, lightColor, lightBrightness) { // the light color starts from 0000 0000 0000 and stop at zzzz zzzz zzzz
            
            lights.push_back("{'xPos': " +xPos +", 'yPos': " +yPos +", 'zPos': " +zPos +", 'xRotation': " +xRotation +", 'yRotation': " +yRotation +", 'zRotation': " +zRotation +", 'lightColor': '" +lightColor +"', 'lightBrightness': " +lightBrightness +"}")
            
        };
        
    };
    int shaders() {
        
        list<int> shaders;
        void createShader(xSize, ySize, shader) {
            
            shaders.push_back("{'xSize': " +xSize +", 'ySize': " +ySize +", 'textures': '" +shader +"'}")
            
        };
        
    };
    int texture() {
        
        list<int> textures;
        void createTexture(xSize, ySize, texture) {
            
            textures.push_back("{'xSize': " +xSize +", 'ySize': " +ySize +", 'texture': '" +texture +"'}")
            
        };
        
    };
    
};
