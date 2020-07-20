#include "app.h"
#include <iostream>

int main() {
    App* desktopApp = new App();
    std::cout << desktopApp->getAppState() << std::endl;
    return 0;
}