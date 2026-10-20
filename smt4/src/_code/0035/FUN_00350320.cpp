#include "common.h"

extern "C" {

typedef struct Part Part;

typedef struct PartVtable {
    /* 0x00 */ void (*unk00[6])(Part *part);
    /* 0x18 */ void (*onEnd)(Part *part);
    /* 0x1C */ void (*unk1C[3])(Part *part);
    /* 0x28 */ void (*onStart)(Part *part);
} PartVtable;

struct Part {
    /* 0x0 */ PartVtable *vtable;
};

typedef struct PartHolder {
    /* 0x000 */ u8 unk000[0x158];
    /* 0x158 */ u8 sub[0x190];
    /* 0x2E8 */ s32 startCount;
    /* 0x2EC */ Part *startParts[0x66];
    /* 0x484 */ s32 endCount;
    /* 0x488 */ Part *endParts[1];
} PartHolder;

u32 FUN_003f5ff0(u8 *sub);

/* Calls every start part and every end part, then forwards the sub-object to FUN at 0x3F5FF0. */
u32 FUN_00350320(PartHolder *holder)
{
    s32 i;

    for (i = 0; i < holder->startCount; i++) {
        Part *part = holder->startParts[i];

        if (part != NULL) {
            part->vtable->onStart(part);
        }
    }
    for (i = 0; i < holder->endCount; i++) {
        Part *part = holder->endParts[i];

        if (part != NULL) {
            part->vtable->onEnd(part);
        }
    }
    return FUN_003f5ff0(holder->sub);
}

} /* extern "C" */
