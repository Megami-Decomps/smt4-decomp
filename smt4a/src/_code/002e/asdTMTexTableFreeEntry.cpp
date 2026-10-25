#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "util/CalleeContracts.h"

extern "C" {

void asdMemFree(void *block);

extern TexTable g_texTable;

/* Frees table entry `idx`: its sprite list (sprites, frame records, header), then its TMX file
 * (nodes and image) and the file object, and clears the entry. */
void asdTMTexTableFreeEntry(s32 idx)
{
    TexTableEntry *entry = &g_texTable.entries[idx];
    TexFile *file;

    if (entry->sprites != NULL) {
        TexSprite *sprite = entry->sprites->first;

        while (sprite != NULL) {
            TexSprite *next = sprite->next;

            asdMemFree(sprite->frames);
            asdMemFree(sprite);
            sprite = next;
        }
        asdMemFree(entry->sprites->header);
        asdMemFree(entry->sprites);
        entry->sprites = NULL;
    }
    file = entry->file;
    if (file->nodes != NULL) {
        asdMemFree(file->nodes);
        file->nodes = NULL;
    }
    if (file->image2 != NULL) {
        asdMemFree(file->image2);
        file->image2 = NULL;
    }
    asdMemFree(file);
    entry->file = NULL;
}

} /* extern "C" */
