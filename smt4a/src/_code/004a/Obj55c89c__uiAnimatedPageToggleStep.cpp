#include "classes/Obj55c89c.h"
#include "code/Code002a.h"
#include "sys/RuntimeObjects_EntryDispatch.h"

struct PageSelectionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 selection;
};

extern "C" {
extern PageSelectionGlobals g_animatedPageSelection;
void pointConvertToFloat(void *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(void *animation, s32 preset);
s32 objectGetIndexedSignedFlag(void *animation, s32 track);
void demonScreenRebuildEntryList(Obj55c89c *page);
void FUN_004a3e04(Obj55c89c *page);
void FUN_0032cfe0(Obj55c89c *page);
} /* extern "C" */

/* Selects and starts a preset in the current page's sprite bank. */
static __inline void pageSelectTrack(Obj55c89c *page, s32 track)
{
    uiSpriteBankApplyPreset(page->bank.animation, page->track = track);
}

/* Animates out, toggles the page contents, then animates back in. */
void Obj55c89c::uiAnimatedPageToggleStep()
{
    entryDispatchUpdate((DispatchEntrySet *)&bank, track);
    const UiSpriteState *point = &bank.tracks[track];
    s32 y = vec2GetYInt(point);
    s32 x = vec2GetXInt(point);
    pointConvertToFloat(&rectangle, x, y);
    if (phase == 0) {
        pageSelectTrack(this, 9);
        phase = 1;
        return;
    }
    if (objectGetIndexedSignedFlag(bank.animation, track) && phase == 1) {
        phase = 2;
    } else if (objectGetIndexedSignedFlag(bank.animation, track) && phase == 2) {
        alternate = !alternate;
        demonScreenRebuildEntryList(this);
        g_animatedPageSelection.selection = resourceDispatchTaggedOperation(&flags) + 1;
        FUN_004a3e04(this);
        FUN_0032cfe0(this);
        pageSelectTrack(this, 8);
        phase = 3;
        return;
    } else if (objectGetIndexedSignedFlag(bank.animation, track) && phase == 3) {
        phase = 0;
        state = 2;
    }
}
