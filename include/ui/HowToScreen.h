#ifndef UI_HOW_TO_SCREEN_H
#define UI_HOW_TO_SCREEN_H
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include <stddef.h>

struct HowToDrawTables {
    u8 first[36];
    u8 second[72];
    u8 last[336];
};
typedef char HowToDrawTablesOffsets[sizeof(HowToDrawTables) == 444 &&
    offsetof(HowToDrawTables, second) == 36 &&
    offsetof(HowToDrawTables, last) == 108 ? 1 : -1];

struct HowToScreenWork {
    union {
        /* 0x000 */ u32 unk000[2];
        /* 0x000 */ u32 process;
        struct {
            u32 unk000;
            /* 0x004 */ u8 state;
            u8 unk005[3];
        } mode;
    };
    /* 0x008 */ void *messages[2];
    /* 0x010 */ u32 unk010[2];
    union {
        /* 0x018 */ u8 resetState[0xD0];
        struct {
            /* 0x018 */ u8 unk018[0x68];
            /* 0x080 */ u32 selection;
            /* 0x084 */ u8 unk084[4];
            /* 0x088 */ u32 handles[3];
        } display;
    };
    /* 0x0E8 */ u8 unk0E8[0x134];
    /* 0x21C */ Params002c312c parameters;
    /* 0x23C */ UiSpriteState sprites[4];
};
struct HowToScreenInstance : HowToScreenWork {
    /* 0x46C */ u32 savedButtonHelp;
    /* 0x470 */ s32 entryMode;
    /* 0x474 */ u8 alternate;
    /* 0x475 */ u8 unk475[3];
};
typedef char HowToScreenInstanceLayoutCheck[offsetof(HowToScreenWork, process) == 0 &&
    sizeof(HowToScreenInstance) == 0x478 && offsetof(HowToScreenInstance, savedButtonHelp) == 0x46c &&
    offsetof(HowToScreenInstance, entryMode) == 0x470 &&
    offsetof(HowToScreenInstance, alternate) == 0x474 ? 1 : -1];
typedef char HowToScreenWorkOffsets[sizeof(HowToScreenWork) == 0x46C &&
    offsetof(HowToScreenWork, messages) == 8 &&
    offsetof(HowToScreenWork, display.selection) == 0x80 &&
    offsetof(HowToScreenWork, display.handles) == 0x88 &&
    offsetof(HowToScreenWork, parameters) == 0x21C &&
    offsetof(HowToScreenWork, sprites) == 0x23C ? 1 : -1];
typedef char HowToScreenStateOffsetCheck[offsetof(HowToScreenWork, mode.state) == 4 &&
    sizeof(HowToScreenWork) == 0x46c ? 1 : -1];
#endif
