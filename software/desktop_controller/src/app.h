#ifndef APP_CLASS
#define APP_CLASS

#include "app_state.h"

class App;


class App {
    private:
        AppState app_state;
    public:
        int getAppState() {
            return this->app_state.state_num;
        }
};

#endif