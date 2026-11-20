#include "common.h"

extern "C" {

struct NamedEntryTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
};

struct NamedEntry {
    /* 0x000 */ u8 unk000[0x12c];
    /* 0x12c */ s32 id;
    /* 0x130 */ u8 unk130[4];
    /* 0x134 */ u32 value;
    /* 0x138 */ char name[0x178 - 0x138];
};

extern NamedEntryTable g_entryTableInfo;
extern NamedEntry g_namedEntryTable[];

char *libc_strcpy(char *dst, const char *src);

/* Sets the value and name of the entry with the given id. */
void namedEntryTableSetById(s32 id, u32 value, const char *name)
{
    s32 i;

    for (i = 0; i < g_entryTableInfo.count; i++) {
        if (g_namedEntryTable[i].id == id) {
            g_namedEntryTable[i].value = value;
            libc_strcpy(g_namedEntryTable[i].name, name);
            return;
        }
    }
}

} /* extern "C" */
