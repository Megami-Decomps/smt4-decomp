/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 67 vs built 61 rows, 81 diff lines. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "shard/asdMemoryAllocTracked.h"

extern "C" {

void rt_memcpy(void *dst, const void *src, s32 size);
void asdMemFree(void *block);

extern TexTable g_texTable;

/* Loads the texture list file: keeps its header and builds one empty table entry per name. */
u32 asdTMTexTableLoadList(const char *path)
{
    u32 size[2];
    u8 *file = (u8 *)asdLoadFileWithSize(path, size, 0);
    u32 *src;
    s32 i;

    if (file != NULL) {
        g_texTable.header = (TexTableHeader *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x104, 1);
        rt_memcpy(g_texTable.header, file, 0x104);
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
    }
    return 0;
}

} /* extern "C" */
