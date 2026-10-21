#include "common.h"

extern "C" {

void FUN_0013cab8(s32 channel, s32 a, s32 b);
void asdSequenceStart(s32 id, u8 *table, s32 size);
void FUN_0013ea78(s32 id, u8 *table, s32 size);
void sysSetCachedPair(u8 *start, u8 *end);
s32 FUN_0013def0(s32 channel);
extern u8 DAT_00580000[];
extern u8 DAT_00580150[];
extern u8 LAB_0015110c;   /* start of a code range */
extern u8 LAB_00151230;   /* end of it */

/* Starts the sequence tables and the code range, then enables channels 0 and 1 (fade 10, 0xFF) if their state is 3. */
void FUN_0013963c(void)
{
    asdSequenceStart(1, DAT_00580000, 0x1C);
    FUN_0013ea78(0xC9, DAT_00580150, 0x16);
    sysSetCachedPair(&LAB_0015110c, &LAB_00151230);
    if (FUN_0013def0(0) == 3) {
        FUN_0013cab8(0, 10, 0xFF);
    }
    if (FUN_0013def0(1) == 3) {
        FUN_0013cab8(1, 10, 0xFF);
        return;
    }
}

} /* extern "C" */
