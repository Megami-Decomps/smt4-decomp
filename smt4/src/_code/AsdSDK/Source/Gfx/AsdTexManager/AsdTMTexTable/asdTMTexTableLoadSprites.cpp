/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 155 vs built 148 rows, 194 diff lines. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

void *fileLoadSync(char *path, u8 *size, u32 flags);
TexFile *asdTMTexTableLoadTmx(s32 idx, u32 flags);
char *FUN_0010024c(char *str, u32 ch);
void libc_strcpy(char *dst, const char *src);
void textFormatBuffer(char *dst, const char *format, ...);
void __aeabi_memcpy4(void *dst, const void *src, s32 size);
void asdMemFree(void *block);

extern char LAB_002c4e74[];
extern char LAB_002c4e78[];
extern char LAB_002c4e84[];
extern TexTable g_texTable;

/* Loads the sprite file of table entry `idx` (after making sure its TMX file is loaded) and builds
 * the entry's sprite list: a chain of sprites with their frame records copied out of the file. */
s32 asdTMTexTableLoadSprites(s32 idx)
{
    TexTableEntry *entry;
    TexTableHeader *header;
    char dir[0x80];
    char path[0x100];
    u8 size[8];

    asdTMTexTableLoadTmx(idx, 0);
    header = (TexTableHeader *)g_texTable.header;
    if (idx != 0 && (entry = &g_texTable.entries[idx], entry->sprites == NULL)) {
        char *p;
        u32 *file;

        libc_strcpy(dir, header->dirPrefix);
        for (p = dir; *p != '\0'; p++) {
            char *slash = FUN_0010024c(p, 0x5c);
            if (slash != NULL) {
                *slash = '/';
            }
        }
        libc_strcpy(header->dirPrefix, dir);
        textFormatBuffer(path, LAB_002c4e84, header->dirPrefix, entry->name, LAB_002c4e78, LAB_002c4e74);
        file = (u32 *)fileLoadSync(path, size, 0);
        if (file != NULL) {
            TexSprList *list = (TexSprList *)asdMemAlloc(0x100, 0x100, 0, 8, 1);
            u32 *copy;
            u8 *src = (u8 *)(file + 0x10);
            TexSprite *prev = NULL;
            s32 i;

            entry->sprites = list;
            copy = (u32 *)asdMemAlloc(0x100, 0x100, 0, 0x40, 1);
            list->header = (SprFileHeader *)copy;
            copy[0] = file[0];
            copy[1] = file[1];
            copy[2] = file[2];
            copy[3] = file[3];
            copy[4] = file[4];
            copy[5] = file[5];
            copy[6] = file[6];
            copy[7] = file[7];
            copy[8] = file[8];
            copy[9] = file[9];
            copy[10] = file[10];
            copy[11] = file[11];
            copy[12] = file[12];
            copy[13] = file[13];
            copy[14] = file[14];
            copy[15] = file[15];
            for (i = 0; i < list->header->spriteCount; i++) {
                TexSprite *sprite = (TexSprite *)asdMemAlloc(0x100, 0x100, 0, 0x14, 1);

                sprite->id = src[0];
                sprite->frameCount = src[4];
                sprite->flag = src[8];
                if (sprite->frameCount == 0) {
                    sprite->frames = NULL;
                } else {
                    sprite->frames = (u8 *)asdMemAlloc(0x100, 0x100, 0, sprite->frameCount * 0x14, 1);
                }
                if (sprite->frameCount > 0) {
                    __aeabi_memcpy4(sprite->frames, src + 0xc, sprite->frameCount * 0x14);
                }
                if (prev == NULL) {
                    list->first = sprite;
                } else {
                    prev->next = sprite;
                }
                src += sprite->frameCount * 0x14 + 0xc;
                prev = sprite;
            }
            asdMemFree(file);
        }
    }
    return idx;
}

} /* extern "C" */
