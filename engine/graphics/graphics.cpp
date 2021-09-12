#include <list>

namespace graphics() {
    
    int light() {
        
        list<int> lights;
        void createLight(xPos, yPos, zPos, xRotation, yRotation, zRotation, lightBrightness) {
            
            lights.push_back("{'xPos': " +xPos +", 'yPos': " +yPos +", 'zPos': " +zPos +", 'xRotation': " +xRotation +", 'yRotation': " +yRotation +", 'zRotation': " +zRotation +", 'lightBrightness': " +lightBrightness +"}")
            
        };
        
    };
    int shaders() {
        
        list<int> shaders;
        void createShader(xSize, ySize, shader) {
            
            shaders.push_back("{'xSize': " +xSize +", 'ySize': " +ySize +", 'texture': '" +shader +'"}")
            
        };
        
    };
    int texture() {
        
        list<int> textures;
        void createTexture(xSize, ySize, texture) {
            
            textures.push_back("{'xSize': " +xSize +", 'ySize': " +ySize +", 'texture': '" +texture +"'}")
            
        };
        
    };
    
}
