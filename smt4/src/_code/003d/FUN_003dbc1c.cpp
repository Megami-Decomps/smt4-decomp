/* NON_MATCHING: the string-test chain compiles with different null-check placement and the "VER" prefix test and slot addressing use other registers; the lookup logic is the same. */
#include "common.h"

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
char *libc_strcpy(char *destination, const char *source);
s32 textFormatBuffer(char *buffer, const char *format, ...);
void memClear(void *block, s32 size);
u32 keyedRecordRegisterName(void *record);
u32 FUN_00249e54(u32 id, const char *name);

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
        libc_strcpy(path, formatted);
        if (libc_strlen(path) == 0) {
            continue;
        }
        const char *key = name;
        s32 match = -1;

        if (key != NULL) {
            for (s32 k = 0; k < 11; k++) {
                if (libc_strncmp(key, DAT_00400664[k], libc_strlen(DAT_00400664[k])) == 0) {
                    match = k;
                    break;
                }
            }
        }
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
