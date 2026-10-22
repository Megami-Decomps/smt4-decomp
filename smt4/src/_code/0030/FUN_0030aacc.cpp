#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

/* Saves the current mode (word 0x100) into word 0x101 and switches to mode 6. */
void FUN_0030aacc(void)
{
    StatusDownState *block = g_statusDown;

    if (block != NULL) {
        block->previousState = block->state;
        block->state = 6;
    }
}

} /* extern "C" */
