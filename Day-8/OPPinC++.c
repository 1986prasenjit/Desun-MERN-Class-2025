#include <iostream>
using namespace std;

// 1. CLASS: The Blueprint
class MagicBox {
    private:
        int toys = 0;

    public:
        void putToyIn() {
            toys = toys + 1;
            cout << "Added a toy! Total toys: " << toys << endl;
        }
        virtual void shake() {
            cout << "Sound: THUMP THUMP (Just a normal box)" << endl;
        }
        void pressButton() {
            cout << "*Click*... Something magical happens!" << endl;
        }
    };
    class MusicBox : public MagicBox {
    public:
        void shake() override {
            cout << "Sound: DING DONG! (It plays a song)" << endl;
        }
    };

int main() {
    MagicBox myBox;
    MusicBox musicalBox;

    cout << "--- ENCAPSULATION (Using the Slot) ---" << endl;
    myBox.putToyIn(); 

    cout << "\n--- POLYMORPHISM (The Shake Test) ---" << endl;
    myBox.shake();     
    musicalBox.shake(); 

    cout << "\n--- ABSTRACTION (The Easy Button) ---" << endl;
    myBox.pressButton();

    return 0;
}