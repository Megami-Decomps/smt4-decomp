#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct EventRowTextures {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 firstTexture;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u16 secondTexture;
};

typedef UiSpriteState EventRowSprite;

struct EventRow {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 state;
    /* 0x005 */ u8 nextState;
    /* 0x006 */ u8 unk006[0x7E];
    /* 0x084 */ EventRowTextures* textures;
    /* 0x088 */ u8 unk088[0x1B4];
    /* 0x23C */ EventRowSprite firstSprite;
    /* 0x2C8 */ EventRowSprite secondSprite;
};

extern "C" {
s32 FUN_00163aa4(EventRowSprite* sprite, f32 speed);
void FUN_0049d140(EventRow* row, u32 state, u32 entry);
void FUN_0049d770(EventRow* row);
void FUN_0049df84(EventRow* row);
void updateNineRowListInput(EventRow* row);
s32 FUN_001517b4(u32 button, u32 mode);
void eventQueueAddUniqueIfValid(u32 event);
void FUN_0049ea54(EventRow* row);
}

// A nonpositive texture ID does not need a table node.
static __inline bool eventRowTextureIsReady(s32 texture)
{
    return texture <= 0 || asdTMTexTableNodeIsLoaded(0x33, texture);
}

// Advance an event-list row while its textures and transition animations complete.
extern "C" u32 eventRowUpdateState(EventRow* row, u32 handle)
{
    switch (row->state) {
    case 1:
        if (!FUN_00163aa4(&row->firstSprite, 1.0f)) {
            break;
        }
        FUN_0049d140(row, row->nextState, 0);
        break;
    case 2:
        FUN_0049d770(row);
        break;
    case 3:
        FUN_0049df84(row);
        break;
    case 4:
        if (eventRowTextureIsReady(row->textures->firstTexture) &&
            eventRowTextureIsReady(row->textures->secondTexture)) {
            FUN_0049d140(row, 6, 0);
        }
        break;
    case 5:
        if (FUN_00163aa4(&row->secondSprite, 1.0f)) {
            FUN_0049d140(row, row->nextState, 0);
        }
        break;
    case 6:
        updateNineRowListInput(row);
        if (FUN_001517b4(1, 1)) {
            eventQueueAddUniqueIfValid(0x100020F);
            uiSpriteSelectAnim(&row->secondSprite, 1);
            FUN_0049d140(row, 5, 3);
        }
        break;
    case 7:
        FUN_0049ea54(row);
        break;
    case 8:
        if (!eventRowTextureIsReady(row->textures->firstTexture)) {
            break;
        }
        if (!eventRowTextureIsReady(row->textures->secondTexture)) {
            break;
        }
        {
            s32 complete = FUN_00163aa4(&row->firstSprite, 1.0f);
            FUN_00163aa4(&row->secondSprite, 1.0f);
            if (complete) {
                FUN_0049d140(row, row->nextState, 0);
            }
        }
        break;
    case 9:
        updateNineRowListInput(row);
        if (!FUN_001517b4(1, 1) && !FUN_001517b4(0, 1)) {
            break;
        }
        eventQueueAddUniqueIfValid(0x100020E);
        uiSpriteSelectAnim(&row->firstSprite, 1);
        uiSpriteSelectAnim(&row->secondSprite, 1);
        FUN_0049d140(row, 8, 0);
        break;
    }
    return 0;
}
