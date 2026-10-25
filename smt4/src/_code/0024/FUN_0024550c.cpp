/* NON_MATCHING: retail computes the state pointer before the frame setup, keeps a zero in r8 and loads g_btlEffect inside each state branch; armcc here hoists the global load above the state tests and tail-merges the return-1 paths. */
#include "battle/BtlEffectLoad.h"

extern "C" {

extern const char DAT_00400804[];
extern const char DAT_004008c4[];

s32 libc_strcmp(const char *a, const char *b);
char *libc_strcpy(char *destination, const char *source);
void memClear(void *buffer, s32 size);
void textFormatBuffer(char *buffer, const char *format, ...);
char *FUN_002522e0(char *text, s32 character);
s32 keyedRecordFindByName(const char *key);
u32 keyedRecordRegisterName(const char *key);
u32 FUN_00249e54(u32 handle, const void *file);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);
void asdMemFree(void);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 FUN_00246708(void);
void FUN_0024679c(void);
}

/* The battle effect work past the unit loaders: five move-out effect files and their load state. */
struct MoveOutEffectWork {
    /* 0x0000 */ u8 unk0000[0x2CDC];
    /* 0x2CDC */ BtlEffectSlot slots[5];
    /* 0x2F98 */ s32 state;
};

struct BtlEffectHeap {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ MoveOutEffectWork *work;
};
extern "C" { extern BtlEffectHeap g_btlEffect; }

extern "C" {

/* Loads the move-out effect files (state 0), waits for them (1), registers the version-tagged ones
 * and waits for the effect system (2); returns 1 once everything is loaded. */
u32 FUN_0024550c(MoveOutEffectWork *loader)
{
    s32 i;

    MoveOutEffectWork *effects;
    if (loader->state != 0) {
        if (loader->state != 1) {
            if (loader->state != 2)
                return 1;
            if (FUN_00246708() != 0) {
                loader->state = 3;
                return 1;
            }
            return 0;
        }
    } else {
        effects = g_btlEffect.work;
        for (i = 0; i < 5; i++) {
            BtlEffectSlot *slot = &effects->slots[i];
            char path[128];
            char formatted[128];
            slot->handle = 0xFF;
            memClear(slot->name, sizeof(slot->name));
            if (slot->file != NULL) {
                asdMemFree();
                slot->file = NULL;
            }
            slot->flags = 0;
            memClear(path, sizeof(path));
            memClear(formatted, sizeof(formatted));
            textFormatBuffer(formatted, DAT_004008c4, DAT_00400804 + i * 0x20);
            libc_strcpy(path, formatted);
            libc_strcpy(slot->name, FUN_002522e0(path, '/') + 1);
            if (keyedRecordFindByName(slot->name) == 0xFF) {
                asdLoadFileAsyncSimple(path, &slot->file, 0);
                slot->flags |= 1;
            }
        }
        loader->state = 1;
    }
    effects = g_btlEffect.work;
    for (i = 0; i < 5; i++) {
        BtlEffectSlot slot = effects->slots[i];
        if ((slot.flags & 1) && slot.file == NULL)
            return 0;
    }
    for (i = 0; i < 5; i++) {
        BtlEffectSlot *slot = &effects->slots[i];
        const char *file = (const char *)slot->file;
        if (file[0] == 'V' && file[1] == 'E' && file[2] == 'R') {
            slot->handle = keyedRecordRegisterName(slot->name);
            slot->handle = FUN_00249e54(slot->handle, file);
        }
    }
    FUN_0024679c();
    loader->state = 2;
    if (FUN_00246708() != 0) {
        loader->state = 3;
        return 1;
    }
    return 0;
}
}
