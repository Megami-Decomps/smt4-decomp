#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* What a menu element is built from. */
typedef struct EffMenuDesc {
    u32 unk00; /* 0x00 */
    u32 unk04; /* 0x04 */
    u32 unk08; /* 0x08 */
} EffMenuDesc;

typedef struct EffMenu {
    u32 unk00;              /* 0x00 */
    u32 unk04;              /* 0x04 */
    u32 unk08;              /* 0x08 */
    u32 unk0c;              /* 0x0c */
    u32 unk10;              /* 0x10 */
    u32 unk14;              /* 0x14 */
    u32 unk18;              /* 0x18 */
    u32 unk1c;              /* 0x1c */
    u32 unk20;              /* 0x20 */
    u32 unk24;              /* 0x24 */
    u32 unk28;              /* 0x28 */
    u32 unk2c;              /* 0x2c */
    u32 unk30;              /* 0x30 */
    u32 unk34;              /* 0x34 */
    u32 unk38;              /* 0x38 */
    u32 unk3c;              /* 0x3c */
    u32 unk40;              /* 0x40 */
    u32 unk44;              /* 0x44 */
    EffMenuDesc * desc;     /* 0x48 */
} EffMenu;

extern void *memAlloc(int heap, int alignClass, int unk08, int size, int align, int fromFront);

/* Allocates a menu element and fills it from `desc`. */
EffMenu *effMenuCreate(EffMenuDesc *desc)
{
    EffMenu *menu;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 2830);
    menu = (EffMenu *)memAlloc(0x10000, 0x100, 0, sizeof(EffMenu), 0x10, 1);
    menu->unk00 = 8;
    menu->unk04 = 8;
    menu->unk08 = 0;
    menu->unk0c = desc->unk00;
    menu->unk10 = 0;
    menu->unk14 = 0;
    menu->unk18 = 0;
    menu->unk1c = 0;
    menu->unk20 = 0;
    menu->unk24 = 0xffffc040;
    menu->unk28 = 0xc0000000;
    menu->unk2c = desc->unk08;
    menu->unk30 = desc->unk08;
    menu->unk34 = 0;
    menu->unk38 = 0;
    menu->unk40 = 0;
    menu->unk3c = 0;
    menu->desc = desc;
    return menu;
}

} /* extern "C" */
