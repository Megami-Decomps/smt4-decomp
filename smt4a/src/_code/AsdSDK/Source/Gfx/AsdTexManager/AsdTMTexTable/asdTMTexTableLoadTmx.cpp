/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 161 vs built 162 rows, 222 diff lines. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void *FUN_0014e3bc(s32 size, u32 flags);
void *FUN_0013c174(char *path, u8 *size, u32 flags);
char *FUN_00100238(char *str, u32 ch);
void libc_strcpy(char *dst, const char *src);
void FUN_00100388(char *dst, const char *format, ...);

extern char LAB_0013f424[];
extern char LAB_0013f428[];
extern char LAB_0013f43c[];
extern TexTable g_texTable;

/* Loads the TMX file of table entry `idx` if it is not loaded yet: reads it, turns its offsets
 * into pointers and builds the TexFile with one node per set. Returns the entry's TexFile. */
TexFile *asdTMTexTableLoadTmx(s32 idx, u32 flags)
{
    TexTableEntry *entry = &g_texTable.entries[idx];
    TexFile *texFile = entry->file;

    if (texFile == NULL) {
        TexTableHeader *header = g_texTable.header;
        char dir[0x80];
        char path[0x100];
        char *p;
        u8 size[4];
        u8 mode;
        TmxHeader *tmx;

        libc_strcpy(dir, header->dirPrefix);
        for (p = dir; *p != '\0'; p++) {
            char *slash = FUN_00100238(p, 0x5c);
            if (slash != NULL) {
                *slash = '/';
            }
        }
        libc_strcpy(header->dirPrefix, dir);
        FUN_00100388(path, LAB_0013f428, header->dirPrefix, entry->name, LAB_0013f424);
        mode = (flags & 1) != 0;
        if (flags & 2) {
            mode |= 2;
        }
        tmx = (TmxHeader *)FUN_0013c174(path, size, mode);
        if (tmx == NULL) {
            entry->file = NULL;
            texFile = NULL;
        } else {
            s32 texOffset = tmx->texOffset;
            s32 dataOffset = tmx->dataOffset;
            u32 *sets = (u32 *)((u8 *)tmx + tmx->setOffset);
            u8 *groups = (u8 *)tmx + tmx->groupOffset;
            u8 *group = groups;
            TexNode *node;
            u32 *set;
            s32 i;

            for (i = 0; i < tmx->groupCount; i++) {
                if (*(s32 *)(group + 0xc) == -1) {
                    *(u32 *)(group + 0xc) = 0;
                } else {
                    *(s32 *)(group + 0xc) = texOffset + (s32)tmx + *(s32 *)(group + 0xc) * 0x50;
                }
                group += 0x14;
            }
            set = sets;
            for (i = 0; i < tmx->setCount; i++) {
                set[0] = (u32)(groups + set[0] * 0x14);
                set[2] += dataOffset + (s32)tmx;
                set += 4;
            }
            texFile = (TexFile *)FUN_0014e3bc(0x2c, flags);
            if (tmx->setCount < 1) {
                texFile->nodes = NULL;
            } else {
                texFile->nodes = (TexNode *)FUN_0014e3bc(tmx->setCount << 5, flags);
            }
            node = texFile->nodes;
            sets = (u32 *)((u8 *)tmx + tmx->setOffset);
            for (i = 0; i < tmx->setCount; i++) {
                node->set = sets;
                node->file = texFile;
                node++;
                sets += 4;
            }
            texFile->image = (u8 *)tmx;
            texFile->image2 = (u8 *)tmx;
            libc_strcpy(dir, header->dirPrefix2);
            for (p = dir; *p != '\0'; p++) {
                char *slash = FUN_00100238(p, 0x5c);
                if (slash != NULL) {
                    *slash = '/';
                }
            }
            libc_strcpy(header->dirPrefix2, dir);
            FUN_00100388(texFile->path, LAB_0013f43c, header->dirPrefix2, (u8 *)tmx + 4);
            entry->file = texFile;
        }
    }
    return texFile;
}

} /* extern "C" */
