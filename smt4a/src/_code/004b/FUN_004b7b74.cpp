/* NON_MATCHING: shared case-1/2 script launch, default-choice retention branch, AOC flag addressing and mode/frame store grouping differ. */
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/W4_Match3_InfoWindow.h"
#include <stddef.h>

struct MapMenuReturnRecord { u8 unk00[0x3f]; u8 textId; };
struct MapMenuCompletionWork {
    u8 unk0000[0x28];
    u32 mode;
    u32 frame;
    u8 unk0030[0x1c];
    u16 selection;
    u8 unk004e[0x4e];
    FlaggedValueHolder holder;
    u8 unk0110[0x1008];
    MapMenuReturnRecord *record;
    u8 unk111c[0x14];
    ScriptRunState *script;
    u8 unk1134[8];
    InfoWindow *info;
    u8 unk1140[0x10];
    void *battleTable;
    u8 unk1154[4];
    ScriptRunState *battleProcess;
    void *resultTable;
    void *resultMessages;
    ScriptRunState *resultProcess;
    u8 unk1168[4];
    s32 choice;
};
typedef char MapMenuCompletionOffsets[
    offsetof(MapMenuCompletionWork, holder) == 0x9c &&
    offsetof(MapMenuCompletionWork, record) == 0x1118 &&
    offsetof(MapMenuCompletionWork, script) == 0x1130 &&
    offsetof(MapMenuCompletionWork, choice) == 0x116c ? 1 : -1];
extern "C" {
extern void *g_aocMain;
s32 FUN_004ba698(FlaggedValueHolder *);
s32 scrRunOpcodesStub(ScriptRunState *);
void FUN_004b7d88(MapMenuCompletionWork *);
u16 flaggedValueHolderGetTotal(FlaggedValueHolder *);
void sysPlaySe(u32);
void dialogOpen(u32);
void infoWinSetText(InfoWindow *, u32);
void *asdLoadFileSyncDefault(const char *);
ScriptRunState *FUN_00275bc8(void *, void *);
u32 tableGroupFindEntryIndex(void *, const char *);
void scrScriptProcessStartEntry(ScriptRunState *, u32);

void FUN_004b7b74(MapMenuCompletionWork *work)
{
    s32 ready = FUN_004ba698(&work->holder);
    s32 state = scrRunOpcodesStub(work->script);
    if (state != 2 || !ready)
        return;
    FUN_004b7d88(work);
    work->selection = flaggedValueHolderGetTotal(&work->holder);
    struct AocMenuTransitionView { u8 unk00[0xc1]; u8 pending; };
    AocMenuTransitionView *aoc = static_cast<AocMenuTransitionView *>(g_aocMain);
    if (aoc->pending) {
        aoc->pending = 0;
        work->mode = 10;
        work->frame = 0;
        return;
    }
    s32 choice = work->choice;
    switch (choice) {
    case 1:
    case 2:
        work->mode = 9;
        work->frame = 0;
        if (choice == 2)
            sysPlaySe(0xa0);
        scrScriptProcessStartEntry(work->battleProcess,
            tableGroupFindEntryIndex(work->battleTable, "scr_sbq_sysbtl"));
        break;
    case 3:
        work->mode = 11;
        work->frame = 0;
        work->resultTable = asdLoadFileSyncDefault("battle/Result.bf");
        work->resultMessages = asdLoadFileSyncDefault("battle/ResultMsg.mbm");
        work->resultProcess = FUN_00275bc8(work->resultTable, work->resultMessages);
        work->resultProcess->mode = 3;
        scrScriptProcessStartEntry(work->resultProcess,
            tableGroupFindEntryIndex(work->resultTable, "ProcCharonRequestFirst"));
        break;
    default:
        dialogOpen(0);
        infoWinSetText(work->info, work->record->textId);
        work->mode = 5;
        work->frame = 0;
        if (choice != 4)
            return;
        break;
    }
    work->choice = 0;
}
}
