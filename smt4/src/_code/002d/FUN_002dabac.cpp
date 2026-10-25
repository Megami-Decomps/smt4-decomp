/* NON_MATCHING: snapshot copy grouping and packed-pair read/modify/write store combining differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include <string.h>

extern "C" {
extern UniteWork *g_unite;
void FUN_00257a50(void *cursor, s32 index, s32 mode);
void FUN_0029c4c8(s32 enabled);
void FUN_0029defc(s32 id, s32 mode);
void FUN_0029c4e4(void *cursor, s32 mode);
void FUN_0029c4ac(s32 enabled);
void menuSetModeAndResetTransitions(s32 mode);
void FUN_0029e890(s32 first, s32 second);
u32 FUN_002d96a4();
void statusPanelSetOpen(s32 enabled);
void messageBannerInitSelection(s32 first, s32 second);
void messageTargetSetValue(s32 value, s32 mode);
void FUN_0029ee6c(const char *text, u32 color);
void uniteMenuChangeState(u32 state, s32 preservePrevious);

void FUN_002dabac(s32 index)
{
    UniteWork *work = g_unite;
    work->eventFlagsIV.ready = 1;
    FUN_00257a50(work->resultSelectionIV.cursor, index, 0);
    memcpy(work->resultSnapshotIV.words, work->resultSelectionIV.selected.words,
        sizeof(work->resultSnapshotIV.words));
    // The retail packet uses 64-bit fields. Keep that aligned view local: making the shared
    // pair type 8-aligned would change UniteWork's size and other users' record alignment.
    struct PairBits {
        u64 firstId : 15;
        u64 secondId : 15;
        u64 firstType : 2;
        u64 secondType : 2;
        u64 resultId : 15;
        u64 reserved : 15;
    };
    typedef char PairSizeCheck[sizeof(PairBits) == 8 ? 1 : -1];
    const PairBits *selected = reinterpret_cast<const PairBits *>(&work->resultPairsIV.pairs[index]);
    PairBits *pair = reinterpret_cast<PairBits *>(&work->pairListIV.pairs[0]);
    pair->resultId = selected->resultId;
    pair->firstId = selected->firstId;
    pair->secondId = selected->secondId;
    pair->firstType = 1;
    pair->secondType = 1;
    pair->reserved = 0;
    FUN_0029c4c8(1);
    FUN_0029defc(work->resultSelectionIV.selected.id, 0);
    FUN_0029c4e4(work->resultSelectionIV.cursor, 0);
    FUN_0029c4ac(0);
    menuSetModeAndResetTransitions(8);
    FUN_0029e890(0, 0);
    statusPanelSetOpen(FUN_002d96a4() != static_cast<u16>(work->resultSelectionIV.selected.id));
    if (work->fusionPriceIV.cost > 0) {
        messageBannerInitSelection(1, 0);
        messageTargetSetValue(-work->fusionPriceIV.cost, 0);
    }
    FUN_0029ee6c(NULL, 0x323232ff);
    menuSetModeAndResetTransitions(7);
    uniteMenuChangeState(19, 1);
}
}
