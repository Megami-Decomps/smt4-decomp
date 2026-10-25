/* NON_MATCHING: every call, filter and the record offset match; retail keeps `sp + 128` hoisted in sl with a 260-byte frame (one extra register and word) for the strcpy source, which this build recomputes with a 256-byte frame. */
#include "common.h"

struct BattleNameRecord {
    u8 value;               // 0x00
    u8 unk01[3];
    const char* path;       // 0x04
    u8 key[0x84];           // 0x08
};

extern "C" {
extern const char DAT_00528544[];
extern const char DAT_0052853c[];
extern const char DAT_005284c0[];
extern const char* g_btlEffect[6];
s32 libc_strlen(const char* text);
s32 libc_strcmp(const char* a, const char* b);
s32 libc_strncmp(const char* a, const char* b, u32 count);
char* libc_strcpy(char* dest, const char* src);
void sysMemClear(void* memory, u32 size);
s32 textFormatBuffer(char* dest, const char* format, ...);
u8 keyedRecordRegisterName(void* name);
u8 FUN_003478dc(u8 key, const char* path);

// Whether `name` is the effect name `g_btlEffect[index]`.
static __inline bool nameEquals(const char* name, s32 index)
{
    return name != NULL && libc_strcmp(name, g_btlEffect[index]) == 0;
}

// Whether `name` is the effect name `g_btlEffect[first]` or `g_btlEffect[second]`.
static __inline bool nameEqualsEither(const char* name, s32 first, s32 second)
{
    return name != NULL && (libc_strcmp(name, g_btlEffect[first]) == 0 || libc_strcmp(name, g_btlEffect[second]) == 0);
}

// Whether `name` starts with the effect name `g_btlEffect[index]`.
static __inline bool nameStartsWith(const char* name, s32 index)
{
    return name != NULL && libc_strncmp(name, g_btlEffect[index], libc_strlen(g_btlEffect[index])) == 0;
}

// Registers the battle name slots that carry a custom effect name: skips empty names, the built-in
// ones and the effect prefixes, formats the rest and, for records whose path starts with "VER",
// registers the name.
void FUN_004f9e0c(u8* world)
{
    u8** names = reinterpret_cast<u8**>(world + 0x1f54);
    if (*names == NULL) {
        return;
    }
    for (s32 i = 0; i < 4; ++i) {
        const char* name = reinterpret_cast<const char*>(*names + 0x108 + i * 22);
        if (libc_strlen(name) == 0) {
            continue;
        }
        if (libc_strcmp(name, DAT_00528544) == 0) {
            continue;
        }
        if (libc_strcmp(DAT_0052853c, name) == 0) {
            continue;
        }
        if (nameStartsWith(name, 0)) {
            continue;
        }
        if (nameEqualsEither(name, 1, 2)) {
            continue;
        }
        if (nameEquals(name, 4)) {
            continue;
        }
        if (nameStartsWith(name, 3)) {
            continue;
        }
        if (nameEquals(name, 5)) {
            continue;
        }
        char copy[128];
        char formatted[128];
        sysMemClear(copy, sizeof(copy));
        sysMemClear(formatted, sizeof(formatted));
        textFormatBuffer(formatted, DAT_005284c0, name);
        libc_strcpy(copy, formatted);
        if (libc_strlen(copy) == 0) {
            continue;
        }
        BattleNameRecord* record = reinterpret_cast<BattleNameRecord*>(world + 0x25ec + i * 140);
        const char* path = record->path;
        if (path[0] == 'V' && path[1] == 'E' && path[2] == 'R') {
            record->value = keyedRecordRegisterName(record->key);
            record->value = FUN_003478dc(record->value, path);
        }
    }
}
}
