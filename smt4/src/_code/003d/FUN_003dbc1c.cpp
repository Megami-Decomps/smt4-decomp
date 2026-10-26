/* NON_MATCHING: reference search is a findReferenceEffect helper (retail keeps the same shape); retail keeps the &formatted pointer in sl across the loop, spills the inlined search's name to its stack slot and keeps the name null tests before each strcmp/strncmp, which the build drops. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

/* One effect slot (0x8C bytes). */
typedef struct EffectSlot {
    /* 0x00 */ u8 id;               /* the resolved effect id */
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ const char *name;    /* the effect's name */
    /* 0x08 */ u8 record[0x84];     /* the record keyedRecordRegisterName fills */
} EffectSlot;

/* The battle effect work block (only the name table pointer and the slot array). */
typedef struct EffectWork {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ const char (*names)[22];   /* four 22-byte names */
    /* 0x1D00 */ EffectSlot slots[27];
} EffectWork;

extern const char *g_btlEffect[];           /* name prefixes and special names the table skips */
extern const char DAT_00400664[11][32];     /* "ef_e_ref..." reference names, one per reference slot */
extern const char DAT_0040090c[];           /* "NOT_EFT" */
extern const char DAT_004008c4[];           /* "battle/effect/%s.eft" */

u32 libc_strlen(const char *s);
s32 libc_strcmp(const char *a, const char *b);
s32 libc_strncmp(const char *a, const char *b, u32 n);
s32 textFormatBuffer(char *buffer, const char *format, ...);
u32 keyedRecordRegisterName(void *record);
u32 FUN_00249e54(u32 id, const char *name);

/* Index of the reference effect whose name starts `name`, or -1. */
static s32 findReferenceEffect(const char *name)
{
    if (name != NULL) {
        for (s32 k = 0; k < 11; k++) {
            if (libc_strncmp(name, DAT_00400664[k], libc_strlen(DAT_00400664[k])) == 0) {
                return k;
            }
        }
    }
    return -1;
}

/* Resolves each of the four effect names to an effect id: names that are empty or special are
 * skipped, names naming a reference slot copy that slot's id, and names starting with "VER"
 * register a record. */
void FUN_003dbc1c(EffectWork *work)
{
    if (work->names == NULL) {
        return;
    }
    for (s32 i = 0; i < 4; i++) {
        const char *name = work->names[i];

        if (libc_strlen(name) == 0) {
            continue;
        }
        if (libc_strcmp(name, "0") == 0) {
            continue;
        }
        if (libc_strcmp(DAT_0040090c, name) == 0) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[0], libc_strlen(g_btlEffect[0])) == 0) {
            continue;
        }
        if (name != NULL && libc_strcmp(name, g_btlEffect[4]) == 0) {
            continue;
        }
        if (name != NULL && libc_strncmp(name, g_btlEffect[3], libc_strlen(g_btlEffect[3])) == 0) {
            continue;
        }
        if (name != NULL && libc_strcmp(name, g_btlEffect[5]) == 0) {
            continue;
        }
        char path[128];
        char formatted[128];

        memClear(path, 0x80);
        memClear(formatted, 0x80);
        textFormatBuffer(formatted, DAT_004008c4, name);
        libc_strcpy(reinterpret_cast<unsigned int *>(path), reinterpret_cast<unsigned int *>(formatted));
        if (libc_strlen(path) == 0) {
            continue;
        }
        s32 match = findReferenceEffect(name);
        if (match >= 0) {
            work->slots[i].id = work->slots[16 + match].id;
            continue;
        }
        EffectSlot *slot = &work->slots[i];
        const char *slotName = slot->name;

        if (slotName[0] == 'V' && slotName[1] == 'E' && slotName[2] == 'R') {
            slot->id = (u8)keyedRecordRegisterName(slot->record);
            slot->id = (u8)FUN_00249e54(slot->id, slotName);
        }
    }
}

}
