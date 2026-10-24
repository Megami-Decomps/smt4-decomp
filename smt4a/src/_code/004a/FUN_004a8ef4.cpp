/* NON_MATCHING: the sprite grid loops are strength-reduced differently from retail (226 vs 234 rows: retail keeps separate row base registers per grid); the reset sequence is the same. */
#include "common.h"

extern "C" {

/* The battle UI block (0x13000+ bytes). Only the regions initialised here are named; each region
 * is addressed by its byte offset because the layout is a set of sprite grids. */
typedef struct BtlUi {
    u8 raw[1];
} BtlUi;

typedef struct BtlUiGlobals {
    u8 unk00[0x10];
    BtlUi *block;
} BtlUiGlobals;

/* The battle owner record (only the flag word read here). */
typedef struct BtlOwner {
    u8 unk00[0x10C];
    u32 flags;                       /* 0x40000: show the extra guide */
} BtlOwner;

extern BtlUiGlobals g_btlUi;
extern u8 DAT_0052ac1c[];
extern u8 DAT_0052ad3c[];
extern u8 DAT_0052ae44[];
extern u8 DAT_0052af04[];

void FUN_002b14c8(void *state);
void FUN_002cdad4(void *state);
void FUN_0021c45c(void *state, BtlOwner *owner);
void paramsClearPacket(void *packet);
void paramsInit(void *packet, const void *a, u32 aSize, const void *b, u32 bSize, const void *c, u32 cSize, u32 d, u32 e,
                const void *f, u32 fSize);
void FUN_0014e188(void *sprite, u32 group, u32 id, void *owner, u32 flag, f32 scale);
void uiSpriteSelectAnim(void *sprite, u32 anim);
void uiSpriteSetImageKeyframe(void *sprite, u32 frame, u32 flag);
void *asdOperatorNew(u32 size, BtlOwner *allocator);
void *FUN_003f9ab0(void *object);

/* The address `offset` bytes into the block. */
#define BTL_UI(block, offset) ((u8 *)(block) + (offset))

/* Resets the battle UI for `owner`: clears the counters, builds the parameter packet and the
 * sprite grids (cursor rows, name plates, gauges, number sprites), allocates the result window
 * object and sets the guide flag. */
void FUN_004a8ef4(void *unused, BtlOwner *owner)
{
    u8 *ui = (u8 *)g_btlUi.block;

    *(u32 *)BTL_UI(ui, 0x74A0) = 0;
    *(u32 *)BTL_UI(ui, 0x74A4) = 0;
    *BTL_UI(ui, 0x7505) = 0;
    *BTL_UI(ui, 0x7506) = 0;
    FUN_002b14c8(ui + 8);
    FUN_002cdad4(BTL_UI(ui, 0x24BC));
    FUN_0021c45c(BTL_UI(ui, 0x28C4), owner);
    ui = (u8 *)g_btlUi.block;
    *(u16 *)BTL_UI(ui, 0x6B56) = 0;
    *(u16 *)BTL_UI(ui, 0x6C82) = 0;
    *(u16 *)BTL_UI(ui, 0x6DAE) = 0;
    *(u16 *)BTL_UI(ui, 0x6EDA) = 0;
    *(u16 *)BTL_UI(ui, 0x7006) = 0;
    void *params = BTL_UI(ui, 0x7508);

    paramsClearPacket(params);
    paramsInit(params, DAT_0052ac1c, 0x120, DAT_0052ad3c, 0x108, DAT_0052ae44, 0xC0, 0, 0, DAT_0052af04, 0x5B0);
    for (s32 row = 0; row < 16; row++) {
        u8 *base = ui + row * 0x400;

        *BTL_UI(base, 0x7994) = 0;
        for (s32 i = 0; i < 5; i++) {
            u8 *sprite = BTL_UI(base, 0x75B4 + i * 0x8C);

            FUN_0014e188(sprite, 7, 2000, params, 0xF1, 1.0f);
            uiSpriteSelectAnim(sprite, 3);
        }
        FUN_0014e188(BTL_UI(base, 0x7870), 0xD, 1000, params, 0xF1, 1.0f);
        uiSpriteSelectAnim(BTL_UI(base, 0x7870), 8);
        FUN_0014e188(BTL_UI(base, 0x78FC), 0xD, 0x3EA, params, 0xF1, 1.0f);
        uiSpriteSelectAnim(BTL_UI(base, 0x78FC), 8);
        u8 *plate = ui + row * 0xA0;

        *BTL_UI(plate, 0xB64C) = 0;
        FUN_0014e188(BTL_UI(plate, 0xB5B4), 0xD, 0x3EE, params, 0xF1, 1.0f);
        uiSpriteSelectAnim(BTL_UI(plate, 0xB5B4), 9);
    }
    for (s32 i = 0; i < 12; i++) {
        u8 *entry = ui + i * 0x14C;

        *(u16 *)BTL_UI(entry, 0x11A2C) = 0;
        FUN_0014e188(BTL_UI(entry, 0x11914), 0xD, 0xBBA, ui + 0x7508, 0xF1, 1.0f);
        uiSpriteSelectAnim(BTL_UI(entry, 0x11914), 10);
        FUN_0014e188(BTL_UI(entry, 0x119A0), 0xD, 0xBBE, ui + 0x7508, 0xF1, 1.0f);
        uiSpriteSelectAnim(BTL_UI(entry, 0x119A0), 11);
    }
    void *window = asdOperatorNew(0x420, owner);

    if (window != NULL) {
        window = FUN_003f9ab0(window);
    }
    *(void **)BTL_UI(ui, 0x7488) = window;
    for (s32 i = 0; i < 12; i++) {
        u8 *slot = ui + i * 0xC;
        u8 *sprite = BTL_UI(ui, 0x128AC + i * 0x8C);

        *(u16 *)BTL_UI(slot, 0x12F3C) = 0;
        *(u32 *)BTL_UI(slot, 0x12F40) = 0;
        *(u32 *)BTL_UI(slot, 0x12F44) = 0;
        FUN_0014e188(sprite, 0xC, 0x84, ui + 0x7508, 0xB, 1.0f);
        uiSpriteSelectAnim(sprite, 13);
    }
    *BTL_UI(ui, 0x6168) = 0;
    if ((owner->flags & 0x40000) != 0) {
        *BTL_UI(ui, 0x6168) = 1;
    }
    FUN_0014e188(BTL_UI(ui, 0x7528), 8, 0, params, 1, 1.0f);
    uiSpriteSetImageKeyframe(BTL_UI(ui, 0x7528), 13, 0);
}

}
