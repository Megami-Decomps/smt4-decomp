#include "common.h"

extern "C" {

typedef struct WordPair {
    u32 first;
    u32 second;
} WordPair;

extern WordPair DAT_00471a50;

/* Clears the two words of the pair at DAT_00471a50; returns the last one written (0). */
u32 FUN_0035313c(void)
{
    DAT_00471a50.first = 0;
    DAT_00471a50.second = 0;
    return DAT_00471a50.second;
}

}
