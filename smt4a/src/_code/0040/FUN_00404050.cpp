/* NON_MATCHING: register allocation only: retail keeps the 0xffffffff text color/0x6b in sl/r9 (set after the null check) and the switch flag in r1 */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

/* A content list entry: kind selects the frame style, flag adds the badge overlay, name is the displayed text. */
struct ContentEntry {
    u8 unk00[4];
    u16 kind;      /* 0x04 */
    u16 badge;     /* 0x06 */
    u8 unk08[8];
    char name[1];  /* 0x10 */
};

struct EffectPlacement {
    u8 unk00[8];
    s16 x;         /* 0x08 */
    s16 y;         /* 0x0A */
};

extern "C" {

extern const char DAT_0052d134[]; /* "<pc 0>" */

ContentEntry *FUN_0039b984(u32 id);
void sysMemClear(void *buffer, u32 bytes);
void efctSetSpeed(f32 speed);
EffectPlacement *asdTMTexTableEntryAt(u32 table, u32 id);
s32 FUN_004038e0(u32 unused, u32 kind);
void drawSetColorFromRGBA8(u32 rgba);
void FUN_00183bb0(void);
s32 libc_strcmp(const char *a, const char *b);
void gameGetPlayerData(void);
const char *gameGetPlayerName(void);
void textFormatBuffer(char *buffer, const char *format, ...);
void efctPlayVariantSet(u32 unused, u32 target, u32 slot, s32 index, s32 useFirstSet, s32 useSecondSet, f32 speed);

/* Draws one content list entry: its frame, name and badge, at the given offset. */
void FUN_00404050(u32 effect, f32 speed, u32 handle, s32 x, s32 y, s32 useFirstSet, s32 useSecondSet)
{
    ContentEntry *entry = FUN_0039b984((u16)handle);
    char text[128];
    EffectPlacement *placement;
    s32 frameId;
    s32 framed;
    s32 frameX;
    s32 frameY;
    const char *name;
    u32 textColor = 0xffffffff;

    if (entry != NULL) {
        sysMemClear(text, sizeof(text));
        efctSetSpeed(speed);
        placement = asdTMTexTableEntryAt(0x32, 99);
        frameX = placement->x + x;
        frameY = placement->y + y;
        frameId = FUN_004038e0(effect, entry->kind);
        framed = 0;
        switch (entry->kind) {
        case 0:
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
        case 13:
        case 15:
        case 17:
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        case 14:
        case 16:
        case 18:
            framed = 1;
            break;
        }
        if (framed) {
            drawSetColorFromRGBA8(0x57d8ffff);
            FUN_001835b4(2, 0x32, frameId, frameX, frameY, 0x6b);
            FUN_001835b4(2, 0x32, 0x3f1, frameX, frameY, 0x6b);
            FUN_00183bb0();
        } else {
            FUN_001835b4(2, 0x32, frameId, frameX, frameY, 0x6b);
        }
        placement = asdTMTexTableEntryAt(0x32, 100);
        name = entry->name;
        if (libc_strcmp(name, DAT_0052d134) == 0) {
            gameGetPlayerData();
            name = gameGetPlayerName();
        }
        textFormatBuffer(text, "%s", name);
        textDrawString(2, textColor, text, (f32)(placement->x + x), (f32)(placement->y + y), 0.56640625f, 0.0f, speed);
        placement = asdTMTexTableEntryAt(0x32, 0x65);
        efctPlayVariantSet(effect, placement->x + x, placement->y + y, 0x79, useFirstSet, useSecondSet, speed);
        if (entry->badge != 0) {
            efctSetSpeed(speed);
            placement = asdTMTexTableEntryAt(0x32, 0x9b);
            x += placement->x;
            y += placement->y;
            FUN_001835b4(2, 0x32, 0x9c, x, y, 0x79);
            FUN_001835b4(2, 0x32, 0x9d, x, y, 0x7a);
        }
        efctSetSpeed(1.0f);
    }
}

} /* extern "C" */
