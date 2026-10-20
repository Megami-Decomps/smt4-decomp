#include "common.h"

extern "C" {

typedef void (*Callback)(void);

extern struct {
    u8 unk00[2];
    s8 unk02;
} DAT_0044e458;
extern Callback DAT_004c64a4[8];

/* Runs the eight registered callbacks once, then clears the pending flag. */
void FUN_001284e4(void)
{
    s32 i;

    if (DAT_0044e458.unk02 != 0) {
        i = 0;
        do {
            if (DAT_004c64a4[i] != NULL) {
                DAT_004c64a4[i]();
            }
            i++;
        } while (i < 8);
        DAT_0044e458.unk02 = 0;
    }
}

} /* extern "C" */
