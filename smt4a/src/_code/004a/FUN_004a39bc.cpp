/* NON_MATCHING: choice initialization block placement, state/zero registers and selected-entry address/narrowing differ. */
#include "shard/Shard004A.h"

// A local aligned view avoids adding u16 list entries to Screen4A's odd-address opaque byte region.
struct BibleSummonConfirmationView {
    u8 unk000[0x94];
    s8 rank;
    u8 unk095[0x7CC];
    u8 mode;
    u8 unk862[2];
    BibleAnalyzeListEntry entries[1];
};
typedef char BibleSummonConfirmationOffsets[
    offsetof(BibleSummonConfirmationView, rank) == 0x94 &&
    offsetof(BibleSummonConfirmationView, mode) == 0x861 &&
    offsetof(BibleSummonConfirmationView, entries) == 0x864 ? 1 : -1];

extern "C" {
s32 scrRunOpcodesStub(u32 script);
s32 FUN_00370794(void);
s32 messageGetChoiceResult(void);
s32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
u32 FUN_004a8750(u16 id, u8 mode, u32 option, u32 highRank, u32 flags);
void panelSetMode3(u32 value, s32 option);
void FUN_003343f0(u32 enabled);
void objBInitBlocks274300(void);
void messageMainSetTargetFlags(u32 flags);
void flagValueSub(u32 id, s32 value);
void sysPlaySe(u32 sound);

// Resolve the dynamically arranged summon/cancel/alternate choices after the message script completes.
void FUN_004a39bc(Screen4A *screen)
{
    if (scrRunOpcodesStub(screen->job) != 2)
        return;
    s32 choices[4];
    if (FUN_00370794() != 3) {
        if (screen->unkA870 == 7) {
            choices[0] = 3;
            choices[1] = 2;
            screen->unkA870 = 0;
        } else {
            choices[0] = 1;
            choices[1] = 2;
        }
    } else {
        choices[0] = 1;
        choices[1] = 3;
        choices[2] = 2;
    }
    switch (choices[messageGetChoiceResult()]) {
    case 1: {
        BibleSummonConfirmationView *details = (BibleSummonConfirmationView *)screen;
        s32 index = flaggedValueHolderGetTotal(&screen->selection.holder);
        u32 cost = FUN_004a8750(details->entries[index].id, details->mode, 0, details->rank >= 100, 0);
        panelSetMode3(-cost, 0);
        FUN_003343f0(1);
        screen->state = 4;
        screen->unk18 = 0;
        objBInitBlocks274300();
        break;
    }
    case 2:
        messageMainSetTargetFlags(0);
        FUN_003343f0(0);
        screen->state = 2;
        screen->unk18 = 0;
        sysPlaySe(47);
        return;
    case 3:
        flagValueSub(0x7C3, 1);
        FUN_003343f0(0);
        screen->state = 5;
        screen->unk18 = 0;
        objBInitBlocks274300();
        break;
    default:
        FUN_003343f0(0);
        screen->state = 2;
        screen->unk18 = 0;
        break;
    }
    sysPlaySe(47);
}
}
