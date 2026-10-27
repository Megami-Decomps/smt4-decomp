/* NON_MATCHING: pointer locals (formatted source, full path) now reproduce retail's fp/260-byte frame; remaining: owner/temporary register numbering (r6/r7), the hoisting order of the table base and &formatted, and `mov r1,#47` scheduled before `mov r0,r6`. */
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {

/* One preloaded battle effect. */
typedef struct BattleEffectSlot {
    /* 0x00 */ u8 index;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *data;
    /* 0x08 */ char name[0x80];
    /* 0x88 */ u8 flags;
    /* 0x89 */ u8 unk89[3];
} BattleEffectSlot;

typedef struct BattleEffectOwner {
    /* 0x0000 */ u8 unk0000[0x2CDC];
    /* 0x2CDC */ BattleEffectSlot slots[5];
} BattleEffectOwner;

extern const char DAT_00400804[5][0x20];
extern const char DAT_004008c4[];
void memClear(void *dest, u32 size);
void asdMemFree(void *ptr);
s32 textFormatBuffer(char *output, const char *format, ...);
char *libc_strcpy(char *dest, const char *src);
char *FUN_002522e0(const char *text, s32 character);
s32 keyedRecordFindByName(const char *name);

/* Resets the five battle effect slots and starts loading each effect file not already registered. */
u32 FUN_003dadd8(BattleEffectOwner *owner)
{
    char path[128];
    char formatted[128];
    char *formattedPath = formatted;

    for (s32 i = 0; i < 5; i++) {
        BattleEffectSlot *slot = &owner->slots[i];
        slot->index = 0xff;
        memClear(slot->name, sizeof(slot->name));
        if (slot->data != NULL) {
            asdMemFree(slot->data);
            slot->data = NULL;
        }
        slot->flags = 0;
        memClear(path, 128);
        const char *effectName = DAT_00400804[i];
        memClear(formatted, 128);
        textFormatBuffer(formatted, DAT_004008c4, effectName);
        libc_strcpy(path, formattedPath);
        char *fullPath = path;
        libc_strcpy(slot->name, FUN_002522e0(fullPath, '/') + 1);
        if (keyedRecordFindByName(slot->name) == 0xff) {
            asdLoadFileAsyncSimple(fullPath, reinterpret_cast<u32 *>(&slot->data), 0);
            slot->flags |= 1;
        }
    }
    return 1;
}

} /* extern "C" */
