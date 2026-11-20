#include "common.h"

extern "C" {

void screenFadeStartIn(s32 channel, s32 a, s32 b);
void asdSequenceStart(s32 id, u8 *table, s32 size);
void paramTripleSet(s32 id, u8 *table, s32 size);
void sysSetCachedPair(u8 *start, u8 *end);
s32 pairedAvailabilityGetState(s32 channel);
extern u8 DAT_00580000[];
extern u8 DAT_00580150[];
extern u8 LAB_0015110c;   /* start of a code range */
extern u8 LAB_00151230;   /* end of it */

/* Starts the sequence tables and the code range, then enables channels 0 and 1 (fade 10, 0xFF) if their state is 3. */
void FUN_0013963c(void)
{
    asdSequenceStart(1, DAT_00580000, 0x1C);
    paramTripleSet(0xC9, DAT_00580150, 0x16);
    sysSetCachedPair(&LAB_0015110c, &LAB_00151230);
    if (pairedAvailabilityGetState(0) == 3) {
        screenFadeStartIn(0, 10, 0xFF);
    }
    if (pairedAvailabilityGetState(1) == 3) {
        screenFadeStartIn(1, 10, 0xFF);
        return;
    }
}

} /* extern "C" */
