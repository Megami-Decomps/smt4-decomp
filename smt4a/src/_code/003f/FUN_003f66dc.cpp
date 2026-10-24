/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 232 diff lines remain, scheduling/register allocation only. */
#include "camp/RenderCtx.h"

namespace {
/* A layout record: its position at +8/+10. */
struct LayoutRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
};

/* An entry of the list (0x34 bytes): a flags halfword and a packed kind/value halfword. */
struct ListEntry {
    /* 0x00 */ u16 flags;
    /* 0x02 */ u16 kindAndValue;        /* high byte 10: no value */
    /* 0x04 */ u8 unk04[0x30];
};

/* The list menu's work block (only the fields this draw reads). */
struct ListMenu {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ ListEntry *entries;
    /* 0x024 */ u8 unk024[0x20];
    /* 0x044 */ s32 cursor;
    /* 0x048 */ u8 unk048[0x10];
    /* 0x058 */ u8 frame[0xee];
    /* 0x146 */ u8 unk146[0x500];
};
}

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
LayoutRecord *FUN_001834a4(u32 group, u32 id);
void FUN_001835b4(u32 layer, u32 group, u32 id, s32 x, s32 y, u32 slot);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
void FUN_003f7164(ListMenu *menu, ListEntry *entry, s32 index, u32 kind, s32 x, s32 y, u32 slot, f32 speed);
void FUN_003f6424(ListMenu *menu, ListEntry *entry, u32 kind, s32 x, s32 y, u32 slot);
s32 flagsBGetBit1(u32 flags);
void FUN_00344cd0(void *frame, s32 x, s32 y, u32 group, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g,
                  s32 h, s32 i, s32 j, u32 k, u32 l);

/* Draws the four list slots: the highlighted one with its animated frame, the others plain, each with its optional
   marker, then the surrounding frame. `speed` scales the effect speed of the highlighted slot. */
void FUN_003f66dc(ListMenu *menu, s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    u8 *base = reinterpret_cast<u8 *>(menu);
    s32 count = *reinterpret_cast<s32 *>(base + 0x6b0);
    for (s32 slot = 0; slot < 4; slot++) {
        s32 id = *reinterpret_cast<s32 *>(base + 0x6c8 + slot * 4);
        if (id < 0 || count <= id) {
            continue;
        }
        u32 entryIndex = *reinterpret_cast<u16 *>(base + id * 2 + 0x5e6);
        if (entryIndex == 0) {
            continue;
        }
        ListEntry *entry = &menu->entries[entryIndex];
        u32 kind = (entry->kindAndValue >> 8) == 10 ? 0 : (entry->kindAndValue & 0xff);
        if (menu->cursor == slot) {
            LayoutRecord *record = FUN_001834a4(0x31, slot + 0x91);
            s32 frameX = record->x + x;
            s32 frameY = record->y + y;
            efctSetSpeed(*reinterpret_cast<f32 *>(base + 0x330 + 0x20) * speed);
            renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
            for (s32 k = 0; k < 4; k++) {
                FUN_001835b4(2, 0x31, k + 0x8c, frameX, frameY, 0x83);
            }
            efctSetSpeed(speed);
            renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 7, 0));
            efctSetSpeed(1.0f);
            record = FUN_001834a4(0x31, slot + 0x88);
            s32 iconX = record->x + x;
            s32 iconY = record->y + y;
            FUN_003f7164(menu, entry, slot, kind, x, y, 0x8d, speed);
            if (flagsBGetBit1(entry->flags) != 0) {
                record = FUN_001834a4(0x31, 0x87);
                iconX = iconX + record->x;
                efctSetSpeed(speed);
                for (s32 k = 0; k < 3; k++) {
                    FUN_001835b4(2, 0x31, k + 0x9d, iconX, iconY + record->y, 0x97 + k);
                }
            }
        } else {
            LayoutRecord *record = FUN_001834a4(0x31, slot + 0x88);
            s32 iconX = record->x + x;
            s32 iconY = record->y + y;
            FUN_003f6424(menu, entry, kind, iconX, iconY, 0x8d);
            if (flagsBGetBit1(entry->flags) != 0) {
                record = FUN_001834a4(0x31, 0x87);
                iconX = iconX + record->x;
                efctSetSpeed(speed);
                for (s32 k = 0; k < 3; k++) {
                    FUN_001835b4(2, 0x31, k + 0x9d, iconX, record->y + iconY, 0x97 + k);
                }
            }
        }
    }
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x31, 0x9a, x, y, 0x83);
    s16 *frameWords = reinterpret_cast<s16 *>(base + 0x100);
    FUN_00344cd0(menu->frame, x, y, 0x31, 0x99, 0x9b, 0x9c, 0x95, 0x96, 0x97, 0x98, frameWords[0x46 / 2],
                 frameWords[0x42 / 2], frameWords[0x44 / 2], 0x6a, 0);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
