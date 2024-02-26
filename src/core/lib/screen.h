#include <ncurses.h>

#include "window.h"

class Screen {
    private:
        int mainWindowWidth;
        int mainWindowHeight;

        int leftWindowWidth;
        int rightWindowWidth;

        bool currentWindow;

        Window* leftWindow;
        Window* rightWindow;

    public:
        Screen();
        ~Screen();

        void listener();
};