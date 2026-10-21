#include "common.h"

extern "C" {

typedef struct WordPair {
    u32 first;
    u32 second;
} WordPair;

extern WordPair DAT_005c0a8c;

/* Clears the two words of the pair at DAT_005c0a8c; returns the last one written (0). */
u32 wordPairClear(void)
{
    DAT_005c0a8c.first = 0;
    DAT_005c0a8c.second = 0;
    return DAT_005c0a8c.second;
}

}
