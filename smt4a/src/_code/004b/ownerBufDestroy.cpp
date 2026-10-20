#include "shard/Shard004B.h"

extern "C" {

typedef struct OwnerBuf {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 buf1;
    /* 0x08 */ u32 buf2;
} OwnerBuf;

extern void asdMemFree(u32 ptr);
extern void asdCecShutdown(void);
extern void asdOperatorDelete(OwnerBuf *obj);

void ownerBufDestroy(OwnerBuf *obj, const void *vtbl)
{
    obj->vtbl = vtbl;
    asdMemFree(obj->buf1);
    asdMemFree(obj->buf2);
    asdCecShutdown();
    asdOperatorDelete(obj);
}

} /* extern "C" */
