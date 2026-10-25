/* NON_MATCHING: the compiler shares the scriptState store between cases, unlike retail's r6 constant and writeback store to the state subobject. */
#include "common.h"

struct MenuScriptState {
    /* 0x000 */ u8 unk000[0x350];
    /* 0x350 */ void *script;
    /* 0x354 */ void *scriptData;
    /* 0x358 */ u8 unk358[8];
    /* 0x360 */ void *process;
    /* 0x364 */ u8 unk364[0x4c];
    /* 0x3b0 */ s32 state;
    /* 0x3b4 */ u8 unk3b4[8];
    /* 0x3bc */ s32 scriptState;
    /* 0x3c0 */ u8 unk3c0[0x20];
    /* 0x3e0 */ s32 mode;
    /* 0x3e4 */ u8 unk3e4[0x3f1];
    /* 0x7d5 */ u8 skipCec;
};

extern "C" {
void *FUN_00275bc8(void *script, void *data);
void scrScriptProcessStartEntry(void *process, s32 entry);
void sysPlaySe(s32 id);
void cecProcessCall4(void);
u32 scrRunOpcodesStub(void *process);

// Start the mode-specific menu script, then advance when it reports completion.
u32 menuPollModeScript(MenuScriptState *menu)
{
    u32 result = 0;
    switch (menu->scriptState) {
    case 0:
        if (menu->script && menu->scriptData) {
            void *process = FUN_00275bc8(menu->script, menu->scriptData);
            menu->process = process;
            if (menu->mode == 1)
                scrScriptProcessStartEntry(process, 0x19);
            else if (menu->mode == 2)
                scrScriptProcessStartEntry(process, 0x1a);
            else if (menu->mode == 5)
                scrScriptProcessStartEntry(process, 0x1d);
            else if (menu->mode == 6)
                scrScriptProcessStartEntry(process, 0x25);
            else if (menu->mode == 3)
                scrScriptProcessStartEntry(process, 0x1b);
            else
                scrScriptProcessStartEntry(process, 0x1c);
            sysPlaySe(0x3e);
            if ((menu->mode == 1 || menu->mode == 2) && !menu->skipCec)
                cecProcessCall4();
            menu->scriptState = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(menu->process) == 2) {
            menu->state = 9;
            result = 3;
            menu->scriptState = 0;
        }
        break;
    }
    return result;
}
}
