/* NON_MATCHING: same block layout and calls as retail and the four cleared target slots now use the retail immediate addressing; the build still hoists the shared `1` state argument into r2 before the button compares, where retail materialises it in each block. */
#include "battle/BattleCommandMenu.h"
#include "shard/PlayScene.h"

extern "C" {
void FUN_0028cf30(PlayScene *scene, u32 argument, u32 flag);
void FUN_0028e9ec(PlayScene *scene);
s32 FUN_00293230(void);
void FUN_00297b94(PlayScene *scene, u32 first, u32 second);
u32 FUN_00297ca4(PlayScene *scene, u32 flag);
void playSceneSetState(PlayScene *scene, s32 state, s32 flag);
void flaggedEntrySetValueB(void *entry, s32 value);
void spriteStartAnimationByIndex(void *sprite, s32 index);
void FUN_002cfed0(PlayScene *scene, u32 argument, s32 flag, u32 other);

// Handles a button press (`button`, -1: none) on the battle command menu: moves to the matching menu state, or hands the
// press on when the battle is in a state that blocks the menu.
void FUN_00297f1c(PlayScene *scene, u32 argument, s32 button, u32 other)
{
    if (scene->unk3083[0] != 0) {
        scene->unk305C = 0;
        FUN_0028e9ec(scene);
        flaggedEntrySetValueB(&scene->targeting.selector, 0);
        spriteStartAnimationByIndex(reinterpret_cast<u8 *>(scene) + 0x20, 0);
        for (s32 i = 0; i < 8; i++) {
            spriteStartAnimationByIndex(reinterpret_cast<u8 *>(scene) + 0x138 + i * 0x8c, 0);
        }
        scene->unk3054 = 0x2d;
        playSceneSetState(scene, 0x10, 1);
        return;
    }
    btlGetMainState();
    if (FUN_00293230() != 0 || (btlGetMainStateExt()->flags44A0 & 0x200) != 0) {
        FUN_002cfed0(scene, argument, 1, other);
        return;
    }
    {
        if (button == -1) {
            if (scene->state == 0x1a || scene->state == 0x1b) {
                playSceneSetState(scene, 1, 1);
                FUN_00297b94(scene, FUN_00297ca4(scene, 1), scene->unk305C);
                return;
            }
            if (scene->state != 0x11) {
                btlGetMainState();
                if (FUN_00293230() == 0 && (btlGetMainStateExt()->flags44A0 & 0x200) == 0) {
                    FUN_002cfed0(scene, argument, 1, other);
                    return;
                }
            }
            FUN_0028cf30(scene, argument, other);
        } else if (button == 11) {
            playSceneSetState(scene, scene->mode, 1);
        } else if (button == 1) {
            for (s32 i = 4; i < 8; i++) {
                scene->targeting.targets[i] = 0;
            }
            playSceneSetState(scene, 8, 1);
        } else if (button == 2) {
            playSceneSetState(scene, 8, 1);
        } else if (button == 7) {
            playSceneSetState(scene, 10, 1);
        } else if (button == 3) {
            playSceneSetState(scene, 12, 1);
        } else {
            playSceneSetState(scene, 1, 1);
        }
        return;
    }
}
}
