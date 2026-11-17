/* AsdSDK/Source/Gfx/Model/AsdModel.c: loaded model tables.
 *
 * The model manager keeps its loaded models in banks; a model is looked up by bank and index. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMODEL_H

#include "common.h"
#include <stddef.h>
#include "shard/S3SoundArchiveLoader.h"
#include "gfx/PositionTransform.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

#define ASDMODEL_BANK_SIZE 8

/* A loaded model. */
typedef struct AsdModelEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} AsdModelEntry;

struct AsdModelNameEntry {
    u32 unk00;
    char name[0x40]; // 0x04
    u8 unk44[8];
};

/* One bank (0x284 bytes): bank state, then its loaded models indexed by model id. */
typedef struct AsdModelBank {
    union {
        /* 0x000 */ u8 unk000[0x264];
        struct {
            AsdModelNameEntry entries[ASDMODEL_BANK_SIZE]; // 0x000
            u32 unk260;
        } names;
    };
    /* 0x264 */ AsdModelEntry *model[ASDMODEL_BANK_SIZE];
} AsdModelBank;

typedef char AsdModelBankNameLayoutCheck[sizeof(AsdModelNameEntry) == 0x4c &&
    offsetof(AsdModelNameEntry, name) == 4 &&
    offsetof(AsdModelBank, names.entries) == 0 && sizeof(AsdModelBank) == 0x284 ? 1 : -1];

/* A short table of up to 4 ids, preceded by its length (0x14 bytes). */
typedef struct AsdModelIdList {
    /* 0x00 */ s16 count;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ u32 id[4];
} AsdModelIdList;

extern "C" {
u32 gameGetOptionProgressStatus();
}

extern "C" {
s32 fontMeasureLineAdvance(const void *text, s32 fontIndex);
}

extern "C" {
u8 slotIsActive(u32 index);
}

extern "C" {
void FUN_00191ea8(u32 id, u32 variant, u32 a, u32 b, u32 value);
}

extern "C" {
u32 asdModelGetSlotArray0(s32 slot);
}

extern "C" {
u32 FUN_0014143c(u32 slot, u32 arg);
}

extern "C" {
u32 *FUN_001af0d0(u32 *command, s32 alt);
}

extern "C" {
void scrSetStringSlot(u32 index, const char *value);
}

extern "C" {
s32 aocLoadTextureNode(u32 a, u32 b, u32 c, u32 d);
}

extern "C" {
void FUN_0014de4c(int *arg0, int *arg1, int arg2);
}

#ifdef __cplusplus
extern "C" {
#endif

s32 soundArchiveLoaderIsItemLoaded(SoundArchiveLoader *loader, u32 item, u32 flags);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void dataSubmitSelectedPresetBlock(s32 mode);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00145e10(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002c5be8(u32 arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00364e28(u32 target, PositionProvider *provider);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void asdLightActivate(s32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void memCopy(const void *src, void *dst, int size);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void settings5BClearFlags(u32 mask);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

AsdAllocator *asdMemoryGetAllocatorA(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int bitArrayCountSet1to500(const u8 *bits);

#ifdef __cplusplus
}
#endif

#endif
