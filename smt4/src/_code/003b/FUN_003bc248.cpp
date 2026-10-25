/* NON_MATCHING: register allocation only (retail keeps a zero in r6 and the index in r5 across the record lookup, which it lays out of line) */
#include "common.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_Table03Record.h"
#include <stddef.h>
#include "AsdSDK/AsdMemUtil.h"

struct AocSystem;

/* A 0x1c-byte block copied verbatim from the record (word, five-word name, word). */
struct SpriteBlock {
    u32 id;
    u32 name[5];
    u32 tail;
};

/* One record of data table 03 (0x60 bytes), as the sprite initializer reads it. */
struct SpriteTemplateRecord {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s16 phase;
    /* 0x06 */ u16 timer;
    /* 0x08 */ u8 red;
    /* 0x09 */ u8 green;
    /* 0x0A */ u8 blue;
    /* 0x0B */ u8 alpha;
    /* 0x0C */ u8 scalePercent;
    /* 0x0D */ s8 bank;
    /* 0x0E */ s8 page;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ u32 resource;
    /* 0x14 */ u16 values[6];
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ char name[16];
    /* 0x38 */ u16 limits[4];
    /* 0x40 */ s16 ratio;
    /* 0x42 */ u16 ratioExtra;
    /* 0x44 */ SpriteBlock block;
};

/* The sprite's state flag word. Fields are assigned one at a time, which is why every store
   re-reads and masks the word. */
struct SpriteFlagBits {
    u32 unk0 : 16;
    u32 additive : 1;
    u32 subtractive : 1;
    u32 noDepth : 1;
    u32 sorted : 1;
    u32 unk20 : 1;
    u32 colorMask : 2;
    u32 mirrorX : 1;
    u32 mirrorY : 1;
    u32 unk25 : 1;
    u32 unk26 : 1;
    u32 unk27 : 1;
    u32 hasLimits : 1;
    u32 unk29 : 1;
    u32 unk30 : 1;
    u32 unk31 : 1;
};

/* Bits 0-5 of the mode word, the part the initializer fills from the record. */
struct SpriteModeBits {
    u32 unk0 : 1;
    u32 unk1 : 1;
    u32 unk2 : 1;
    u32 unk3 : 1;
    u32 unk4 : 1;
    u32 unk5 : 1;
    u32 unk6 : 26;
};

/* A sprite descriptor (0x74 bytes) as initialized from a table 03 record. */
struct SpriteDescriptor {
    /* 0x00 */ u32 values[6];
    /* 0x18 */ SpriteFlagBits flags;
    union {
        /* 0x1C */ SpriteModeBits mode;
        struct {
            /* 0x1C */ u16 unk1C;
            /* 0x1E */ u8 format;
            /* 0x1F */ s8 bank;
        } info;
    };
    /* 0x20 */ s8 page;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 resource;
    /* 0x28 */ s16 phase;
    /* 0x2A */ u16 timer;
    /* 0x2C */ u8 red;
    /* 0x2D */ u8 green;
    /* 0x2E */ u8 blue;
    /* 0x2F */ u8 alpha;
    /* 0x30 */ f32 scale[2];
    /* 0x38 */ char name[16];
    /* 0x48 */ u16 limits[4];
    /* 0x50 */ u16 ratioPercent;
    /* 0x52 */ s16 ratio;
    /* 0x54 */ u16 ratioExtra;
    /* 0x56 */ u8 hasBlock;
    /* 0x57 */ u8 unk57;
    /* 0x58 */ SpriteBlock block;
};

