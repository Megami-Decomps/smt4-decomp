/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int asdCecShutdown(void);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 bufferA;
    /* 0x8 */ u32 bufferB;
} Obj;

extern unsigned int DAT_00420a24[];
void FUN_003bbf08(Obj *obj)
{
    obj->unk0 = (unsigned int)DAT_00420a24;
    asdMemFree(obj->bufferA);
    asdMemFree(obj->bufferB);
    asdCecShutdown();
    asdMemFreeNonNull(obj);
}

} /* extern "C" */
