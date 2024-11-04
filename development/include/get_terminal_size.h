#ifndef GET_TERMINAL_WIDTH_H
#define GET_TERMINAL_WIDTH_H

#include <sys/ioctl.h>
#include <unistd.h>

inline int get_terminal_width() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_col;
}

inline int getTerminalHeight() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_row;
}

#endif //GET_TERMINAL_WIDTH_H
