/* NON_MATCHING: retail clears skipRestore through a split base (add r0, r0, #168; strb with a fresh zero, as if through
 * the script holder), gives case 2 its own operation-clearing tail, and loads the message record before the window. */
#include "camp/CampScriptCleanup.h"
#include "ui/UiControl.h"
#include "addon/aocMain.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include <stddef.h>
#include "quest_center/qcMain.h"

struct CampResultMessageView { u8 unk00[0x3F]; u8 message; };
struct CampResultStateView {
    u8 unk000[0x28];
    u32 state;
    u32 timer;
    u8 unk030[0x1C];
    u16 selection;
    u8 unk04E[0x4E];
    FlaggedValueHolder value;
    u8 unkAfterValue[0xD5C - 0x9C - sizeof(FlaggedValueHolder)];
    CampResultMessageView *message;
    u8 unkD60[0xC];
    void *firstMessages;
    void *firstScript;
    ScriptProcess *firstProcess;
    u8 unkD78[8];
    void *informationWindow;
    u8 unkD84[0x10];
    void *secondMessages;
    void *secondScript;
    ScriptProcess *secondProcess;
    void *resultScript;
    void *resultMessages;
    ScriptProcess *resultProcess;
    u8 unkDAC[4];
    u32 operation;
};
typedef char CampResultStateOffsets[
    offsetof(CampResultStateView, value) == 0x9C && offsetof(CampResultStateView, firstProcess) == offsetof(CampScriptCleanup, firstProcess) &&
    offsetof(CampResultStateView, informationWindow) == 0xD80 && offsetof(CampResultStateView, operation) == 0xDB0 ? 1 : -1];

extern "C" {
s32 listUpdateRevealTransition(FlaggedValueHolder *value);
void buttonHelpSelectByProgress(CampResultStateView *work);
u16 flaggedValueHolderGetTotal(const FlaggedValueHolder *value);
s32 tableGroupFindEntryIndex(const void *script, const char *entry);
void scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void *asdLoadFileSyncDefault(const char *path);
void infoWinSetMessage(void *window, u32 message);

void FUN_003b8c40(CampResultStateView *work)
{
    s32 ready = listUpdateRevealTransition(&work->value);
    if (scrRunOpcodesStub(work->firstProcess) != 2 || !ready)
        return;
    buttonHelpSelectByProgress(work);
    work->selection = flaggedValueHolderGetTotal(&work->value);
    if (g_aocMain->skipRestore) {
        g_aocMain->skipRestore = 0;
        work->state = 10;
        work->timer = 0;
        return;
    }
    switch (work->operation) {
    case 1:
        work->state = 9;
        work->timer = 0;
        scrScriptProcessStartEntry(work->secondProcess, tableGroupFindEntryIndex(work->secondMessages, "scr_sbq_sysbtl"));
        break;
    case 2:
        work->state = 9;
        work->timer = 0;
        buttonHelpSetPreset(158);
        scrScriptProcessStartEntry(work->secondProcess, tableGroupFindEntryIndex(work->secondMessages, "scr_sbq_sysbtl"));
        break;
    case 3:
        work->state = 11;
        work->timer = 0;
        work->resultScript = asdLoadFileSyncDefault("battle/Result.bf");
        work->resultMessages = asdLoadFileSyncDefault("battle/ResultMsg.mbm");
        work->resultProcess = scrScriptProcessCreate(work->resultScript, work->resultMessages);
        work->resultProcess->mode = 3;
        scrScriptProcessStartEntry(work->resultProcess, tableGroupFindEntryIndex(work->resultScript, "ProcCharonRequestFirst"));
        work->operation = 0;
        return;
    case 4:
        dialogOpen(0, 0);
        infoWinSetMessage(work->informationWindow, work->message->message);
        work->state = 5;
        work->timer = 0;
        break;
    default:
        dialogOpen(0, 0);
        infoWinSetMessage(work->informationWindow, work->message->message);
        work->state = 5;
        work->timer = 0;
        return;
    }
    work->operation = 0;
}
}
