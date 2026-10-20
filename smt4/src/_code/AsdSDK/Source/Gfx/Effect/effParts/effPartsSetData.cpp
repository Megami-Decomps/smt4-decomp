#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* effParts.cpp: __FILE__ */

/* A copy of a block of data owned by an effect part. */
typedef struct EffPartsData {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u16 type;
    /* 0x0E */ u8 unk0e[2];
    /* 0x10 */ void *data;
    /* 0x14 */ int size;
    /* 0x18 */ void *block;               /* the allocation holding the copy */
} EffPartsData;

void *memAlloc(int, int, int, int size, int align, int);
void asdMemFree(void *block);
void *rt_memcpy(void *dst, const void *src, int size);

/* Replaces the part's data with a copy of `size` bytes from `src`. */
void effPartsSetData(EffPartsData *part, const void *src, int size, u16 type)
{
    void *copy;

    if (part->block != NULL) {
        asdMemFree(part->block);
        part->data = NULL;
        part->size = 0;
        part->block = NULL;
    }
    if (src != NULL && size > 0) {
        asdDebugTrace(g_effPartsSourcePath, 1080);
        copy = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        part->type = type;
        part->block = copy;
        part->data = copy;
        part->size = size;
        rt_memcpy(copy, src, size);
    }
}

} /* extern "C" */
