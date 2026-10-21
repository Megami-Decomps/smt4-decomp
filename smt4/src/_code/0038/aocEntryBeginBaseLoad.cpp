#include "common.h"

extern "C" {

typedef struct AocEntry {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ char dir[0x14];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44;
    /* 0x45 */ u8 unk45;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ u8 unk48[1];
} AocEntry;

extern int textFormatBuffer(char *out, const char *format, const char *dir, const char *name);
extern int memClear(void *buffer, int size);
extern int FUN_0038a154(u32 context, char *path, void *arg0, int arg1, int size, void *arg2);

extern u32 g_aocDisplay; /* 0x433130 */

/* Builds "<dir>/aoc_base.bin" for the entry, clears its state and hands the path to the display queue. */
void aocEntryBeginBaseLoad(AocEntry *entry)
{
    char path[128];

    memClear(path, 0x80);
    entry->unk38 = 0;
    entry->unk3c = 0;
    entry->unk40 = 0;
    entry->unk44 = 0;
    entry->unk45 = 0;
    textFormatBuffer(path, "%s/%s", entry->dir, "aoc_base.bin");
    FUN_0038a154(g_aocDisplay, path, entry->unk48, 1, 0x80, &entry->unk38);
}

}
