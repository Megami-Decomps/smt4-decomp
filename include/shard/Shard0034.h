/* Structs shared by the helper functions in code shard 0034. */
#ifndef SHARD_SHARD0034_H
#define SHARD_SHARD0034_H

#include "common.h"
#include "shard/FloatSortRecord.h"

#include "shard/Shard0031.h"

typedef struct ChildNode {
    /* 0x00 */ u8 unk00[0x5];
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[0x2];
    /* 0x08 */ void *data;
} ChildNode;

typedef struct ChildOwner4 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ ChildNode *child;
} ChildOwner4;

typedef struct Target40 {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 value;
} Target40;

/* Scales a value onto up to two targets (+0x40 of each). */
/* Scales a value onto up to two targets. */
typedef struct Fader {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ Target40 *targetA;
    /* 0x50 */ Target40 *targetB;
    /* 0x54 */ u8 unk54[0x20];
    /* 0x74 */ f32 scale;
    /* 0x78 */ f32 value;
} Fader;

typedef struct Work8C {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 flag;
} Work8C;

typedef struct Work16 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u8 value;
} Work16;

typedef struct Owner0E {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 name[9];
} Owner0E;

typedef struct BitsHolder {
    /* 0x00 */ u8 unk00[0x55];
    /* 0x55 */ u8 bits[8];
} BitsHolder;

typedef struct Obj80 {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
} Obj80;

typedef struct Obj80Ref {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj80 *instance;
} Obj80Ref;

typedef struct SwapSlot {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 value;
} SwapSlot;

typedef struct Parent78 {
    /* 0x00 */ u8 unk00[0x678];
    /* 0x678 */ u32 unk678;
} Parent78;

typedef struct Link0C {
    /* 0x00 */ u8 unk00[0x5E6];
    /* 0x5E6 */ u16 unk5E6;
} Link0C;

#include "shard/Shard0033.h"
#include "shard/Shard0032.h"

typedef struct Flag8 {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 unk04;
} Flag8;

typedef struct LinkEntry10 {
    /* 0x00 */ void *obj;
    /* 0x04 */ u8 unk04[0xC];
} LinkEntry10;

typedef struct BtlStateB {
    /* 0x00 */ u8 unk00[0x2002];
    /* 0x2002 */ s16 unk2002;
    /* 0x2004 */ u8 unk2004[0x2];
    /* 0x2006 */ s16 unk2006;
    /* 0x2008 */ u8 unk2008[0x14];
    /* 0x201C */ Flag8 flags201C[12];
    /* 0x207C */ u8 unk207C[0x1F4];
    /* 0x2270 */ void *unk2270;
    /* 0x2274 */ u8 unk2274[0x1C];
    /* 0x2290 */ s32 unk2290;
    /* 0x2294 */ s32 unk2294;
    /* 0x2298 */ void *unk2298;
    /* 0x229C */ u8 unk229C[0x18];
    /* 0x22B4 */ u8 unk22B4;
    /* 0x22B5 */ u8 unk22B5[0x7];
    /* 0x22BC */ u32 unk22BC;
    /* 0x22C0 */ u8 unk22C0[0x84];
    /* 0x2344 */ u16 table2344[9];
    /* 0x2356 */ s16 unk2356;
    /* 0x2358 */ u8 unk2358[0x48];
    /* 0x23A0 */ s32 unk23A0;
    /* 0x23A4 */ u32 table23A4[0x10];
    /* 0x23E4 */ u8 unk23E4[0x21D4];
    /* 0x45B8 */ u8 unk45B8;
    /* 0x45B9 */ u8 unk45B9[0x6B7];
    /* 0x4C70 */ s16 unk4C70;
    /* 0x4C72 */ s16 unk4C72;
    /* 0x4C74 */ u8 unk4C74[0xC];
    /* 0x4C80 */ s32 unk4C80;
    /* 0x4C84 */ u8 unk4C84[0x4];
    /* 0x4C88 */ u32 words[0x10];
    /* 0x4CC8 */ u8 unk4CC8[0x18];
    /* 0x4CE0 */ s32 unk4CE0;
    /* 0x4CE4 */ s32 unk4CE4;
    /* 0x4CE8 */ u32 unk4CE8;
    /* 0x4CEC */ u8 unk4CEC[0x44];
    /* 0x4D30 */ s32 table4D30[12];
    /* 0x4D60 */ u8 unk4D60[0x14];
    /* 0x4D74 */ s32 unk4D74;
    /* 0x4D78 */ LinkEntry10 entries4D78[12];
    /* 0x4E38 */ u8 unk4E38[0x20];
    /* 0x4E58 */ s32 unk4E58;
    /* 0x4E5C */ s32 unk4E5C;
} BtlStateB;

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ s16 unk2C;
    /* 0x2E */ u8 unk2E[0x2];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44[0x1A];
    /* 0x5E */ u16 unk5E;
    /* 0x60 */ s16 unk60;
    /* 0x62 */ u16 unk62;
} PlayerData;

