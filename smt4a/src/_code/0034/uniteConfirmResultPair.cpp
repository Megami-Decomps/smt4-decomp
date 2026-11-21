#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UniteWork.h"

extern "C" {
void uniteBuildResultUnitRecord(void *list, s32 selection, s32 mode);
void FUN_0033449c(s32 mode);
void FUN_0031f718(s32 id, s32 first, s32 second);
void objBInitBlock19D0(void *list, s32 first, s32 second);
void FUN_003343c0(s32 mode);
void FUN_002c8550(s32 state);
void FUN_0037e1b0(s32 first, s32 second);
u32 FUN_0034a9ac(void);
void statusPanelSetOpen(s32 open);
void messageBannerInitCounter(s32 first, s32 second);
void panelSetTarget(s32 offset, s32 frame);
void buttonHelpSetText(s32 first, u32 color);
void uniteMenuChangeState(s32 first, s32 second);

/* Selects a fusion pair, preserves its list view and activates the status and confirmation panels. */
void uniteConfirmResultPair(s32 selection)
{
    /* unit-local: the pairs are read as IV's 64-bit bitfield entries here, which would change the shared
     * work block's alignment and its 32-bit packed-pair view; the result record's four words are copied whole. */
    struct UnitRecordWords { u32 words[4]; };
    struct SelectionView {
        u8 unk0000[0x418];
        s32 panelOffset;
        u8 unk041c[0xf9c];
        UnitePairEntryIV selected;
        u8 unk13c0[0x52dc];
        struct {
            u8 unk00[0x34];
            UnitRecordWords current;
            u8 unk44[0x1e];
            s16 id;
        } list;
        u8 unk6700[0x2460];
        UnitRecordWords saved;
        u8 unk8b70[0x501];
        u8 active;
        u8 unk9072[6];
        UnitePairEntryIV choices[1];
    };
    SelectionView *work = reinterpret_cast<SelectionView *>(g_unite);
    work->active = 1;
    uniteBuildResultUnitRecord(&work->list, selection, 0);
    work->saved = work->list.current;
    work->selected.resultId = work->choices[selection].resultId;
    work->selected.firstId = work->choices[selection].firstId;
    work->selected.secondId = work->choices[selection].secondId;
    work->selected.firstType = 1;
    work->selected.secondType = 1;
    work->selected.unknown = 0;
    FUN_0033449c(1);
    FUN_0031f718(work->list.id, 0, 0);
    objBInitBlock19D0(&work->list, 0, 0);
    FUN_003343c0(0);
    FUN_002c8550(9);
    FUN_0037e1b0(0, 0);
    statusPanelSetOpen(FUN_0034a9ac() != static_cast<u16>(work->list.id));
    if (work->panelOffset > 0) {
        messageBannerInitCounter(1, 0);
        panelSetTarget(-work->panelOffset, 0);
    }
    buttonHelpSetText(0, 0xf4f4f4ff);
    FUN_002c8550(8);
    uniteMenuChangeState(0x13, 1);
}
}
