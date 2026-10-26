/* NON_MATCHING: large-offset snapshot copies and 64-bit packed-pair setter registers/stores differ. */
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {
extern UniteWork *g_unite;
void FUN_002f3bc4(void *list, s32 selection, s32 mode);
void FUN_0033449c(s32 mode);
void FUN_0031f718(s32 id, s32 first, s32 second);
void objBInitBlock19D0(void *list, s32 first, s32 second);
void FUN_003343c0(s32 mode);
void FUN_002c8550(s32 state);
void FUN_0037e1b0(s32 first, s32 second);
u32 FUN_0034a9ac(void);
void statusPanelSetOpen(s32 open);
void FUN_0037c8e4(s32 first, s32 second);
void panelSetTarget(s32 offset, s32 frame);
void buttonHelpSetText(s32 first, u32 color);
void FUN_0020b908(s32 first, s32 second);

// Select a fusion pair, preserve its list view and activate the status/confirmation panels.
void FUN_0034c940(s32 selection)
{
    // These fields are 64-bit bitfields in this path; keeping the view local avoids changing
    // the shared work block's alignment and the existing 32-bit packed-pair representation.
    struct PairView {
        u64 firstId : 15;
        u64 secondId : 15;
        u64 firstType : 2;
        u64 secondType : 2;
        u64 resultId : 15;
        u64 reserved : 15;
    };
    struct SelectionView {
        u8 unk0000[0x418];
        s32 panelOffset;
        u8 unk041c[0xf9c];
        PairView selected;
        u8 unk13c0[0x52dc];
        struct {
            u8 unk00[0x34];
            u32 current[4];
            u8 unk44[0x1e];
            s16 id;
        } list;
        u8 unk6700[0x2460];
        u32 saved[4];
        u8 unk8b70[0x501];
        u8 active;
        u8 unk9072[6];
        PairView choices[1];
    };
    SelectionView *work = reinterpret_cast<SelectionView *>(g_unite);
    void *list = &work->list;
    work->active = 1;
    FUN_002f3bc4(list, selection, 0);
    work->saved[0] = work->list.current[0];
    work->saved[1] = work->list.current[1];
    work->saved[2] = work->list.current[2];
    work->saved[3] = work->list.current[3];
    const PairView *choice = &work->choices[selection];
    work->selected.resultId = choice->resultId;
    work->selected.firstId = choice->firstId;
    work->selected.secondId = choice->secondId;
    work->selected.firstType = 1;
    work->selected.secondType = 1;
    work->selected.reserved = 0;
    FUN_0033449c(1);
    FUN_0031f718(work->list.id, 0, 0);
    objBInitBlock19D0(list, 0, 0);
    FUN_003343c0(0);
    FUN_002c8550(9);
    FUN_0037e1b0(0, 0);
    statusPanelSetOpen(FUN_0034a9ac() != static_cast<u16>(work->list.id));
    if (work->panelOffset > 0) {
        FUN_0037c8e4(1, 0);
        panelSetTarget(-work->panelOffset, 0);
    }
    buttonHelpSetText(0, 0xf4f4f4ff);
    FUN_002c8550(8);
    FUN_0020b908(0x13, 1);
}
}
