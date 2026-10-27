/* NON_MATCHING: retail merges every phase store into one shared `str r0,[r4,#8]` tail (constants not hoisted); this build stores per case and hoists 2/5 into extra registers. */
#include "common.h"
#include "code/Code0035_Smt4a.h"

struct CharonScript {
    u8 unk00[0x108];
    u32 state; // 0x108
};
struct CharonTransition {
    u32 unk00;
    u32 state; // 0x04
    u32 phase; // 0x08
    u32 unk0c;
    u32 previousState; // 0x10
    u8 unk14[0x170];
    void *table; // 0x184
    u32 unk188;
    CharonScript *exitScript; // 0x18c
    u8 unk190[0x204];
    void *resultTable; // 0x394
    void *resultMessages; // 0x398
    CharonScript *resultScript; // 0x39c
};
extern "C" {
s32 messageMainIsIdle();
u32 tableGroupFindEntryIndex(void *, const char *);
void scrScriptProcessStartEntry(CharonScript *, u32);
void sysPlaySe(u32);
s32 scrRunOpcodesStub(CharonScript *);
u32 gameDataBlocksGetWord();
u32 FUN_004d05b4();
void asdLoadFileAsyncSimple(const char *, void **, u32);
CharonScript *FUN_00275bc8(void *, void *);
void scriptProcessSetMode(CharonScript *, s32);
void slotSetRequest(u32, u32, u32);
s32 screenFadeIsBusy();
void messageDismissNumericBanner(u32);

static __inline void charonEnterState(CharonTransition *transition, u32 next)
{
    transition->previousState = transition->state;
    transition->state = next;
    transition->phase = 0;
}

// Run the shop exit and conditional second Charon request before returning to state 20.
void _ZN9Obj53604433shopUpdateCharonRequestTransitionEv(CharonTransition *transition)
{
    switch (transition->phase) {
    case 0:
        if (messageMainIsIdle()) {
            u32 entry = tableGroupFindEntryIndex(transition->table, "shop_exit");
            scrScriptProcessStartEntry(transition->exitScript, entry);
            sysPlaySe(0xa0);
            transition->phase = 1;
            FUN_0035d03c(1);
        }
        break;
    case 1:
        if (scrRunOpcodesStub(transition->exitScript) == 2) {
            if (gameDataBlocksGetWord()) {
                if (gameDataBlocksGetWord() <= FUN_004d05b4()) {
                    transition->phase = 2;
                    break;
                }
            }
            transition->phase = 5;
        }
        break;
    case 5:
        slotSetRequest(0, 10, 0xff);
        slotSetRequest(1, 10, 0xff);
        FUN_0035d03c(0);
        transition->phase = 6;
        break;
    case 6:
        if (!screenFadeIsBusy()) {
            messageDismissNumericBanner(1);
            charonEnterState(transition, 20);
        }
        break;
    case 2:
        asdLoadFileAsyncSimple("battle/Result.bf", &transition->resultTable, 0);
        asdLoadFileAsyncSimple("battle/ResultMsg.mbm", &transition->resultMessages, 0);
        transition->phase = 3;
        break;
    case 3:
        if (transition->resultTable && transition->resultMessages) {
            CharonScript *script = FUN_00275bc8(transition->resultTable, transition->resultMessages);
            transition->resultScript = script;
            scriptProcessSetMode(script, 2);
            u32 entry = tableGroupFindEntryIndex(transition->resultTable, "ProcCharonRequestSecond");
            scrScriptProcessStartEntry(transition->resultScript, entry);
            transition->phase = 4;
        }
        break;
    case 4:
        if (scrRunOpcodesStub(transition->resultScript) == 2)
            transition->phase = 5;
        break;
    }
}
}
