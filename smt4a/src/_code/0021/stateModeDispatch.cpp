#include "common.h"

extern "C" {
void gameDataSetTableFlag(u32 mode);

// Dispatches supported state modes, ignoring values outside the mode range.
void stateModeDispatch(u32 mode)
{
    switch (mode) {
    case 1:
        gameDataSetTableFlag(1);
        break;
    case 0:
        gameDataSetTableFlag(0);
        break;
    case 2:
        gameDataSetTableFlag(2);
        break;
    case 3:
        gameDataSetTableFlag(3);
        break;
    case 4:
        gameDataSetTableFlag(4);
        break;
    }
}
}