extern "C" {
extern AocSystem *g_aocSystem;
Table03Record *aocFindTable03RecordByKey(AocSystem *system, u32 index);
s32 libc_strcmp(const char *a, const char *b);

/* Initialize sprite descriptor `sprite` from record `index` of table 03; the bank and page
   given here replace the record's own when it does not set both. */
void FUN_003bc248(SpriteDescriptor *sprite, s32 index, u8 bank, u8 page)
{
    void *section = dataTableGet(3, 0);
    Table03Record *records = static_cast<Table03Record *>(dataTableGetEntries(section));
    Table03Record *found = records;
    if (index >= 0 && static_cast<u32>(index) < dataTableGetCount(section)) {
        found = aocFindTable03RecordByKey(g_aocSystem, index);
        if (found == NULL) {
            found = &records[index];
        }
    }
    const SpriteTemplateRecord *record = reinterpret_cast<const SpriteTemplateRecord *>(found);

    memClear(sprite, sizeof(SpriteDescriptor));
    for (s32 i = 0; i < 6; i++) {
        sprite->values[i] = 0;
    }
    sprite->scale[0] = 1.0f;
    sprite->scale[1] = 1.0f;
    s8 selected = record->bank;
    sprite->info.bank = selected;
    if (selected > 0) {
        selected = record->page;
    }
    sprite->page = selected;
    if (selected <= 0) {
        sprite->info.bank = bank;
        sprite->page = page;
    }
    sprite->resource = record->resource;
    sprite->flags.unk30 = (record->flags >> 11) & 1;
    sprite->flags.unk31 = (record->flags >> 12) & 1;
    for (s32 i = 0; i < 6; i++) {
        sprite->values[i] = record->values[i];
    }
    if (record->name[0] == '0') {
        sprite->name[0] = 0;
    } else {
        for (s32 i = 0; i < 16; i++) {
            sprite->name[i] = record->name[i];
        }
    }
    if (record->flags & 1) {
        sprite->flags.additive = 1;
    }
    if (record->flags & 2) {
        sprite->flags.subtractive = 1;
    }
    if (record->flags & 4) {
        sprite->flags.colorMask = 3;
    }
    if ((record->flags & 8) == 0) {
        sprite->flags.noDepth = 1;
    }
    if (record->flags & 0x10) {
        sprite->flags.sorted = 1;
    }
    sprite->flags.mirrorX = (record->flags >> 8) & 1;
    sprite->flags.mirrorY = (record->flags >> 9) & 1;
    sprite->flags.unk25 = (record->flags >> 5) & 1;
    sprite->flags.unk26 = (record->flags >> 6) & 1;
    sprite->flags.unk27 = (record->flags >> 7) & 1;
    sprite->flags.unk29 = (record->flags >> 10) & 1;

    sprite->mode.unk0 = (record->flags >> 13) & 1;
    sprite->mode.unk1 = (record->flags >> 23) & 1;
    sprite->mode.unk2 = (record->flags >> 24) & 1;
    sprite->phase = record->phase;
    sprite->timer = record->timer;
    sprite->mode.unk3 = (record->flags >> 25) & 1;
    sprite->mode.unk4 = (record->flags >> 26) & 1;
    sprite->mode.unk5 = (record->flags >> 27) & 1;
    sprite->info.format = ((record->flags >> 14) & 7) - 1;
    sprite->red = record->red;
    sprite->green = record->green;
    sprite->blue = record->blue;
    sprite->alpha = record->alpha;

    if (record->limits[0] != 0) {
        sprite->limits[0] = record->limits[0];
        sprite->flags.hasLimits = 1;
    } else {
        sprite->limits[0] = 0;
    }
    if (record->limits[1] != 0) {
        sprite->limits[1] = record->limits[1];
        sprite->flags.hasLimits = 1;
    } else {
        sprite->limits[1] = 0;
    }
    if (record->limits[2] != 0) {
        sprite->limits[2] = record->limits[2];
        sprite->flags.hasLimits = 1;
    } else {
        sprite->limits[2] = 0;
    }
    if (record->limits[3] != 0) {
        sprite->limits[3] = record->limits[3];
        sprite->flags.hasLimits = 1;
    } else {
        sprite->limits[3] = 0;
    }
    if (record->scalePercent != 0) {
        sprite->scale[1] = (f32)record->scalePercent * 0.01f;
    }
    sprite->ratioPercent = record->ratio != 0 ? 100 : 0;
    sprite->ratio = record->ratio;
    sprite->ratioExtra = record->ratioExtra;
    if (libc_strcmp("0", reinterpret_cast<const char *>(record->block.name)) == 0) {
        sprite->hasBlock = 0;
    } else {
        sprite->block = record->block;
    }
}
}
