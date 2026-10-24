/* NON_MATCHING: readable rewrite compiles (172 vs 154 rows); retail keeps a float constant in s16 (vpush d8) used by a float helper this version does not model, and addresses the screen fields via different base registers */
#include "common.h"

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
    u8 cursorLocked;            // 0x58e
    u8 unk58f;
    u8 menuSprite[0xc40 - 0x590];       // 0x590
    u8 listSprites[6][0x8c];    // 0xc40
};

extern "C" {

extern u8 DAT_005f1a5c;
extern s8 DAT_005f1a5e;

s32 FUN_00163aa4(void* sprite);
void FUN_00167458(void* sprite, s32 arg);
void uiSpriteSetImageKeyframe(void* sprite, s32 image, s32 keyframe);
void dialogClose(s32 arg);
void FUN_002d22c0(s32 arg);
void FUN_0048821c(MapScreen* screen, s32 mapIndex);
void FUN_0048a378(MapScreen* screen);
void FUN_0048d248(MapScreen* screen, u32 value);
void naviMainSetCurrentMap(void* cursor, s32 mapIndex);
void FUN_00492ac8(void* cursor, s32 arg);
u32 FUN_00492c84(void* cursor);
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
            for (s32 i = 0; i < 6; i++) FUN_00163aa4(screen->listSprites[i]);
            FUN_00163aa4(SCREEN_PTR(screen, 0x112c));
            FUN_00163aa4(SCREEN_PTR(screen, 0x10a0));
        }
        FUN_00163aa4(titleSprite);
        if (FUN_00163aa4(screen->menuSprite) != 0) screen->phase = 1;
        u32 y = vec2GetYInt(screen->menuSprite);
        u32 x = vec2GetXInt(screen->menuSprite);
        pointConvertToFloat(SCREEN_PTR(screen, 0x4d0), x, y);
        *dirtyA = 1;
        *dirtyB = 1;
    } else if (phase == 1) {
        void* cursor = SCREEN_PTR(screen, 0x4cc);
        naviMainSetCurrentMap(cursor, screen->mapIndex);
        FUN_00492ac8(cursor, 0);
        FUN_0048821c(screen, screen->mapIndex);
        uiSpriteSetImageKeyframe(titleSprite, 2, 0);
        if (DAT_005f1a5e != 0) {
            DAT_005f1a5e = 0;
            screen->selectedMarker = *reinterpret_cast<u32*>(SCREEN_PTR(screen, 0x20510));
            *dirtyA = 1;
            *dirtyB = 1;
        } else {
            DAT_005f1a5e = 1;
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
            DAT_005f1a5c = 0;
        }
        screen->phase = 2;
    } else if (phase == 2) {
        FUN_00163aa4(titleSprite);
        FUN_00163aa4(SCREEN_PTR(screen, 0x1014));
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
