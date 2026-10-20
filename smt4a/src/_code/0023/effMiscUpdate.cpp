#include "common.h"

extern "C" {

struct EffMisc;

/* One effect kind: callbacks at +8 (update). */
typedef struct EffMiscKind {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void (*update)(struct EffMisc *eff);
    /* 0x0C */ u8 unk0c[0xC];
} EffMiscKind; /* 0x18 bytes */

typedef struct EffMisc {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 kind;
    /* 0x1C */ s32 frame;
} EffMisc;

extern EffMiscKind DAT_005c1078[];

extern s32 effGetFrameStep(void);

/* Runs the effect's kind-specific update, then advances its frame counter by the frame step. */
void effMiscUpdate(EffMisc *eff)
{
    DAT_005c1078[eff->kind].update(eff);
    eff->frame += effGetFrameStep();
}

}
