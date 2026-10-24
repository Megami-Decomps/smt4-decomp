/* NON_MATCHING: 173 vs 160 rows: twin of smt4 FUN_0033c1bc; retail also keeps a float argument in s16 (vpush {d8}) that it forwards to the icon calls, which this signature does not model */
#include "common.h"

// Draw-state stack embedded in the title scene.
struct DrawRing {
    s32 index;              // 0x00
    s32 unk04;
    s32 slots[4];           // 0x08
    u8 dirty;               // 0x18
    u8 unk19[3];
    void (*flush)(void);    // 0x1c
};

struct RenderCtx {
    u8 unk0000[0x1318];
    DrawRing ring;          // 0x1318
};

// Status icon strip of one party member: only the fields used here.
struct StatusStrip {
    u8 unk00[0x18];
    s32 scroll;             // 0x18
    s32 cursor;             // 0x1c
    u8 unk20[2];
    u8 isPlayerVariant;     // 0x22
    u8 unk23[9];
    s32 originX;            // 0x2c
    s32 originY;            // 0x30
    s32 member;             // 0x34: unit index, negative for the player
};

struct LayoutEntry {
    u8 unk00[8];
    s16 x;                  // 0x08
    s16 y;                  // 0x0a
    s16* size;              // 0x0c
};

struct UnitStatus {
    u8 unk00[0x60];
    u16 ailments;           // 0x60
};

struct PlayerStatus {
    u8 unk00[0x5e];
    u16 ailments;           // 0x5e
};

extern "C" {

extern RenderCtx* g_renderCtx;

LayoutEntry* FUN_001834a4(u32 group, u32 index);
UnitStatus* gameGetSlotRecord(s32 index);
UnitStatus* btlMainGetUnk14(void);
PlayerStatus* gameGetPlayerData(void);
void effectDispatchSelector(s32 icon, s32 x, s32 y, s32 kind);
void FUN_0035ae58(s32 x, s32 y, s32 w, s32 h, s32 arg);

static void setDrawState(s32 value)
{
    DrawRing* ring = &g_renderCtx->ring;
    s32 previous = ring->slots[ring->index];
    ring->slots[ring->index] = value;
    if (ring->dirty != 0 || previous != value) {
        ring->flush();
        ring->dirty = 0;
    }
}

// Draws the status ailment icons of a member; with two or more it also draws the
// icon that follows the highlighted one, offset by the scroll position.
void FUN_003f3a90(StatusStrip* strip, s32 x, s32 y)
{
    u32 slot = 0x12;
    if (strip->isPlayerVariant != 0) slot = 0x50;
    LayoutEntry* layout = FUN_001834a4(0x11, slot);
    s32 count = 0;
    s16 current = 0;
    s16 following = 0;
    u32 ailments = 0;
    if (strip->member == -1) {
        ailments = gameGetPlayerData()->ailments;
    } else if (strip->member == -2) {
        UnitStatus* unit = btlMainGetUnk14();
        if (unit != NULL) ailments = unit->ailments;
    } else if (strip->member >= 0) {
        ailments = gameGetSlotRecord(strip->member)->ailments;
    }
    for (s32 bit = 1; bit <= 13; bit++) {
        if ((ailments & (1 << bit)) != 0) {
            if (strip->cursor == count) current = bit;
            count++;
        }
    }
    if (count == 1) {
        effectDispatchSelector(current, layout->x + x, layout->y + y, 0x7e);
        return;
    }
    if (count > 1) {
        if (strip->scroll < 0x14) {
            effectDispatchSelector(current, layout->x + x, layout->y + y, 0x7e);
            return;
        }
        s32 n = 0;
        for (s32 bit = 1; bit <= 13; bit++) {
            if ((ailments & (1 << bit)) != 0) {
                if ((strip->cursor + 1) % count == n) following = bit;
                n++;
            }
        }
        setDrawState(3);
        FUN_0035ae58(strip->originX + layout->x, strip->originY + layout->y, layout->size[0], layout->size[1], 1);
        s32 shift = (strip->scroll - 0x14) * -3;
        effectDispatchSelector(current, layout->x + shift + x, layout->y + y, 0x7e);
        effectDispatchSelector(following, layout->x + x + shift + 0xd, layout->y + y, 0x7e);
        setDrawState(0);
    }
}

} /* extern "C" */
