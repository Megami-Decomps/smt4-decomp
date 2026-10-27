/* NON_MATCHING: initialises the battle UI block (sprite pools, four timer set, draw parameters, 16 skill tabs, 12 card rows, detail object); written from the decompilation, the draw-parameter chunk addresses and loop shapes not compared with retail */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/ComWin/ComWin.h"

struct BtlUiSprite {
    /* 0x00 */ u8 data[0x8C];
};

/* One of the 16 skill tabs (0x400 bytes): five entry sprites, two labels and a visibility flag. */
struct BtlSkillTab {
    /* 0x000 */ BtlUiSprite entries[5];
    /* 0x2BC */ BtlUiSprite header;
    /* 0x348 */ BtlUiSprite footer;
    /* 0x3D4 */ u8 unk3D4[0xC];
    /* 0x3E0 */ u8 visible;
    /* 0x3E1 */ u8 unk3E1[0x1F];
};

/* One of the 16 command rows (0xA0 bytes). */
struct BtlCommandRow {
    /* 0x00 */ BtlUiSprite sprite;
    /* 0x8C */ u8 unk8C[0xC];
    /* 0x98 */ u8 enabled;
    /* 0x99 */ u8 unk99[7];
};

/* One of the 12 status rows (0x14C bytes). */
struct BtlStatusRow {
    /* 0x000 */ BtlUiSprite icon;
    /* 0x08C */ BtlUiSprite label;
    /* 0x118 */ u16 value;
    /* 0x11A */ u8 unk11A[0x32];
};

struct BtlUiBlock {
    /* 0x0000 */ u8 pool[8];          /* the sprite pool handed to FUN_001f50ac starts here */
    /* 0x0008 */ u8 unk0008[0x21F8];
    /* 0x2200 */ u8 timers[0x260];
    /* 0x2460 */ u8 detail[0x3070];
    /* 0x54D0 */ u8 skipIntro;
    /* 0x54D1 */ u8 unk54D1[0xD5];
    /* 0x55A6 */ u8 unk55A6[0x800];
    /* 0x5DA6 */ u16 cardA;
    /* 0x5DA8 */ u8 unk5DA8[0x602];
    /* 0x63AA */ u16 cardB;
    /* 0x63AC */ u8 unk63AC[0x602];
    /* 0x69AE */ u16 cardC;
    /* 0x69B0 */ u8 unk69B0[0x602];
    /* 0x6FB2 */ u16 cardD;
    /* 0x6FB4 */ u8 unk6FB4[0x602];
    /* 0x75B6 */ u16 cardE;
    /* 0x75B8 */ u8 unk75B8[0x868];
    /* 0x7E20 */ void *detailObject;
    /* 0x7E24 */ u8 unk7E24[0x14];
    /* 0x7E38 */ u32 unk7E38;
    /* 0x7E3C */ u32 unk7E3C;
    /* 0x7E40 */ u8 unk7E40[0x5D];
    /* 0x7E9D */ u8 unk7E9D;
    /* 0x7E9E */ u8 unk7E9E;
    /* 0x7E9F */ u8 unk7E9F;
    /* 0x7EA0 */ UiResourceParameters resources;
    /* 0x7EC0 */ BtlUiSprite cursor;
    /* 0x7F4C */ BtlSkillTab tabs[16];
    /* 0xBF4C */ BtlCommandRow commands[16];
    /* 0xC94C */ u8 unkC94C[0x1760];
    /* 0xE0AC */ BtlStatusRow status[12];
};

struct BtlSetupSource {
    /* 0x00 */ u8 unk00[0xE0];
    /* 0xE0 */ u32 flags;
};

#define BTL_UI_SKIP_INTRO_FLAG 0x40000

extern "C" {
extern BtlUiBlock *g_btlUiBlock;
extern const u8 DAT_00401c6c[];   /* the draw-parameter chunks lie in front of it */

void FUN_001f50ac(void *pool);
void uiInitializeFourTimerSet(void *timers);
void FUN_00199b9c(void *detail, BtlSetupSource *source);
void drawParameterBlockClear(UiResourceParameters *resources);

void FUN_002bd954(BtlUiSprite *sprite, s32 kind, s32 id, UiResourceParameters *resources, s32 flags, f32 speed);
void uiSpriteSetImageKeyframe(BtlUiSprite *sprite, s32 keyframe, s32 flag);
void *asdOperatorNew(u32 size, BtlSetupSource *owner);
void *FUN_0033d3e4(void *memory);

void FUN_003ad76c(void *unused, BtlSetupSource *source)
{
    BtlUiBlock *block = g_btlUiBlock;
    block->unk7E38 = 0;
    block->unk7E3C = 0;
    block->unk7E9D = 0;
    block->unk7E9E = 0;
    FUN_001f50ac(block->pool + 0);
    uiInitializeFourTimerSet(block->timers);
    FUN_00199b9c(block->detail, source);
    block = g_btlUiBlock;
    block->cardA = 0;
    block->cardC = 0;
    block->cardB = 0;
    block->cardD = 0;
    block->cardE = 0;

    UiResourceParameters *resources = &block->resources;
    drawParameterBlockClear(resources);
    paramsInit(resources, DAT_00401c6c - 0x2A0, 0xFC, DAT_00401c6c - 0x1A4, 0xE4, DAT_00401c6c - 0xC0, 0xC0,
               NULL, 0, DAT_00401c6c, 0x5B0);

    for (s32 i = 0; i < 16; i++) {
        block->tabs[i].visible = 0;
        for (s32 j = 0; j < 5; j++) {
            FUN_002bd954(&block->tabs[i].entries[j], 0xD, 2000, resources, 0xF1, 1.0f);
            spriteStartAnimationByIndex(&block->tabs[i].entries[j], 3);
        }
        FUN_002bd954(&block->tabs[i].header, 0x15, 1000, resources, 0xF1, 1.0f);
        spriteStartAnimationByIndex(&block->tabs[i].header, 9);
        FUN_002bd954(&block->tabs[i].footer, 0x15, 0x3EA, resources, 0xF1, 1.0f);
        spriteStartAnimationByIndex(&block->tabs[i].footer, 9);

        BtlCommandRow *row = &block->commands[i];
        row->enabled = 0;
        FUN_002bd954(&row->sprite, 0x15, 0x3EE, resources, 0xF1, 1.0f);
        spriteStartAnimationByIndex(&row->sprite, 10);
    }
    for (s32 i = 0; i < 12; i++) {
        BtlStatusRow *row = &block->status[i];
        row->value = 0;
        FUN_002bd954(&row->icon, 0x15, 0xBBA, resources, 0xF1, 1.0f);
        spriteStartAnimationByIndex(&row->icon, 0xB);
        FUN_002bd954(&row->label, 0x15, 0xBBE, resources, 0xF1, 1.0f);
        spriteStartAnimationByIndex(&row->label, 0xC);
    }

    void *memory = asdOperatorNew(0x3A4, source);
    block->detailObject = memory != NULL ? FUN_0033d3e4(memory) : NULL;
    block->skipIntro = 0;
    if ((source->flags & BTL_UI_SKIP_INTRO_FLAG) != 0)
        block->skipIntro = 1;
    FUN_002bd954(&block->cursor, 0xE, 0, resources, 1, 1.0f);
    uiSpriteSetImageKeyframe(&block->cursor, 0xD, 0);
}

} /* extern "C" */
