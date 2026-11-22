/* NON_MATCHING: the sprite grid loops are strength-reduced differently from retail (retail keeps separate row base registers per grid and clears the five 0x12C-stride halfwords from one reloaded block pointer); the reset sequence and the paramsInit tables (one anchored block, as retail) are the same. */
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "ui/UiControl.h"

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
/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sBtlUiPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 2, 2, 0, 0},
    {0, 0, 0, 0, 10, 0, 0},
    {0, 2, 0, 2, 10, 0, 0},
    {400, 0, 0, 0, 5, 0, 0},
    {0, 0, 0, 0, 10, 0, 0},
    {0, 0, -400, 0, 5, 0, 0},
    {-64, -64, 0, 0, 5, 0, 0},
    {-104, 0, 0, 0, 3, 0, 0},
    {0, 40, 0, 0, 2, 0, 0},
    {20, 0, 0, 0, 8, 0, 0},
    {0, 0, 0, 4, 16, 0, 0},
    {0, 4, 0, 0, 24, 0, 0},
    {0, 0, 18, -10, 10, 0, 0},
    {18, -10, 50, -18, 10, 0, 0},
    {50, -18, 40, -10, 10, 0, 0},
    {40, -10, 30, 8, 10, 0, 0},
    {30, 8, 20, 16, 10, 0, 0},
    {20, 16, 0, 0, 10, 0, 0},
    {0, 0, 0, 0, 15, 0, 0},
    {-1, -1, -1, -1, 15, 0, 0},
    {180, 0, 0, 0, 5, 0, 0},
    {0, 0, 0, 0, 18, 0, 0},
    {0, 0, -240, 0, 5, 0, 0},
};
static const UiSpriteScalarKey sBtlUiAlphaKeys[] = {
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 20, 0, 0},
    {1.0f, 0.0f, 10, 0, 0},
    {0.0f, 0.0f, 30, 0, 0},
    {0.6f, 0.4f, 10, 0, 0},
    {0.4f, 0.2f, 10, 0, 0},
    {0.2f, 0.6f, 10, 0, 0},
    {0.6f, 0.2f, 10, 0, 0},
    {0.2f, 0.55f, 10, 0, 0},
    {0.55f, 0.6f, 10, 0, 0},
    {1.0f, 0.0f, 8, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 11, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 1.0f, 18, 0, 0},
    {1.0f, 0.0f, 5, 0, 0},
};
static const UiSpriteScalarKey sBtlUiScaleKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 1.3f, 1, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.3f, 0.3f, 5, 0, 0},
    {0.3f, 1.0f, 4, 0, 0},
    {1.0f, 4.0f, 20, 0, 0},
    {4.0f, 6.0f, 10, 0, 0},
    {5.0f, 5.0f, 30, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {0.0f, 1.5f, 4, 0, 0},
    {1.5f, 1.0f, 4, 0, 0},
    {2.0f, 1.0f, 4, 0, 0},
    {4.0f, 1.0f, 4, 0, 0},
    {1.0f, 1.0f, 2, 0, 0},
    {1.0f, 2.0f, 8, 0, 0},
    {1.0f, 0.0f, 6, 0, 0},
};
static const SpriteAnimationCommand sBtlUiAnimations[] = {
    {-3, 0, {0, 0, 0}, 0, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, 1, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {4, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, 3, 0, {0, 0, 0}},
    {5, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, 4, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 0, 1, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, 0, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, 9, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, 10, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {11, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {12, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {11, 0, {0, 0, 0}, -3, 3, 0, {0, 0, 0}, 5, 0, {0, 0, 0}},
    {12, 0, {0, 0, 0}, -3, 4, 0, {0, 0, 0}, 6, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, 5, 0, {0, 0, 0}, 7, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -2, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {13, 0, {0, 0, 0}, -3, 6, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {14, 0, {0, 0, 0}, -3, 7, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {15, 0, {0, 0, 0}, -3, 8, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {16, 0, {0, 0, 0}, -3, 9, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {17, 0, {0, 0, 0}, -3, 10, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {18, 0, {0, 0, 0}, -3, 11, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {13, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {14, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {15, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {16, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {17, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {18, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {10, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 2, 0, {0, 0, 0}, 11, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 15, 0, {0, 0, 0}, 12, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, 13, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 16, 0, {0, 0, 0}, 14, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 17, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {-3, 0, {0, 0, 0}, -3, 18, 0, {0, 0, 0}, 15, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {21, 0, {0, 0, 0}, -3, 19, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {22, 0, {0, 0, 0}, -3, 20, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {23, 0, {0, 0, 0}, -3, 21, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

void itemListScreenInit(void *state);
void btlEventPanelInitialize(void *state);
void btlUiPartyDisplayInit(void *state, BtlOwner *owner);
void paramsClearPacket(void *packet);

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
    itemListScreenInit(ui + 8);
    btlEventPanelInitialize(BTL_UI(ui, 0x24BC));
    btlUiPartyDisplayInit(BTL_UI(ui, 0x28C4), owner);
    ui = (u8 *)g_btlUi.block;
    *(u16 *)BTL_UI(ui, 0x6B56) = 0;
    *(u16 *)BTL_UI(ui, 0x6C82) = 0;
    *(u16 *)BTL_UI(ui, 0x6DAE) = 0;
    *(u16 *)BTL_UI(ui, 0x6EDA) = 0;
    *(u16 *)BTL_UI(ui, 0x7006) = 0;
    void *params = BTL_UI(ui, 0x7508);

    paramsClearPacket(params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(params), sBtlUiPositionKeys, sizeof(sBtlUiPositionKeys), sBtlUiAlphaKeys, sizeof(sBtlUiAlphaKeys), sBtlUiScaleKeys, sizeof(sBtlUiScaleKeys), NULL, 0, sBtlUiAnimations, sizeof(sBtlUiAnimations));
    for (s32 row = 0; row < 16; row++) {
        u8 *base = ui + row * 0x400;

        *BTL_UI(base, 0x7994) = 0;
        for (s32 i = 0; i < 5; i++) {
            u8 *sprite = BTL_UI(base, 0x75B4 + i * 0x8C);

            uiSpriteStateInitFromSource((UiSpriteState *)sprite, 7, 2000, (UiResourceParameters *)(params), 0xF1, 1.0f);
            uiSpriteSelectAnim((UiSpriteState *)sprite, 3);
        }
        uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(base, 0x7870)), 0xD, 1000, (UiResourceParameters *)(params), 0xF1, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)(BTL_UI(base, 0x7870)), 8);
        uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(base, 0x78FC)), 0xD, 0x3EA, (UiResourceParameters *)(params), 0xF1, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)(BTL_UI(base, 0x78FC)), 8);
        u8 *plate = ui + row * 0xA0;

        *BTL_UI(plate, 0xB64C) = 0;
        uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(plate, 0xB5B4)), 0xD, 0x3EE, (UiResourceParameters *)(params), 0xF1, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)(BTL_UI(plate, 0xB5B4)), 9);
    }
    for (s32 i = 0; i < 12; i++) {
        u8 *entry = ui + i * 0x14C;

        *(u16 *)BTL_UI(entry, 0x11A2C) = 0;
        uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(entry, 0x11914)), 0xD, 0xBBA, (UiResourceParameters *)(ui + 0x7508), 0xF1, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)(BTL_UI(entry, 0x11914)), 10);
        uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(entry, 0x119A0)), 0xD, 0xBBE, (UiResourceParameters *)(ui + 0x7508), 0xF1, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)(BTL_UI(entry, 0x119A0)), 11);
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
        uiSpriteStateInitFromSource((UiSpriteState *)sprite, 0xC, 0x84, (UiResourceParameters *)(ui + 0x7508), 0xB, 1.0f);
        uiSpriteSelectAnim((UiSpriteState *)sprite, 13);
    }
    *BTL_UI(ui, 0x6168) = 0;
    if ((owner->flags & 0x40000) != 0) {
        *BTL_UI(ui, 0x6168) = 1;
    }
    uiSpriteStateInitFromSource((UiSpriteState *)(BTL_UI(ui, 0x7528)), 8, 0, (UiResourceParameters *)(params), 1, 1.0f);
    uiSpriteSetImageKeyframe((UiSpriteState *)(BTL_UI(ui, 0x7528)), 13, 0);
}

}
