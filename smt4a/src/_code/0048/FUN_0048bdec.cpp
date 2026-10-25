/* NON_MATCHING: native animation-rate arguments and shared navigation flags are recovered; sprite/selection subobject base registers and phase block layout still differ. */
#include "common.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"

// Map selection screen: only the members this update touches.
struct MapScreen {
    u8 unk00[0x10];
    u32 flags;                  // 0x10: bit 3 update active, bit 17 wide cursor, bit 12 pending
    u8 unk14[0x5e - 0x14];
    s8 phase;                   // 0x5e: 0 = browse, 1 = enter map, 2 = settle
    u8 unk5f;
    s32 mapIndex;               // 0x60
    u8 selectedMarker;          // 0x64
    u8 unk65[0x504 - 0x65];
    u8 pointerSprite[0x58e - 0x504];    // 0x504
    s8 cursorLocked;            // 0x58e
    u8 unk58f;
    u8 menuSprite[0xc40 - 0x590];       // 0x590
    u8 listSprites[6][0x8c];    // 0xc40
};

extern "C" {

extern GameStateA g_gameState;

s32 FUN_00163aa4(void* sprite, f32 step);
void FUN_00167458(void* sprite, s32 arg);
void uiSpriteSetImageKeyframe(void* sprite, s32 image, s32 keyframe);
void dialogClose(s32 arg);
void FUN_002d22c0(s32 arg);
void FUN_0048821c(MapScreen* screen, s32 mapIndex);
void FUN_0048a378(MapScreen* screen);
void FUN_0048d248(MapScreen* screen, u32 value);
void naviMainSetCurrentMap(void* cursor, s32 mapIndex);
u32 vec2GetXInt(void* sprite);
u32 vec2GetYInt(void* sprite);
void pointConvertToFloat(void* pointer, u32 x, u32 y);

#define SCREEN_BYTE(screen, offset) (*reinterpret_cast<u8*>(reinterpret_cast<u8*>(screen) + (offset)))
#define SCREEN_PTR(screen, offset) (reinterpret_cast<void*>(reinterpret_cast<u8*>(screen) + (offset)))

// Per-frame update of the map selection screen.
void FUN_0048bdec(MapScreen* screen)
{
    if ((screen->flags & 8) == 0) return;

    s8 phase = screen->phase;
    void* titleSprite = SCREEN_PTR(screen, 0xf88);
    u8* dirtyA = &SCREEN_BYTE(screen, 0x7b90);
    u8* dirtyB = &SCREEN_BYTE(screen, 0x7b91);
    if (phase == 0) {
        if (SCREEN_BYTE(screen, 0x20644) != 0) {
            for (s32 i = 0; i < 6; i++) FUN_00163aa4(screen->listSprites[i], 1.0f);
            FUN_00163aa4(SCREEN_PTR(screen, 0x112c), 1.0f);
            FUN_00163aa4(SCREEN_PTR(screen, 0x10a0), 1.0f);
        }
        FUN_00163aa4(titleSprite, 1.0f);
        if (FUN_00163aa4(screen->menuSprite, 1.0f) != 0) screen->phase = 1;
        u32 y = vec2GetYInt(screen->menuSprite);
        u32 x = vec2GetXInt(screen->menuSprite);
        pointConvertToFloat(SCREEN_PTR(screen, 0x4d0), x, y);
        *dirtyA = 1;
        *dirtyB = 1;
    } else if (phase == 1) {
        void* cursor = SCREEN_PTR(screen, 0x4cc);
        naviMainSetCurrentMap(cursor, screen->mapIndex);
        FUN_00492ac8(reinterpret_cast<u32>(cursor), 0);
        FUN_0048821c(screen, screen->mapIndex);
        uiSpriteSetImageKeyframe(titleSprite, 2, 0);
        if (g_gameState.navigation.naviMapPending != 0) {
            g_gameState.navigation.naviMapPending = 0;
            screen->selectedMarker = *reinterpret_cast<u32*>(SCREEN_PTR(screen, 0x20510));
            *dirtyA = 1;
            *dirtyB = 1;
        } else {
            g_gameState.navigation.naviMapPending = 1;
            FUN_0048d248(screen, FUN_00492c84(cursor));
        }
        FUN_0048a378(screen);
        if (SCREEN_BYTE(screen, 0x20644) != 0) {
            screen->selectedMarker = *reinterpret_cast<u32*>(SCREEN_PTR(screen, 0x20510));
            *dirtyA = 1;
            *dirtyB = 1;
            FUN_002d22c0(0);
            dialogClose(1);
            SCREEN_BYTE(screen, 0x20644) = 0;
            FUN_0048a378(screen);
            g_gameState.navigation.alternateNaviMap = 0;
        }
        screen->phase = 2;
    } else if (phase == 2) {
        FUN_00163aa4(titleSprite, 1.0f);
        FUN_00163aa4(SCREEN_PTR(screen, 0x1014), 1.0f);
        FUN_00167458(screen->pointerSprite, 0);
        if (screen->cursorLocked != 0) {
            if (screen->mapIndex > 100) screen->flags &= 0xfffdffff;
            pointConvertToFloat(SCREEN_PTR(screen, 0x4d0), 0, 0);
            screen->flags &= 0xffffeff7;
        } else {
            u32 y = vec2GetYInt(screen->pointerSprite);
            u32 x = vec2GetXInt(screen->pointerSprite);
            pointConvertToFloat(SCREEN_PTR(screen, 0x4d0), x, y);
        }
        *dirtyA = 1;
        *dirtyB = 1;
    }
}

} /* extern "C" */
