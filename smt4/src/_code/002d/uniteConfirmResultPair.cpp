#include "camp/Unite/UniteGlobals.h"
#include <string.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* A fusion pair entry as retail reads and writes it: one 64-bit bitfield record. Kept local: an
 * 8-aligned shared pair type would change UniteWork's size and other users' record alignment. */
struct UnitePairBits {
    u64 firstId : 15;
    u64 secondId : 15;
    u64 firstType : 2;
    u64 secondType : 2;
    u64 resultId : 15;
    u64 reserved : 15;
};
typedef char UnitePairBitsSizeCheck[sizeof(UnitePairBits) == 8 ? 1 : -1];

/* The 64-bit view of a pair entry. */
static __inline UnitePairBits *unitePairBits(UnitePairEntryIV *entry)
{
    return reinterpret_cast<UnitePairBits *>(entry);
}

extern "C" {
void uniteBuildResultUnitRecord(void *cursor, s32 index, s32 mode);
void FUN_0029defc(s32 id, s32 mode);
void FUN_0029c4e4(void *cursor, s32 mode);
void menuSetModeAndResetTransitions(s32 mode);
void FUN_0029e890(s32 first, s32 second);
u32 FUN_002d96a4();
void statusPanelSetOpen(s32 enabled);
void messageBannerInitSelection(s32 first, s32 second);
void messageTargetSetValue(s32 value, s32 mode);
void buttonHelpSetText(const char *text, u32 color);
void uniteMenuChangeState(u32 state, s32 preservePrevious);

/* Confirms fusion result `index`: snapshots it, makes it the first pair of the list and opens its status screen. */
void uniteConfirmResultPair(s32 index)
{
    UniteWork *work = g_unite;
    work->eventFlagsIV.ready = 1;
    uniteBuildResultUnitRecord(work->resultSelectionIV.cursor, index, 0);
    memcpy(work->resultSnapshotIV.words, work->resultSelectionIV.selected.words,
        sizeof(work->resultSnapshotIV.words));
    unitePairBits(&work->pairListIV.pairs[0])->resultId = unitePairBits(&work->resultPairsIV.pairs[index])->resultId;
    unitePairBits(&work->pairListIV.pairs[0])->firstId = unitePairBits(&work->resultPairsIV.pairs[index])->firstId;
    unitePairBits(&work->pairListIV.pairs[0])->secondId = unitePairBits(&work->resultPairsIV.pairs[index])->secondId;
    unitePairBits(&work->pairListIV.pairs[0])->firstType = 1;
    unitePairBits(&work->pairListIV.pairs[0])->secondType = 1;
    unitePairBits(&work->pairListIV.pairs[0])->reserved = 0;
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
    buttonHelpSetText(NULL, 0x323232ff);
    menuSetModeAndResetTransitions(7);
    uniteMenuChangeState(19, 1);
}
}
