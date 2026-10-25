/* NON_MATCHING: shared script-entry symbol and cost/funds comparison now match; compiler places the shared substep-three store after the choice test instead of before it. */
#include "common.h"
#include "shard/Shard004A.h"

/* The shop scene: its mode, substep, the script and the item list. */
struct ShopScene {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 mode;
    /* 0x08 */ s32 substep;
    /* 0x0C */ s32 returnMode;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 tableGroup;
    /* 0x18 */ u32 script;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u8 items[4][0x24];
};


extern "C" {
extern const char DAT_00533214[]; /* "npcShop_Few_HaveSkill", shared script-entry name. */
s32 eventQueueAddUniqueIfValid(u32 event);
void sysPlaySe(u32 id);
void FUN_0019de98(s32 a, u32 color);
void FUN_00215bd0(void);
void FUN_0022e774(void);
s32 FUN_0023b3d0(void);
void FUN_0023b45c(s32 arg);
s32 FUN_0026c3a0(void);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void FUN_00285774(void);
s32 messageGetChoiceResult(void);
void statusDownRestartTransition(void);
void FUN_002c8538(s32 arg);
void FUN_002c85b0(s32 arg);
void FUN_00333dc8(s32 arg);
void FUN_003e3a20(ShopScene *scene, void *item);
s32 tableGroupFindEntryIndex(u32 group, const char *name);
s32 padButtonIsPressed(u32 pad);
}

/* The scene's own layout past the item list: the selected item and two counters. */
struct ShopSceneState {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ s32 selected;
    /* 0xA4 */ s32 cost;
    /* 0xA8 */ s32 funds;
};

/* Switches the scene to `mode` and remembers the previous one. */
static inline void pushMode(ShopScene *scene, s32 mode)
{
    s32 previous = scene->mode;
    scene->mode = mode;
    scene->substep = 0;
    scene->returnMode = previous;
}

extern "C" void FUN_003e37f8(ShopScene *scene)
{
    ShopSceneState *state = (ShopSceneState *)scene;
    s32 next;
    switch (scene->substep) {
    case 0:
        FUN_002c85b0(13);
        FUN_002c8538(1);
        FUN_00215bd0();
        sysPlaySe(0x119);
        next = 1;
        break;
    case 1:
        if (!FUN_0023b3d0())
            return;
        FUN_003e3a20(scene, scene->items[state->selected]);
        FUN_00285774();
        next = 2;
        break;
    case 2:
        if (!padButtonIsPressed(0))
            return;
        eventQueueAddUniqueIfValid(0x100020E);
        FUN_003343f0(1);
        FUN_00333dc8(1);
        if (state->cost > state->funds) {
            s32 entry = tableGroupFindEntryIndex(scene->tableGroup, DAT_00533214);
            if (entry >= 0)
                scrScriptProcessStartEntry(scene->script, entry);
            sysPlaySe(0xA4);
            next = 4;
            break;
        }
        scene->substep = 3;
        return;
    case 3:
        pushMode(scene, 5);
        return;
    case 4: {
        if (scrRunOpcodesStub(scene->script) != 2)
            return;
        s32 choice = messageGetChoiceResult();
        if (choice != -1 && choice != 1) {
            scene->substep = 3;
            return;
        }
        next = 10;
        break;
    }
    case 10:
        FUN_0022e774();
        FUN_0023b45c(0);
        statusDownRestartTransition();
        next = 11;
        break;
    case 11:
        if (!FUN_0026c3a0())
            return;
        FUN_003343f0(0);
        FUN_00333dc8(0);
        FUN_002c8538(0);
        FUN_0019de98(0, 0xF4F4F4FF);
        next = 99;
        break;
    case 99:
        pushMode(scene, 3);
        return;
    default:
        return;
    }
    scene->substep = next;
}
