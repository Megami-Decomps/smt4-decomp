#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* "c:\SMT4F\SMT4F\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */

void *memAlloc(int heap, int alignClass, int unk08, int size, int align, int fromFront);
void asdMemFree(void *block);
void *rt_memcpy(void *dst, const void *src, u32 size);

/* A heap copy of some data, as held by an effect part. */
typedef struct PartData {
    u8 unk00[0xc];
    u16 id;       /* 0x0c */
    u8 unk0e[2];
    void *data;   /* 0x10 */
    s32 size;     /* 0x14 */
    void *block;  /* 0x18: owned heap block */
} PartData;

/* Replaces the part's data with a copy of `size` bytes from `src`; an empty source leaves it cleared. */
void effPartSetData(PartData *part, const void *src, s32 size, u16 id)
{
    if (part->block != NULL) {
        asdMemFree(part->block);
        part->data = NULL;
        part->size = 0;
        part->block = NULL;
    }
    if (src != NULL && size > 0) {
        void *block;

        asdDebugTrace(g_effPartsSourcePath, 1060);
        block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        part->id = id;
        part->block = block;
        part->data = block;
        part->size = size;
        rt_memcpy(block, src, size);
    }
}

} /* extern "C" */
