/* NON_MATCHING: 68 lines: the state switch, fall-through and shared return-1 tail now follow retail; retail keeps a zero in r8 from entry, loads g_btlEffect inside each case (this build hoists its address into r7), and keeps the formatted-name and path buffer addresses and the name table entry in saved registers. */
#include "runtime/Stdio.h"
#include "battle/BtlEffectLoad.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include <string.h>
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

extern "C" {

extern const char DAT_00400804[];
extern const char DAT_004008c4[];

char *libc_strcpy(char *destination, const char *source);
void memClear(void *buffer, s32 size);
char *libc_strrchr(char *text, s32 character);
s32 keyedRecordFindByName(const char *key);
u32 FUN_00249e54(u32 handle, const char *file);
void asdMemFree(void);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 textureCacheGetDirection(void);
void textureCachePollReady(void);
}

/* The battle effect work past the unit loaders: five move-out effect files and their load state. */
struct MoveOutEffectWork {
    /* 0x0000 */ u8 unk0000[0x2CDC];
    /* 0x2CDC */ BtlEffectFileSlot slots[5];
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

    switch (loader->state) {
    case 0:
        effects = g_btlEffect.work;
        for (i = 0; i < 5; i++) {
            BtlEffectFileSlot *slot = &effects->slots[i];
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
            __2sprintf(formatted, DAT_004008c4, DAT_00400804 + i * 0x20);
            libc_strcpy(path, formatted);
            libc_strcpy(slot->name, libc_strrchr(path, '/') + 1);
            if (keyedRecordFindByName(slot->name) == 0xFF) {
                asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&slot->file), 0);
                slot->flags |= 1;
            }
        }
        loader->state = 1;
        /* fall through */
    case 1:
        effects = g_btlEffect.work;
        for (i = 0; i < 5; i++) {
            BtlEffectFileSlot slot = effects->slots[i];
            if ((slot.flags & 1) && slot.file == NULL)
                return 0;
        }
        for (i = 0; i < 5; i++) {
            BtlEffectFileSlot *slot = &effects->slots[i];
            const char *file = (const char *)slot->file;
            if (file[0] == 'V' && file[1] == 'E' && file[2] == 'R') {
                u32 handle = keyedRecordRegisterName(slot->name);
                slot->handle = (u8)handle;
                slot->handle = (u8)FUN_00249e54(handle, file);
            }
        }
        textureCachePollReady();
        loader->state = 2;
        /* fall through */
    case 2:
        if (textureCacheGetDirection() != 0) {
            loader->state = 3;
            break;
        }
        return 0;
    }
    return 1;
}
}
