/* NON_MATCHING: register allocation only: retail loads a's info into r1 (reusing the parameter) and b's into r0 (swapped here) */
/* Returns 1 if `a`'s class record sorts before `b`'s (or if `b` is NULL), else 0. */
#include "common.h"

extern "C" {

typedef struct ClassInfo {
    /* 0x00 */ u32 flags;       /* both bits 30 and 0 must be set for a valid record */
    /* 0x04 */ u8 unk04[0x48];
    /* 0x4C */ u32 order;
} ClassInfo;

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ClassInfo *info;
} Object;

static __inline ClassInfo *validInfo(Object *obj)
{
    ClassInfo *info = obj->info;

    if (info != NULL && (~info->flags & 0x40000001) != 0) {
        info = NULL;
    }
    return info;
}

u32 _ZNK14SortObjectLessclEP10SortObjectS1_(u32 unused, Object *a, Object *b)
{
    if (b == NULL) {
        return 1;
    }
    if (a != NULL) {
        ClassInfo *infoA = validInfo(a);
        ClassInfo *infoB = validInfo(b);

        if (infoA->order < infoB->order) {
            return 1;
        }
    }
    return 0;
}

}
