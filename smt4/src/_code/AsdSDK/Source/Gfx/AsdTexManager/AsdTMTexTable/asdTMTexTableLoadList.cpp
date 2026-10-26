/* NON_MATCHING: stripped debug traces (lines 93, 98), the 4-byte size slot and the register-resident zero match retail; retail returns that zero through a predicated mov r0,r5 on the null path and indexes the entries with r0/r2 swapped, with a writeback entry pointer. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "bible/bibleAnalyze.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *fileLoadSync(u32 handle, u32 *size, u32 flags);
void rt_memcpy(void *dst, const void *src, s32 size);
void asdMemFree(void *block);

extern TexTable g_texTable;
extern const char DAT_00409270[];

/* Loads the texture list file: keeps its header and builds one empty table entry per name. */
u32 asdTMTexTableLoadList(u32 handle)
{
    u32 size;
    u32 result = 0;
    u8 *file = (u8 *)fileLoadSync(handle, &size, result);
    u32 *src;
    s32 i;

    if (file != NULL) {
        asdDebugTrace(DAT_00409270, 93);
        g_texTable.header = (TexTableHeader *)asdMemAlloc(0x100, 0x100, 0, 0x104, 1);
        rt_memcpy(g_texTable.header, file, 0x104);
        asdDebugTrace(DAT_00409270, 98);
        g_texTable.entries = (TexTableEntry *)asdMemAlloc(0x100, 0x100, 0, g_texTable.header->count * 0x18, 1);
        src = (u32 *)(file + 0x104);
        for (i = 0; i < g_texTable.header->count; i++) {
            TexTableEntry *entry = &g_texTable.entries[i];
            u32 *name = (u32 *)entry->name;

            entry->file = NULL;
            entry->sprites = NULL;
            name[0] = src[0];
            name[1] = src[1];
            name[2] = src[2];
            name[3] = src[3];
            src += 0x18;
        }
        asdMemFree(file);
    }
    return result;
}

} /* extern "C" */
