#include "common.h"

extern "C" {

extern u32 scrGetArg(void);
extern s32 scrGetCommandFrame(void);
extern void partyEntrySetBit0AndFlag80(u32 id);
extern s32 FUN_00162ea4(void);
extern void FUN_002f0c18(void);
extern void FUN_003a7c3c(u32 id);
extern s32 stateHolder4IsZero2(void);
extern void FUN_0034aae4(void);
extern void sysPlaySe(s32 id);

/* Script command: adds the party entry named by the argument and, once the state holder is idle,
 * plays the join sound. Returns 1 when finished, 0 to run again. */
s32 FUN_0031e5dc(void)
{
    u16 id = scrGetArg();

    if (scrGetCommandFrame() == 0) {
        partyEntrySetBit0AndFlag80(id);
        if (FUN_00162ea4() != 0) {
            return 1;
        }
        FUN_002f0c18();
        FUN_003a7c3c(id);
    }
    if (stateHolder4IsZero2() != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
        return 1;
    }
    return 0;
}

} /* extern "C" */
