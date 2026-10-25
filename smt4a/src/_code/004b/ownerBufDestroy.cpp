/* NON_MATCHING: explicit vtable store loads its address after the push instead of into r1 before it. */
#include "shard/Shard004B.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

typedef struct OwnerBuf {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u32 buf1;
    /* 0x08 */ u32 buf2;
} OwnerBuf;

extern void asdMemFree(u32 ptr);
extern void asdCecShutdown(void);
extern const u32 DAT_00557ec8[];

void ownerBufDestroy(OwnerBuf *obj)
{
    obj->vtbl = DAT_00557ec8;
    asdMemFree(obj->buf1);
    asdMemFree(obj->buf2);
    asdCecShutdown();
    asdOperatorDelete(obj);
}

} /* extern "C" */
