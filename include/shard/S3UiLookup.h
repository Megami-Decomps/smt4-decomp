/* A UI object bound to an owner whose context lists, per slot, the names of entries to look up in
 * a dictionary; the UI object records what it finds. */
#ifndef SHARD_S3UILOOKUP_H
#define SHARD_S3UILOOKUP_H

#include "common.h"

#define UILOOKUP_NOT_FOUND 0xFFFF
#define UILOOKUP_ENTRY_STRIDE 0x278   /* per slot state of the UI object */

/* One list of names (0xC bytes). */
typedef struct UiNameList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 **names;          /* wide strings */
    /* 0x08 */ u32 count;
} UiNameList;

typedef struct UiNameSlots {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ UiNameList *lists;
    /* 0x10 */ u32 count;
} UiNameSlots;

/* A found entry. */
typedef struct UiFoundEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 flags;             /* bit 3: handled by FUN_004064a8; value 2: records its value */
    /* 0x29 */ u8 unk29[7];
    /* 0x30 */ u32 value;            /* big endian */
} UiFoundEntry;

/* The entries table and the dictionary that finds their keys. */
typedef struct UiLookupTable {
    /* 0x00 */ UiFoundEntry **entries;
    /* 0x04 */ u8 dictionary[0x68];
} UiLookupTable;

typedef struct UiContext {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 *handle;          /* first word handed to FUN_004064a8 */
    /* 0x34 */ u8 unk34[8];
    /* 0x3C */ UiLookupTable lookup;
    /* 0xA8 */ UiNameSlots **slots;
} UiContext;

typedef struct UiOwnerBase {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ UiContext *context;
} UiOwnerBase;

typedef struct UiOwner {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ UiOwnerBase base;     /* the owner's embedded base object */
} UiOwner;

/* Per slot state: the first byte holds flags. */
typedef struct UiSlotState {
    /* 0x00 */ u8 flags;             /* bit 0: has a recorded value */
    /* 0x01 */ u8 unk01[UILOOKUP_ENTRY_STRIDE - 1];
} UiSlotState;

typedef struct UiSlotValue {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 set;
    /* 0x05 */ u8 unk05[3];
} UiSlotValue;

typedef struct UiLookupObj {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ UiOwner *owner;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ UiSlotState *slots;
    /* 0x014 */ u8 unk014[0xF4];
    /* 0x108 */ UiSlotValue *values;
} UiLookupObj;

struct UiTextObject;
struct UiTextPlacement {
    /* 0x00 */ f32 opacity;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
};
struct UiTextMetrics {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ const s16 *dimensions;
};
struct UiCenteredText {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ UiTextObject *text;
    /* 0x90 */ s32 width;
};

typedef char UiTextPlacementSizeCheck[sizeof(UiTextPlacement) == 0xC ? 1 : -1];
typedef char UiTextMetricsSizeCheck[sizeof(UiTextMetrics) == 0x10 ? 1 : -1];
typedef char UiCenteredTextSizeCheck[sizeof(UiCenteredText) == 0x94 ? 1 : -1];

#endif
