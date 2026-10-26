/* NON_MATCHING: debug traces (lines 93/98), result local and frame now match retail; the loop counter/count-load registers differ (retail 69 vs built 70 rows). */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

void rt_memcpy(void *dst, const void *src, s32 size);
void asdMemFree(void *block);

extern const char DAT_0053d054[]; /* the source file path (__FILE__) */
extern TexTable g_texTable;

/* Loads the texture list file: keeps its header and builds one empty table entry per name. */
u32 asdTMTexTableLoadList(const char *path)
{
    u32 result = 0;
    u32 size;
    u8 *file = (u8 *)asdLoadFileWithSize(path, &size, 0);
    u32 *src;
    s32 i;

    if (file == NULL) {
        return result;
    }
    asdDebugTrace(DAT_0053d054, 93);
    g_texTable.header = (TexTableHeader *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x104, 1);
    rt_memcpy(g_texTable.header, file, 0x104);
    asdDebugTrace(DAT_0053d054, 98);
    g_texTable.entries = (TexTableEntry *)asdMemoryAllocTracked(0x100, 0x100, 0, g_texTable.header->count * 0x18, 1);
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
    return result;
}

} /* extern "C" */
