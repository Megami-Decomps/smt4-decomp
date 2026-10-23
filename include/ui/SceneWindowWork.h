#ifndef UI_SCENE_WINDOW_WORK_H
#define UI_SCENE_WINDOW_WORK_H
#include "shard/W5_W5Match2_TimedState.h"
#include "classes/SelectionState.h"
#include "classes/Obj4221a4.h"
#include "shard/ScreenTransitionState.h"
#include <stddef.h>

struct SceneWindowCursorView {
    u8 unk00[0x8a];
    s8 confirmed; // 0x8a
};

struct SceneWindowWork {
    u32 unk0000; // 0x0000
    union {
        u8 unk0004[0x20C]; // 0x0004
        struct {
            s32 state; // 0x0004
            s32 phase; // 0x0008
            u8 unk000c[0x1fc];
            ScreenTransitionCallback *callback; // 0x0208
        } transition;
    };
    TimedState firstTimer; // 0x0210
    TimedState secondTimer; // 0x0224
    u8 unk0238[8]; // 0x0238
    u8 selectionStorage[sizeof(SelectionFlags)]; // 0x0240
    u8 unk024F[0x65]; // 0x024F
    const void* dispatchTable; // 0x02B4
    u8 unk02B8[0x30]; // 0x02B8
    u32 windowStorage[sizeof(Obj4221a4) / sizeof(u32)]; // 0x02E8
    u32 unk0350; // 0x0350
    u32 unk0354; // 0x0354
    u32 unk0358; // 0x0358
    u8 unk035C[0xDCC]; // 0x035C
    u32 unk1128; // 0x1128
    u32 unk112C; // 0x112C
    u8 unk1130[0x80]; // 0x1130
    union {
        u32 unk11B0; // 0x11B0
        u32 dialogJob; // 0x11B0
    };
    union {
        u8 unk11B4[0x5E0]; // 0x11B4
        struct {
            u8 unk11b4[0x43c];
            SceneWindowCursorView cursor; // 0x15f0
        } dialog;
    };
    u32 unk1794; // 0x1794
    u32 unk1798; // 0x1798
    u8 unk179C[4]; // 0x179C
    u32 unk17A0; // 0x17A0
    u8 unk17A4[0x48C]; // 0x17A4
    u32 unk1C30; // 0x1C30
};
typedef char SceneWindowSelectionCheck[offsetof(SceneWindowWork, selectionStorage) == 0x240 ? 1 : -1];
typedef char SceneWindowMemberCheck[offsetof(SceneWindowWork, windowStorage) == 0x2E8 ? 1 : -1];
typedef char SceneWindowTailCheck[offsetof(SceneWindowWork, unk1C30) == 0x1C30 ? 1 : -1];
typedef char SceneWindowTransitionCheck[
    offsetof(SceneWindowWork, transition.phase) == 8 &&
    offsetof(SceneWindowWork, transition.callback) == 0x208 &&
    offsetof(SceneWindowWork, dialog.cursor.confirmed) == 0x167a &&
    sizeof(SceneWindowWork) == 0x1c34 ? 1 : -1];
#endif
