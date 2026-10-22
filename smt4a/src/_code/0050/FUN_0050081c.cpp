/* NON_MATCHING: same instructions; callee-saved registers are permuted (zero/result/source/index/count/key in r9/r7/r5/r4/r6/r8 vs retail r8/r6/r4/r5/r7/r9) */
#include "common.h"

extern "C" {

typedef struct MetaPair {
    const char *key;    /* 0x00 */
    const char *value;  /* 0x04 */
} MetaPair;

typedef struct MetaSource {
    u8 unk00[0x10];
    u32 *id;            /* 0x10 */
    u32 valid;          /* 0x14 */
    MetaPair *pairs;    /* 0x18 */
    u32 pairCount;      /* 0x1C */
} MetaSource;

typedef struct ItemCodeInfo {
    u32 id;             /* 0x00 */
    char code[32];      /* 0x04 */
} ItemCodeInfo;

s32 libc_strncmp(const char *a, const char *b, u32 length);
char *strncpy(char *dst, const char *src, u32 length);

/* Returns the value of the source's metadata key, or NULL. */
static __inline const char *metaSourceFind(const MetaSource *source, const char *key)
{
    u32 count = source->pairCount;
    u32 i;

    for (i = 0; i < count; i++) {
        if (libc_strncmp(source->pairs[i].key, key, 64) == 0) {
            return source->pairs[i].value;
        }
    }
    return NULL;
}

/* Reads the item id and its "sys.ItemCode" metadata value from the source (all zero when it is invalid). */
ItemCodeInfo FUN_0050081c(MetaSource **sourceRef)
{
    MetaSource *source = *sourceRef;
    ItemCodeInfo info = {0};

    if (source->valid) {
        info.id = *source->id;
        strncpy(info.code, metaSourceFind(source, "sys.ItemCode"), sizeof(info.code));
        info.code[sizeof(info.code) - 1] = '\0';
    }
    return info;
}

} /* extern "C" */
