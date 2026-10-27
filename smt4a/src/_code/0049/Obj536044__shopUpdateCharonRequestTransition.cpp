/* NON_MATCHING: member form with class fields; retail keeps one shared `str r0,[r4,#8]` tail inside case 1 reached from the other cases via `mov r0,r5`/`mov r0,#N; b`, ours stores the hoisted 5 (r5) in place and puts the shared tail at the end (116 rows vs 117). */
#include "classes/Obj536044.h"
#include "code/Code0035_Smt4a.h"

struct CharonScript {
    u8 unk00[0x108];
    u32 state; // 0x108
};
// The fields past the documented class prefix.
struct CharonView {
    u8 unk00[0x184];
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
}

// Run the shop exit and conditional second Charon request before returning to state 20.
void Obj536044::shopUpdateCharonRequestTransition()
{
    CharonView *view = reinterpret_cast<CharonView *>(this);
    switch (substate) {
    case 0:
        if (messageMainIsIdle()) {
            u32 entry = tableGroupFindEntryIndex(view->table, "shop_exit");
            scrScriptProcessStartEntry(view->exitScript, entry);
            sysPlaySe(0xa0);
            substate = 1;
            FUN_0035d03c(1);
        }
        break;
    case 1:
        if (scrRunOpcodesStub(view->exitScript) == 2) {
            if (!gameDataBlocksGetWord() || gameDataBlocksGetWord() > FUN_004d05b4())
                substate = 5;
            else
                substate = 2;
        }
        break;
    case 5:
        slotSetRequest(0, 10, 0xff);
        slotSetRequest(1, 10, 0xff);
        FUN_0035d03c(0);
        substate = 6;
        break;
    case 6:
        if (!screenFadeIsBusy()) {
            messageDismissNumericBanner(1);
            changeState(20);
        }
        break;
    case 2:
        asdLoadFileAsyncSimple("battle/Result.bf", &view->resultTable, 0);
        asdLoadFileAsyncSimple("battle/ResultMsg.mbm", &view->resultMessages, 0);
        substate = 3;
        break;
    case 3:
        if (view->resultTable && view->resultMessages) {
            CharonScript *script = FUN_00275bc8(view->resultTable, view->resultMessages);
            view->resultScript = script;
            scriptProcessSetMode(script, 2);
            u32 entry = tableGroupFindEntryIndex(view->resultTable, "ProcCharonRequestSecond");
            scrScriptProcessStartEntry(view->resultScript, entry);
            substate = 4;
        }
        break;
    case 4:
        if (scrRunOpcodesStub(view->resultScript) == 2)
            substate = 5;
        break;
    }
}
