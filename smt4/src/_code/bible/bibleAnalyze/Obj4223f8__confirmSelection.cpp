/* NON_MATCHING: Obj4223f8::confirmSelection matches in logic, calls and the virtual panel rebind; retail keeps this+0x500 in a register for the mode flag, passes the shared strings through registers hoisted early, and addresses the state/substate pair with strd, so scheduling and frame size (68 vs 76) differ. */
#include "classes/Obj4223f8.h"
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

/* The detail panel the view owns (touchSelection's panel pointer). */
class BibleDetailPanel {
public:
    virtual ~BibleDetailPanel();
    virtual void rebind(const void *holder);   /* +0x08 */

    /* 0x04 */ u16 flags;
};

extern "C" {
extern const char DAT_0040226c[];   /* the "unknown" placeholder name */
extern const char DAT_00402274[];   /* "%s%s" */
extern const char *DAT_0043d990[];
s32 uiAnimationAdvanceChannel(void *channels, s32 index);
s32 vec2GetYInt(void *point);
s32 vec2GetXInt(void *point);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
void buttonHelpSetPreset(s32 preset);
const char *dataLookupDisplayName(u8 *scratch, u32 id);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_0029ee6c(const char *text, u32 color);
u32 flaggedValueHolderGetTotal(const void *holder);
void FUN_0029da34(s32 a, s32 b, u32 id);
void FUN_00233670(void *selection, s32 a, s32 b, s32 count);
}

/* State handler: the highlighted entry changed; refreshes the cursor, the help line and the detail text. */
void Obj4223f8::confirmSelection()
{
    Obj4223f8HandlerView *self = reinterpret_cast<Obj4223f8HandlerView *>(this);
    s32 advanced = uiAnimationAdvanceChannel(self->channels, selectedIndex);
    u8 *point = self->points + selectedIndex * 0x8C;
    s32 y = vec2GetYInt(point);
    pointConvertToFloat(&self->cursor, vec2GetXInt(point), y);
    if (advanced == 0) {
        return;
    }
    buttonHelpSetPreset(flag5A4 == 0 ? 0x2E : 0x46);
    if (flag5A4 != 0) {
        u8 scratch[8];
        char text[64];
        const char *name = dataLookupDisplayName(scratch, value);
        if (name == NULL) {
            name = DAT_0040226c;
        }
        textFormatBuffer(text, DAT_00402274, name, DAT_0043d990[2]);
        FUN_0029ee6c(text, 0x323232FF);
    } else {
        BibleDetailEntry *entries = reinterpret_cast<BibleDetailEntry *>(reinterpret_cast<u8 *>(this) + 0x5A8);
        FUN_0029da34(0, 1, entries[flaggedValueHolderGetTotal(self->holderArea)].itemId);
    }
    FUN_002a0cc8(0);
    self->state = 2;
    self->substate = 0;
    pointConvertToFloat(&self->cursor, 0, 0);
    BibleDetailPanel *panel = reinterpret_cast<BibleDetailPanel *>(touchSelection.unk34);
    panel->rebind(self->holderArea);
    panel->flags |= 0x1000;
    s32 shown = self->count;
    if (shown >= 10) {
        shown = 10;
    }
    if (flag5A4 == 0) {
        FUN_00233670(&touchSelection, 0x1D, 0x40E, shown);
    } else {
        FUN_00233670(&touchSelection, 0x1C, 0x1030, shown);
    }
}
