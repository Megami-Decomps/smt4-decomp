/* NON_MATCHING: readable rewrite from retail disassembly compiles (209 vs 203 rows); register allocation and the member-callback call sequence differ */
#include "common.h"

// Draw-state stack embedded in the title scene (push/pop with a lazy flush).
struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(s32 state);   // 0x1c
};

struct TitleScene {
    u8 unk0000[0x124c];
    DrawRing ringA;         // 0x124c
    u8 unk126c[0x12ac - 0x126c];
    DrawRing ringB;         // 0x12ac
};

// A bound member-function reference (pointer + adjustment words, EABI style).
struct MemberCallback {
    s32 function;           // function address, or vtable byte offset when `adjust` bit 0 is set
    s32 adjust;             // bit 0: virtual; the rest (>> 1) is the this-adjustment
};

struct MenuScreen {
    u8 unk00[4];
    s32 current;                    // 0x04: selected entry
    u8 unk08[0xb0];
    MemberCallback handlers[1];     // 0xb8
};

extern "C" {

extern TitleScene* g_titleScene;

void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
void FUN_002c39a4(TitleScene* scene);
s32 FUN_002c5d80(s32 a, s32 b);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
f32 renderCtxCalculateStereoParallax(TitleScene* ctx, f32 depth);
void FUN_002bf380(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
void FUN_002bf288(s32 layer, s32 group, s32 index, s32 x, s32 y, s32 z);
void effectRenderTransformedInstance(void* instance, f32 offset);
void FUN_002c198c(TitleScene* scene);
void FUN_002c18e4(TitleScene* scene);

static void pushState(DrawRing* ring, s32 state)
{
    s32 previous = ring->slots[ring->index];
    ring->index++;
    ring->slots[ring->index] = state;
    if (ring->dirty != 0 || previous != state) {
        ring->flush(state);
        ring->dirty = 0;
    }
}

static void popState(DrawRing* ring)
{
    s32 previous = ring->slots[ring->index];
    ring->index--;
    s32 state = ring->slots[ring->index];
    if (ring->dirty != 0 || previous != state) {
        ring->flush(state);
        ring->dirty = 0;
    }
}

// Draws the menu screen (frame, shadow and its 24 effect instances) and then runs the
// selected entry's handler.
void FUN_00392b2c(MenuScreen* screen)
{
    if (screen->current <= 0) return;
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002c39a4(g_titleScene);
    s32 scissor = FUN_002c5d80(1, 0);
    pushState(&g_titleScene->ringA, scissor);
    pushState(&g_titleScene->ringB, packNibblesAndByte(6, 7, 0));
    s32 x = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.38f);
    FUN_002bf380(2, 0x11, 0, 0, 0, 0xb);
    efctSetSpeed(*reinterpret_cast<f32*>(reinterpret_cast<u8*>(screen) + 0x1000 + 0x9c + 0x20));
    FUN_002bf288(2, 0x1d, 2000, x, 0, 0xb);
    efctSetSpeed(1.0f);
    s32 shift = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.36f);
    pushState(&g_titleScene->ringB, packNibblesAndByte(6, 1, 0));
    for (s32 i = 0; i < 24; i++) {
        effectRenderTransformedInstance(reinterpret_cast<u8*>(screen) + i * 0x8c + 892, (f32)shift);
    }
    popState(&g_titleScene->ringB);
    popState(&g_titleScene->ringB);
    popState(&g_titleScene->ringA);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);

    MemberCallback* handler = &screen->handlers[screen->current];
    s32 function = handler->function;
    s32 adjust = handler->adjust;
    if (function == 0 && ((adjust & 1) == 0 || adjust == 0)) return;
    u8* self = reinterpret_cast<u8*>(screen) + (adjust >> 1);
    typedef void (*Handler)(void*);
    Handler call = reinterpret_cast<Handler>(function);
    if ((adjust & 1) != 0) {
        u8* vtable = *reinterpret_cast<u8**>(self);
        call = *reinterpret_cast<Handler*>(vtable + function);
    }
    call(self);
}

} /* extern "C" */
