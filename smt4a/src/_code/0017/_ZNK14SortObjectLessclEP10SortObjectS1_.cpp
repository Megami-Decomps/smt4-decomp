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

/* The object's class record, or NULL when it has one without both valid bits (0x40000001) set. */
static __inline ClassInfo *validInfo(Object *obj)
{
    return (obj->info != NULL && (obj->info->flags & 0x40000001) != 0x40000001) ? NULL : obj->info;
}

/* Returns 1 if `a`'s class record sorts before `b`'s (or if `b` is NULL), else 0. */
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
