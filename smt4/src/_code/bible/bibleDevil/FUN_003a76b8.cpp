/* NON_MATCHING: arm placement, cached entry base and id extensions now match retail; remaining: retail delays the preview arm's id sign-extension (ldrh ... sxth) and stores the phase/source bytes in a different order. */
#include "classes/Obj42247c.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "gamedata/UnitStats.h"
#include "shard/Shard004A.h"
#include "code/Code0029_Smt4.h"

struct CompendiumPreviewHandle { u8 prefix[0x108]; s32 mode; };
extern "C" {
s32 utilityReturnSuccess(const void *input);
CompendiumPreviewHandle *FUN_00297060(u32 first, u32 second);
void buttonHelpSetPreset(u32 preset);
void *partyMemberFindById(u16 id);
void FUN_0029da34(s32 screen, s32 enabled, u16 id, void *unit);
s32 FUN_0029ce60(u16 id, u32 source, s32 a, s32 specialMode, s32 b);
void messageTargetSetValue(s32 target, s32 mode);
void unitInitializeFromSavedRecord(u16 id, StatBlock *unit);
void FUN_00233240(void *timers, s32 index);
void FUN_0022de74(Obj42247c *view);
extern s32 DAT_0043d9c8[2];

void FUN_003a76b8(Obj42247c *view)
{
    // The concrete compendium view's source flag and entry array extend past the shared base.
    struct DetailEntry { u32 unk00; u16 id; u8 unk06[0x1a]; };
    struct DetailView {
        u8 prefix[0x14];
        u32 phase, timer;
        u8 unk1C[4];
        FlaggedValueHolder selection;
        s8 sortMode;
        u8 unk95;
        u8 input[0x46];
        u8 timers[0x4bc];
        u32 handleA, handleB;
        CompendiumPreviewHandle *preview;
        u8 fromParty, source;
        u8 unk5A6[2];
        DetailEntry entries[1];
    };
    typedef char LayoutCheck[__INTADDR__(&((DetailView *)0)->input) == 0x96 &&
        __INTADDR__(&((DetailView *)0)->entries) == 0x5a8 ? 1 : -1];
    DetailView *state = reinterpret_cast<DetailView *>(view);
    if (view->isScreenReady() != 0 && utilityReturnSuccess(state->input) == 0) {
        CompendiumPreviewHandle *preview = FUN_00297060(state->handleA, state->handleB);
        state->preview = preview;
        preview->mode = 2;
        state->phase = 1;
        state->timer = 0;
        state->source = 1;
        DetailEntry *entries = state->entries;
        if (!(state->fromParty != 0)) {
            s16 id = entries[flaggedValueHolderGetTotal(&state->selection)].id;
            s32 cost = FUN_0029ce60(static_cast<u16>(id), state->source, 0, state->sortMode >= 100, 0);
            messageBannerInitSelection(1, 0);
            messageTargetSetValue(-cost, 0);
            buttonHelpSetPreset(0x2d);
            StatBlock unit;
            unitInitializeFromSavedRecord(static_cast<u16>(id), &unit);
            FUN_0029da34(0, 1, static_cast<u16>(id), &unit);
        } else {
            s16 id = entries[flaggedValueHolderGetTotal(&state->selection)].id;
            buttonHelpSetPreset(0x4c);
            FUN_0029da34(0, 1, static_cast<u16>(id), partyMemberFindById(static_cast<u16>(id)));
        }
        FUN_00233240(state->timers, 0);
        FUN_00233240(state->timers, 1);
        DAT_0043d9c8[1] = -1;
        FUN_0022de74(view);
    }
}
}
