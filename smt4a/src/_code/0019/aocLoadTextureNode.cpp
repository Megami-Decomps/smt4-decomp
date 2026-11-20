#include "common.h"

extern "C" {

void aocTextureNodeLoad(u8 *buffer, s32 entry, s32 data);
void asdTextureEntryApply(s32 entry);
void optionalWorkGetValue(void);
void asdTextureSelectHeap(s32 entry, u32 arg);
void sysMemClear(u8 *block, s32 size);
s32 asdTMTexTableGetNode(u32 a, u32 b);
s32 packageFindFileByTypeAndId(u32 a, s32 b, u32 c, u8 *buffer);
s32 packageKindToRecordKind(u32 a);

/* Builds and registers an entry: looks up the id for `b`, fills a 128-byte scratch buffer from it, creates the entry for (b, c), initialises it and returns it; returns 0 when any step fails. */
s32 aocLoadTextureNode(u32 a, u32 b, u32 c, u32 d)
{
    s32 id;
    s32 entry;
    u8 buffer[128];

    id = packageKindToRecordKind(b);
    if (id != -1) {
        sysMemClear(buffer, 0x80);
        id = packageFindFileByTypeAndId(a, id, c, buffer);
        if ((id != 0) && (entry = asdTMTexTableGetNode(b, c), entry != 0)) {
            optionalWorkGetValue();
            aocTextureNodeLoad(buffer, entry, id);
            asdTextureSelectHeap(entry, d);
            asdTextureEntryApply(entry);
            return entry;
        }
    }
    return 0;
}

} /* extern "C" */