struct PlayerGrowthEntry {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 attributes[5];
    /* 0x0A */ u8 hp;
    /* 0x0B */ u8 mp;
    /* 0x0C */ u8 extraLow;
    /* 0x0D */ u8 extraHigh;
};
struct PlayerGrowthRecipe {
    /* 0x00 */ u8 attributes[5];
    /* 0x05 */ u8 reserved05;
    /* 0x06 */ u16 hp;
    /* 0x08 */ u16 mp;
    /* 0x0A */ u16 extra;
    /* 0x0C */ u32 reserved0c;
    /* 0x10 */ u16 enabled;
};
typedef char PlayerGrowthEntrySizeCheck[sizeof(PlayerGrowthEntry) == 0x0E ? 1 : -1];
typedef char PlayerGrowthRecipeSizeCheck[sizeof(PlayerGrowthRecipe) == 0x14 ? 1 : -1];
static __inline PlayerGrowthRecipe playerGrowthRecipeFromEntry(const PlayerGrowthEntry *entry)
{
    PlayerGrowthRecipe recipe = {};
    for (u32 index = 0; index < 5; ++index) {
        recipe.attributes[index] = entry->attributes[index];
    }
    recipe.hp = entry->hp;
    recipe.mp = entry->mp;
    recipe.extra = entry->extraLow + (entry->extraHigh << 8);
    recipe.enabled = 1;
    return recipe;
}

struct ActorDetailsTextObjectsIV {
    /* 0x00 */ void *name;
    /* 0x04 */ void *secondaryName;
    /* 0x08 */ void *skills[7];
    /* 0x24 */ s16 skillIds[7];
    /* 0x32 */ u8 unk32[2];
    /* 0x34 */ void *thirdLabel;
    /* 0x38 */ void *centeredValue;
    /* 0x3C */ s32 centeredWidth;
    /* 0x40 */ void *rightAlignedValue;
    /* 0x44 */ s32 rightAlignedWidth;
    /* 0x48 */ void *values[8];
    /* 0x68 */ s32 widths[8];
    /* 0x88 */ s16 portrait;
    /* 0x8A */ u8 unk8a[2];
};
struct ActorDetailsRecordIV {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 flags;
    /* 0x21 */ u8 unk21[0x15];
    /* 0x36 */ u8 level;
    /* 0x37 */ u8 style; /* 0 and 1 select the two supported palettes. */
    /* 0x38 */ s16 values[8];
    /* 0x48 */ u8 unk48[2];
    /* 0x4A */ u8 specialValue;
};
typedef char ActorDetailsTextObjectsIVSizeCheck[sizeof(ActorDetailsTextObjectsIV) == 0x8C ? 1 : -1];
typedef char ActorDetailsRecordIVSizeCheck[sizeof(ActorDetailsRecordIV) == 0x4C ? 1 : -1];

typedef struct Holder48 {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 unk48;
} Holder48;

typedef struct Holder48Ref {
    /* 0x00 */ Holder48 *holder;
} Holder48Ref;

typedef struct JobWork0 {
    /* 0x00 */ s32 *first;
} JobWork0;

typedef struct JobWork34 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ void *unk34;
} JobWork34;

typedef struct Owner2DC {
    /* 0x00 */ u8 unk00[0x2DC];
    /* 0x2DC */ u8 sub[4];
} Owner2DC;

typedef struct KindRef {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 kind;
} KindRef;

typedef struct FlagRec {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flag;
} FlagRec;

typedef struct ViewCursor {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 cursor;
} ViewCursor;

/* The resource's 0x114-byte parameter records. */
typedef struct ModelParameterRecord {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 value;
    /* 0x44 */ u8 unk44[0x16];
    /* 0x5A */ u16 flags;
    /* 0x5C */ u8 unk5C[0xB8];
} ModelParameterRecord;

typedef struct ModelParameterResource {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ ModelParameterRecord *records;
} ModelParameterResource;

