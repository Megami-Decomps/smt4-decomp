/* NON_MATCHING: armcc keeps the resident work pointer in r1 rather than retail's r0. */
#include "common.h"

extern "C" {

struct ResidentWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 requested;
};
extern ResidentWork *g_jyoucyu;

/* Set the resident work's request flag. */
void jyoucyuRequest(void)
{
    g_jyoucyu->requested = 1;
}

}
