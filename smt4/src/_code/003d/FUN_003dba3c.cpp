/* NON_MATCHING: retail hoists the name address above the second memClear and keeps sp+0x80 and the path address in fp/r6 (as in smt4a FUN_004f84ec); built recomputes them */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {

/* An effect file slot: its record id, loaded data, file name and load flags. */
typedef struct EffectFileSlot {
    /* 0x00 */ u8 record;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *data;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 unk89[3];
} EffectFileSlot;

typedef struct FlashEffects {
    /* 0x0000 */ u8 unk0000[0x2bc4];
    /* 0x2BC4 */ EffectFileSlot slots[2];
} FlashEffects;

extern const char DAT_004007c4[][0x20]; /* effect names, "G_flash" first */
extern const char DAT_004008c4[];       /* "battle/effect/%s.eft" */

void memClear(void *dest, u32 size);
void asdMemFree(void *block);
s32 textFormatBuffer(char *output, const char *format, ...);
char *libc_strcpy(char *dest, const char *src);
char *FUN_002522e0(const char *string, s32 c);
s32 keyedRecordFindByName(const char *name);

/* Resets both flash effect slots and starts loading each effect file that no record provides yet. */
u32 FUN_003dba3c(FlashEffects *effects)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        EffectFileSlot *slot = &effects->slots[i];
        char path[0x80];
        char formatted[0x80];

        slot->record = 0xff;
        memClear(slot->name, sizeof(slot->name));
        if (slot->data != NULL) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->flags = 0;
        memClear(path, sizeof(path));
        memClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_004008c4, DAT_004007c4[i]);
        libc_strcpy(path, formatted);
        libc_strcpy(slot->name, FUN_002522e0(path, '/') + 1);
        if (keyedRecordFindByName(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&slot->data), 0);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
