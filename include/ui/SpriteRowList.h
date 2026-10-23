#ifndef UI_SPRITEROWLIST_H
#define UI_SPRITEROWLIST_H
#include "ui/UiSpriteState.h"
#include <stddef.h>
struct SpriteRowList {
    u8 unk0000[0x20];
    UiSpriteState sprites[61];
    u32 cursor;
    u32 state;
    u32 alternate;
    u32 unk2188;
    s16 rowCount;
    s16 selectedRow;
    u8 unk2190[0x54];
    s16 entryIds[10];
};
typedef char SpriteRowListOffsetsCheck[
    offsetof(SpriteRowList, sprites) == 0x20 &&
    offsetof(SpriteRowList, cursor) == 0x217C &&
    offsetof(SpriteRowList, alternate) == 0x2184 &&
    offsetof(SpriteRowList, rowCount) == 0x218C &&
    offsetof(SpriteRowList, entryIds) == 0x21E4 &&
    sizeof(SpriteRowList) == 0x21F8 ? 1 : -1];
#endif
