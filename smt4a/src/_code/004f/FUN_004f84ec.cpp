/* NON_MATCHING: only the order of `mov r1, #47` against `mov r0, r5` before the FUN_00100d60 call differs (retail sets the path pointer first). */
#include "common.h"

extern "C" {

/* An effect file slot: its record id, loaded data, file name and load flags. */
typedef struct EffectFileSlot {
    /* 0x00 */ u8 record;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *data;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
} EffectFileSlot;

typedef struct EffectOwner {
    /* 0x0000 */ u8 unk0000[0x3054];
    /* 0x3054 */ EffectFileSlot effect;
} EffectOwner;

/* The string block at DAT_00528400: the effect's name, then the effect path format. */
typedef struct EffectStrings {
    /* 0x00 */ char niyariName[0xc0];  /* "ef_d_niyari" */
    /* 0xC0 */ char pathFormat[1];     /* "battle/effect/%s.eft" */
} EffectStrings;

extern const EffectStrings DAT_00528400;

void sysMemClear(void *dest, u32 size);
void asdMemFree(void *block);
s32 textFormatBuffer(char *output, const char *format, ...);
char *libc_strcpy(char *dest, const char *src);
char *FUN_00100d60(const char *string, s32 c);
s32 findRecordByKey(const char *name);
void asdLoadFileAsyncSimple(const char *path, void **data, s32 a);

/* Resets the owner's effect slot to "ef_d_niyari" and starts loading its file unless a record already provides it. */
u32 FUN_004f84ec(EffectOwner *owner)
{
    EffectFileSlot *slot = &owner->effect;
    char path[0x80];
    char formatted[0x80];

    slot->record = 0xff;
    sysMemClear(slot->name, sizeof(slot->name));
    if (slot->data != NULL) {
        asdMemFree(slot->data);
        slot->data = NULL;
    }
    slot->flags = 0;
    sysMemClear(path, sizeof(path));
    const EffectStrings *strings = &DAT_00528400;
    sysMemClear(formatted, sizeof(formatted));
    textFormatBuffer(formatted, strings->pathFormat, strings->niyariName);
    libc_strcpy(path, formatted);
    char *fullPath = path;
    libc_strcpy(slot->name, FUN_00100d60(fullPath, '/') + 1);
    if (findRecordByKey(slot->name) == 0xff) {
        asdLoadFileAsyncSimple(fullPath, &slot->data, 1);
        slot->flags |= 1;
    }
    return 1;
}

} /* extern "C" */
