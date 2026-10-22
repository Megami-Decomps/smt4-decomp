/* Button-help screen records, resources and indexed choices. */
#ifndef UI_BUTTONHELP_H
#define UI_BUTTONHELP_H
#include "common.h"
typedef struct ButtonHelpValueEntry {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 unk02;
} ButtonHelpValueEntry;
typedef struct ButtonHelpDisplayUnit {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x22];
    /* 0x3A */ u16 value;
    /* 0x3C */ u8 active;
    /* 0x3D */ u8 unk3D[0x4F];
} ButtonHelpDisplayUnit;
typedef struct ButtonHelpWork {
    /* 0x0000 */ u8 unk0000[0x10];
    /* 0x0010 */ s32 state;
    /* 0x0014 */ u8 unk0014[0x368];
    /* 0x037C */ ButtonHelpDisplayUnit units[2];
    /* 0x0494 */ u8 unk0494[2];
    /* 0x0496 */ ButtonHelpValueEntry entries[6];
    /* 0x04AE */ u8 unk04AE[0x16];
    /* 0x04C4 */ u8 unk4C4;
    /* 0x04C5 */ u8 unk4C5;
    /* 0x04C6 */ u8 unk04C6[2];
    /* 0x04C8 */ u8 mode;
    /* 0x04C9 */ u8 unk4C9;
    /* 0x04CA */ u8 unk04CA[0x1];
    /* 0x04CB */ s8 unk4CB;
    /* 0x04CC */ u8 unk04CC[0x84];
    /* 0x0550 */ u32 unk550;
    /* 0x0554 */ u8 unk554;
    /* 0x0555 */ u8 unk555;
    /* 0x0556 */ u8 unk556;
    /* 0x0557 */ u8 unk0557[0x1];
    /* 0x0558 */ u32 unk558;
    /* 0x055C */ u8 unk55C;
    /* 0x055D */ u8 unk055D[0x3];
    /* 0x0560 */ u32 unk560;
} ButtonHelpWork;

typedef struct ButtonHelpUnit {
    /* 0x00 */ u8 unk00[0x8C];
} ButtonHelpUnit;
typedef struct ButtonHelpKind {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 value;
} ButtonHelpKind;
typedef struct ButtonHelpScreenEntry {
    /* 0x00 */ u8 data[0x40];
} ButtonHelpScreenEntry;
typedef struct ButtonHelpWorkA {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ s32 unk0C;
    /* 0x010 */ s32 state;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ ButtonHelpUnit units[6];
    /* 0x37C */ u8 unk37C[0x230];
    /* 0x5AC */ ButtonHelpKind kinds[6];
    /* 0x5C4 */ u8 unk5C4[0xC];
    /* 0x5D0 */ s32 count;
    /* 0x5D4 */ u8 unk5D4[0xC];
    /* 0x5E0 */ u8 unk5E0;
    /* 0x5E1 */ s8 panelState;
    /* 0x5E2 */ u8 unk5E2[2];
    /* 0x5E4 */ u8 unk5E4;
    /* 0x5E5 */ u8 unk5E5;
    /* 0x5E6 */ u16 selectedId;
    /* 0x5E8 */ u8 unk5E8[2];
    /* 0x5EA */ s8 mode;
    /* 0x5EB */ u8 unk5EB[5];
    /* 0x5F0 */ ButtonHelpScreenEntry entries[2];
    /* 0x670 */ u32 unk670;
    /* 0x674 */ u8 unk674;
    /* 0x675 */ u8 unk675;
    /* 0x676 */ u8 unk676;
    /* 0x677 */ u8 unk677;
    /* 0x678 */ u32 unk678;
    /* 0x67C */ s8 helpState;
    /* 0x67D */ u8 unk67D[3];
    /* 0x680 */ u32 process;
} ButtonHelpWorkA;

typedef struct ButtonHelpGlobals {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 loadCount;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ ButtonHelpWork *work;
    /* 0x08 */ s32 mbm;
    /* 0x0C */ s32 bf;
} ButtonHelpGlobals;
typedef struct ButtonHelpGlobalsA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ButtonHelpWorkA *work;
} ButtonHelpGlobalsA;

typedef struct ButtonHelpCompatibilityKind {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
} ButtonHelpCompatibilityKind;
typedef struct ButtonHelpCompatibility {
    /* 0x000 */ u8 unk000[0x5AC];
    /* 0x5AC */ ButtonHelpCompatibilityKind entries[6];
    /* 0x5C4 */ u8 unk5c4[0x10];
    /* 0x5D4 */ u8 active[7];
} ButtonHelpCompatibility;

/* Retail 32-bit layout invariants. */
typedef char ButtonHelpDisplayUnitSizeCheck[sizeof(ButtonHelpDisplayUnit) == 0x8C ? 1 : -1];
typedef char ButtonHelpWorkSizeCheck[sizeof(ButtonHelpWork) == 0x564 ? 1 : -1];
typedef char ButtonHelpWorkASizeCheck[sizeof(ButtonHelpWorkA) == 0x684 ? 1 : -1];
typedef char ButtonHelpGlobalsSizeCheck[sizeof(ButtonHelpGlobals) == 0x10 ? 1 : -1];
typedef char ButtonHelpGlobalsASizeCheck[sizeof(ButtonHelpGlobalsA) == 0x8 ? 1 : -1];

#endif
