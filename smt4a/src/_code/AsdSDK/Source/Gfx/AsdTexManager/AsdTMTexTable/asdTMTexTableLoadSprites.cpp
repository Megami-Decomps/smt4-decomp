/* NON_MATCHING: retail spills the loaded file pointer to [sp,#4] and hoists the constant 12 (stride base) while we keep the file pointer in a saved register; the frame is 24 bytes larger and the stride add is scheduled differently. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemoryAllocTracked(int, int, int, s32 size, int);
void *FUN_0013c174(char *path, u8 *size, u32 flags);
TexFile *asdTMTexTableLoadTmx(s32 idx, u32 flags);
char *FUN_00100238(char *str, u32 ch);
void libc_strcpy(char *dst, const char *src);
void textFormatBuffer(char *dst, const char *format, ...);
void rt_memcpy_w(void *dst, const void *src, s32 size);
void asdMemFree(void *block);

extern TexTable g_texTable;
extern const char DAT_0053d054[];

/* Loads the sprite file of table entry `idx` (after making sure its TMX file is loaded) and builds
 * the entry's sprite list: a chain of sprites with their frame records copied out of the file. */
TexFile *asdTMTexTableLoadSprites(s32 idx)
{
    TexTableEntry *entry;
    TexTableHeader *header;
    char dir[0x80];
    char path[0x100];
    u8 size[8];
    TexFile *texFile = asdTMTexTableLoadTmx(idx, 0);

    if (texFile != NULL && (entry = &g_texTable.entries[idx], entry->sprites == NULL)) {
        char *p;
        u32 *file;

        header = (TexTableHeader *)g_texTable.header;
        libc_strcpy(dir, header->dirPrefix);
        for (p = dir; *p != '\0'; p++) {
            char *slash = FUN_00100238(p, 0x5c);
            if (slash != NULL) {
                *slash = '/';
            }
        }
        libc_strcpy(header->dirPrefix, dir);
        textFormatBuffer(path, "%s%s%s.%s", header->dirPrefix, entry->name, "GroupTable", "tgd");
        file = (u32 *)FUN_0013c174(path, size, 0);
        if (file != NULL) {
            u8 *src = (u8 *)(file + 0x10);
            TexSprite *prev = NULL;
            SprFileHeader *spriteHeader;
            s32 i;

            asdDebugTrace(DAT_0053d054, 295);
            entry->sprites = (TexSprList *)asdMemoryAllocTracked(0x100, 0x100, 0, 8, 1);
            asdDebugTrace(DAT_0053d054, 296);
            entry->sprites->header = (SprFileHeader *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x40, 1);
            *entry->sprites->header = *(SprFileHeader *)file;
            spriteHeader = entry->sprites->header;
            for (i = 0; i < spriteHeader->spriteCount; i++) {
                TexSprite *sprite;

                asdDebugTrace(DAT_0053d054, 221);
                sprite = (TexSprite *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x14, 1);

                sprite->id = src[0];
                sprite->frameCount = src[4];
                sprite->flag = src[8];
                if (sprite->frameCount > 0) {
                    asdDebugTrace(DAT_0053d054, 235);
                    sprite->frames = (u8 *)asdMemoryAllocTracked(0x100, 0x100, 0, sprite->frameCount * 0x14, 1);
                } else {
                    sprite->frames = NULL;
                }
                if (sprite->frameCount > 0) {
                    rt_memcpy_w(sprite->frames, src + 0xc, sprite->frameCount * 0x14);
                }
                if (prev == NULL) {
                    entry->sprites->first = sprite;
                } else {
                    prev->next = sprite;
                }
                src += sprite->frameCount * 0x14 + 0xc;
                prev = sprite;
            }
            asdMemFree(file);
        }
    }
    return texFile;
}

} /* extern "C" */
