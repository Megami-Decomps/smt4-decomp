#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/asdTMTexLoadMainHeap.h"

struct DirectoryEntryDefinition {
    /* 0x00 */ u16 group;
    /* 0x02 */ u8 unk02[0x34];
    /* 0x36 */ u16 firstNode;  /* texture node loaded while the entry is shown */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u16 secondNode;
    /* 0x42 */ u8 unk42[2];
};

struct DirectoryScreenWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 state;
    /* 0x005 */ u8 unk005[0xb];
    /* 0x010 */ DirectoryEntryDefinition *definitions;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ u16 order[0x34];
    /* 0x080 */ u8 unk080[4];
    /* 0x084 */ DirectoryEntryDefinition *definition;
    /* 0x088 */ u8 unk088[0xc];
    /* 0x094 */ u32 height;
    /* 0x098 */ u8 unk098[0x8c];
    /* 0x124 */ u8 flags[0x64];
    /* 0x188 */ s32 pending;
    /* 0x18c */ u8 listbox[0x60];
    /* 0x1ec */ u8 unk1ec[4];
    /* 0x1f0 */ s32 scroll;
    /* 0x1f4 */ s32 cursor;
    /* 0x1f8 */ s32 index;
    /* 0x1fc */ u8 touchPosition[0x10];
    /* 0x20c */ u8 unk20c[6];
    /* 0x212 */ s16 touchX;
    /* 0x214 */ s16 touchY;
    /* 0x216 */ s16 touchWidth;
    /* 0x218 */ u8 unk218[0x24];
    /* 0x23c */ u8 backSprite[0x8c];
    /* 0x2c8 */ u8 selectSprite[0x8c];
    /* 0x354 */ u8 panelA[0x8c];
    /* 0x3e0 */ u8 panelB[0x8c];
};

typedef char DirectoryScreenWorkOffsets[offsetof(DirectoryScreenWork, definitions) == 0x10 &&
    offsetof(DirectoryScreenWork, order) == 0x18 &&
    offsetof(DirectoryScreenWork, definition) == 0x84 &&
    offsetof(DirectoryScreenWork, height) == 0x94 &&
    offsetof(DirectoryScreenWork, flags) == 0x124 &&
    offsetof(DirectoryScreenWork, listbox) == 0x18c &&
    offsetof(DirectoryScreenWork, scroll) == 0x1f0 &&
    offsetof(DirectoryScreenWork, touchPosition) == 0x1fc &&
    offsetof(DirectoryScreenWork, touchX) == 0x212 &&
    offsetof(DirectoryScreenWork, backSprite) == 0x23c &&
    offsetof(DirectoryScreenWork, selectSprite) == 0x2c8 &&
    offsetof(DirectoryScreenWork, panelA) == 0x354 &&
    offsetof(DirectoryScreenWork, panelB) == 0x3e0 ? 1 : -1];

extern "C" {

void FUN_00163aa4(void *sprite, f32 scale);
s32 FUN_001517b4(s32 pad, s32 mode);
void eventQueueAddUniqueIfValid(u32 id);
void uiSpriteSelectAnim(void *sprite, s32 anim);
s32 ifTouchGetSelectionMode(void);
void asdTMTexTableReleaseNode(u32 table, s32 node);

void FUN_00203b40(void *flags, u32 height, s32, s32, s32, s32);
void FUN_00212724(void);
void FUN_00228b04(void *listbox, s32 mode);
u32 resourceRunOperationIfUnblocked(void *listbox);
s32 FUN_002a4894(void *listbox);
void flagsSetOrClearBit(void *flags, s32 bit);
s32 FUN_003450d4(void *listbox, u32 handle, void *position, s32 width, s32 x, s32 y, u8 *result, s32, s32);
void FUN_003fd690(u16 id, s32 mode);
s32 flagsAtGetBit1(u16 id);
void FUN_0049d140(DirectoryScreenWork *work, s32 state, s32 arg);
void FUN_0049de10(DirectoryScreenWork *work);

/* Re-selects the directory entry under the cursor and handles confirm/cancel input. */
void FUN_0049df84(DirectoryScreenWork *work)
{
    u8 result;
    s32 mode;
    s32 node;

    FUN_00163aa4(work->panelA, 1.0f);
    FUN_00163aa4(work->panelB, 1.0f);
    FUN_00228b04(work->listbox, 1);
    work->scroll = resourceRunOperationIfUnblocked(work->listbox);
    work->cursor = FUN_002a4894(work->listbox);
    work->index = work->order[work->cursor + work->scroll];
    work->definition = &work->definitions[work->index];
    result = 0;
    mode = ifTouchGetSelectionMode();
    if (FUN_003450d4(work->listbox, reinterpret_cast<u32>(asdTMTexTableEntryAt(0x33, 0x57)), work->touchPosition, work->touchWidth, work->touchX,
                     work->touchY, &result, 0, 1) != 0) {
        return;
    }
    if (FUN_001517b4(0, 1) || mode == 6) {
        eventQueueAddUniqueIfValid(0x100020e);
        node = work->definition->firstNode;
        if (node > 0 && !asdTMTexTableNodeIsLoaded(0x33, node)) {
            asdTMTexLoadMainHeap(0x33, node);
        }
        node = work->definition->secondNode;
        if (node > 0 && !asdTMTexTableNodeIsLoaded(0x33, node)) {
            asdTMTexLoadMainHeap(0x33, node);
        }
        FUN_0049de10(work);
        FUN_00203b40(work->flags, work->height, 9, 1, 1, 1);
        flagsSetOrClearBit(work->flags, 0);
        work->pending = 0;
        if (flagsAtGetBit1(work->definition->group)) {
            FUN_003fd690(work->definition->group, 0);
        }
        uiSpriteSelectAnim(work->selectSprite, 0);
        FUN_0049d140(work, 5, 6);
    } else if (FUN_001517b4(1, 1)) {
        eventQueueAddUniqueIfValid(0x100020f);
        node = work->definition->firstNode;
        if (node > 0 && asdTMTexTableNodeIsLoaded(0x33, node)) {
            asdTMTexTableReleaseNode(0x33, node);
        }
        node = work->definition->secondNode;
        if (node > 0 && asdTMTexTableNodeIsLoaded(0x33, node)) {
            asdTMTexTableReleaseNode(0x33, node);
        }
        uiSpriteSelectAnim(work->backSprite, 1);
        FUN_00212724();
        FUN_0049d140(work, 1, 10);
    }
}

} /* extern "C" */
