/* NON_MATCHING: retail zero-extends the entry ID after loading it, stores the state/phase with strd, and updates the detail flags with a writeback halfword load. */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "classes/Obj4223f8.h"
#include "classes/Obj422594.h"
#include "quest_center/qcMain.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "status/StatusCamera.h"

/* The view's layout past the shared base, as its state handlers see it (Shin Megami Tensei IV). */
struct Obj4223f8HandlerView {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 state;
    /* 0x018 */ u32 substate;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 holderArea[8];
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02C[0xC8 - 0x2C];
    /* 0x0C8 */ FloatPoint cursor;
    /* 0x0D0 */ u8 unk0D0[0xDC - 0xD0];
    /* 0x0DC */ u8 channels[0xFC - 0xDC];
    /* 0x0FC */ u8 points[1];
};

struct BibleDetailEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1A];
};

extern "C" {
extern const char DAT_0040226c[];   /* the "unknown" placeholder name */
extern const char DAT_00402274[];   /* "%s%s" */
extern const char *g_btlDevilListCallbackContext[];
s32 uiAnimationAdvanceChannel(void *channels, s32 index);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
const char *dataLookupDisplayName(u8 *scratch, u32 id);
void buttonHelpSetText(const char *text, u32 color);
u32 flaggedValueHolderGetTotal(const void *holder);
void FUN_0029da34(s32 a, s32 b, u16 id, s32 c);
void messageIdListInit(void *selection, s32 a, s32 b, s32 count);
}

/* State handler: the highlighted entry changed; refreshes the cursor, the help line and the detail text. */
void Obj4223f8::confirmSelection()
{
    Obj4223f8HandlerView *self = reinterpret_cast<Obj4223f8HandlerView *>(this);
    s32 advanced = uiAnimationAdvanceChannel(self->channels, selectedIndex);
    u8 *point = self->points + selectedIndex * 0x8C;
    s32 y = vec2GetYInt((UiSpriteState *)point);
    pointConvertToFloat(&self->cursor, vec2GetXInt((UiSpriteState *)point), y);
    if (advanced == 0) {
        return;
    }
    buttonHelpSetPreset(flag5A4 == 0 ? 0x2E : 0x46);
    if (flag5A4 != 0) {
        u8 scratch[4];
        char text[64];
        const char *fallback = DAT_0040226c;
        const char *name = dataLookupDisplayName(scratch, value);
        if (name == NULL)
            name = fallback;
        __2sprintf(text, DAT_00402274, name, g_btlDevilListCallbackContext[2]);
        buttonHelpSetText(text, 0x323232FF);
    } else {
        BibleDetailEntry *entries = reinterpret_cast<BibleDetailEntry *>(reinterpret_cast<u8 *>(this) + 0x5A8);
        FUN_0029da34(0, 1, entries[flaggedValueHolderGetTotal(self->holderArea)].itemId, 0);
    }
    gameGlobalsSetSubScreenActive(0);
    self->state = 2;
    self->substate = 0;
    pointConvertToFloat(&self->cursor, 0, 0);
    ((Obj422594 *)touchSelection.unk34)->initialize(self->holderArea);
    ((Obj422594 *)touchSelection.unk34)->state.flags |= 0x1000;
    if (flag5A4 == 0) {
        messageIdListInit(&touchSelection, 0x1D, 0x40E, self->count >= 10 ? 10 : self->count);
    } else {
        messageIdListInit(&touchSelection, 0x1C, 0x1030, self->count >= 10 ? 10 : self->count);
    }
}
