#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 busy;
} Record;
extern Record *g_unite;

/* Returns whether there is no record or it is not busy. */
u8 FUN_0023c068(void)
{
    u8 busy;

    busy = 0;
    if (g_unite != NULL) {
        busy = g_unite->busy;
    }
    return g_unite == NULL || busy == 0;
}

} /* extern "C" */