typedef struct ModelParameterOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ModelParameterResource *resource;
} ModelParameterOwner;

/* Alternate view of the resource's 0x114-byte records used by the float getter. */
struct ModelParameterFloatRecord {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ f32 value;
    /* 0x2C */ u8 unk2c[0xE8];
};
struct ModelParameterFloatResource {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ ModelParameterFloatRecord *records;
};
struct ModelParameterFloatOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ModelParameterFloatResource *resource;
};


/* Property channels are selected from a strided pointer table. */
struct ModelPropertyTable {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Target40 **targets;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ s32 stride;
};
struct ModelPropertyNode {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ ModelPropertyTable *table;
    /* 0x02C */ u8 unk02c[0x124];
    /* 0x150 */ s32 count;
    /* 0x154 */ s32 index;
};
struct ModelPropertyController {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ModelPropertyNode *node;
    /* 0x30 */ u8 unk30[0x38];
    /* 0x68 */ s32 count;
    /* 0x6C */ u8 unk6c[8];
    /* 0x74 */ f32 scale;
    /* 0x78 */ u8 unk78[8];
    /* 0x80 */ f32 value;
};

typedef char ModelParameterFloatRecordSizeCheck[sizeof(ModelParameterFloatRecord) == 0x114 ? 1 : -1];
typedef char ModelPropertyNodeSizeCheck[sizeof(ModelPropertyNode) == 0x158 ? 1 : -1];
typedef char ModelPropertyControllerSizeCheck[sizeof(ModelPropertyController) == 0x84 ? 1 : -1];

struct EmbeddedFlagState {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s16 mode;
    /* 0x52 */ u8 unk52[2];
    /* 0x54 */ u8 enabled;
    /* 0x55 */ u8 unk55[0x35];
    /* 0x8A */ s8 flag;
};
struct EmbeddedFlagOwner {
    /* 0x000 */ u8 unk000[0x2DC];
    /* 0x2DC */ EmbeddedFlagState state;
};
typedef char EmbeddedFlagStateSizeCheck[sizeof(EmbeddedFlagState) == 0x8C ? 1 : -1];

static __inline s32 embeddedFlagStateMode(const EmbeddedFlagState *state)
{
    return state->mode;
}

/* Owner of the three command channels reset by the 0x294414 helper. */
typedef struct CommandOwner4394 {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ void *commands;
} CommandOwner4394;

/* Scalar animation channel updated through its interpolation callback. */
typedef f32 (*ScalarInterpolation)(f32 start, f32 end, f32 time, void *work);
typedef struct ScalarAnimationChannel {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ f32 current;
    /* 0x3C */ f32 previous;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ f32 start;
    /* 0x48 */ f32 end;
    /* 0x4C */ ScalarInterpolation interpolate;
    /* 0x50 */ void *work;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u8 dirty;
} ScalarAnimationChannel;

typedef struct ScalarAnimationOwner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 count;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ ScalarAnimationChannel *channel;
} ScalarAnimationOwner;

static __inline ScalarAnimationChannel *modelPropertyScalarChannel(ModelPropertyNode *node, u32 channel)
{
    if (node->count == 0) {
        return NULL;
    }
    return (ScalarAnimationChannel *)node->table->targets[node->index * node->table->stride + channel];
}

static __inline f32 scalarAnimationEnd(const ScalarAnimationChannel *channel)
{
    return channel != NULL ? channel->end : 0.0f;
}

/* IV's earlier property-node layout places the channel selector eight bytes sooner. */
struct LegacyModelPropertyNode {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ ModelPropertyTable *table;
    /* 0x02C */ u8 unk02c[0x11C];
    /* 0x148 */ s32 count;
    /* 0x14C */ s32 index;
};
struct LegacyModelPropertyController {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ LegacyModelPropertyNode *node;
    /* 0x30 */ u8 unk30[0x28];
    /* 0x58 */ s32 count;
};
static __inline ScalarAnimationChannel *modelPropertyScalarChannel(LegacyModelPropertyNode *node, u32 channel)
{
    if (node->count == 0) {
        return NULL;
    }
    return (ScalarAnimationChannel *)node->table->targets[node->index * node->table->stride + channel];
}
typedef char LegacyModelPropertyNodeSizeCheck[sizeof(LegacyModelPropertyNode) == 0x150 ? 1 : -1];
typedef char LegacyModelPropertyControllerSizeCheck[sizeof(LegacyModelPropertyController) == 0x5C ? 1 : -1];

#endif
