#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrGetCommandFrame(void);
extern void partyEntrySetBit0AndFlag80(u32 id);
extern s32 eventIsSkipping(void);
extern void uiQuestCreate(void);
extern void FUN_003a7c3c(u32 id);
extern s32 stateHolder4IsZero2(void);
extern void uiQuestClose(void);
extern void sysPlaySe(s32 id);

/* Script command: adds the party entry named by the argument and, once the state holder is idle,
 * plays the join sound. Returns 1 when finished, 0 to run again. */
s32 scrPartyEntryJoin(void)
{
    u16 id = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        partyEntrySetBit0AndFlag80(id);
        if (eventIsSkipping() != 0) {
            return 1;
        }
        uiQuestCreate();
        FUN_003a7c3c(id);
    }
    if (stateHolder4IsZero2() != 0) {
        uiQuestClose();
        sysPlaySe(0x92);
        return 1;
    }
    return 0;
}

} /* extern "C" */
