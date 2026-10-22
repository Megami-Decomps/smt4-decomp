/* NON_MATCHING: retail reads forceReload first through a pooled 0x11e8 register offset; armcc
 * here hoists the owner + 0x1000 base and reads it as [r5, #488] */
#include "common.h"

struct Unk2c1b64Source {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[0x14];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
};
struct Unk2c1b64Owner {
    /* 0x0000 */ u8 unk0000[0x11E4];
    /* 0x11E4 */ Unk2c1b64Source *source;
    /* 0x11E8 */ u8 forceReload;
    /* 0x11E9 */ u8 state;
};

extern "C" {

void FUN_00138810(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void FUN_00145d6c(s32 enable);

/* Turns the output on or off, unless it is already in that state. */
static void setOutputState(Unk2c1b64Owner *owner, u8 state)
{
    if (owner->state != state) {
        FUN_00145d6c(state);
        owner->state = state;
    }
}

/* Switches the owner to a new source: applies its settings when it changed (or a reload was
 * requested), then turns the output on for a source and off without one. */
void FUN_002c1b64(Unk2c1b64Owner *owner, Unk2c1b64Source *source)
{
    if (owner->forceReload != 0 || owner->source != source) {
        owner->source = source;
        if (source != NULL) {
            FUN_00138810(source->unk14, source->unk18, source->unk34, source->unk30, source->unk38,
                         source->unk3C, source->unk40);
            owner->state = 3;
        }
    }
    owner->forceReload = 0;
    if (source == NULL) {
        setOutputState(owner, 0);
    } else {
        setOutputState(owner, 1);
    }
}

} /* extern "C" */
