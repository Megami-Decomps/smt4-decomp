#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 *header;
    /* 0x14 */ s32 *sectionA;
    /* 0x18 */ s32 *sectionB;
    /* 0x1C */ s32 *sectionC;
    /* 0x20 */ s32 *sectionD;
    /* 0x24 */ s32 *sectionE;
    /* 0x28 */ s32 *source;
    /* 0x2C */ u8 unk2C[0x10];
    /* 0x3C */ u8 parsed;
} Obj;

/* Parses the 'NKDW' (0x57444b4e) container header once, locating its five sections. */
u32 nkdwHeaderParse(Obj *obj)
{
    u16 count;
    u32 result;
    s32 *source;
    s32 *cursor;

    source = obj->source;
    if (source == NULL) {
        result = 0;
    } else {
        if (obj->parsed == 0) {
            obj->parsed = 1;
            obj->header = source;
            if (*source != 0x57444b4e) {
                obj->header = NULL;
            } else {
                cursor = source + 10;
                obj->sectionA = cursor;
                cursor = cursor + *(u16 *)(source + 1) * 8;
                obj->sectionB = cursor;
                cursor = cursor + source[2] * 10;
                obj->sectionC = cursor;
                count = *(u16 *)((int)source + 6);
                obj->sectionD = cursor + count;
                obj->sectionE = cursor + count + *(u16 *)(source + 3) * 6;
            }
        }
        result = 1;
    }
    return result;
}

} /* extern "C" */
