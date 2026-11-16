#include "common.h"

extern "C" {

extern int threadTryJoinAndClose(void *block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 block[1];
} Obj;

u8 block88OwnerCheck(Obj *obj)
{
    return threadTryJoinAndClose(obj->block) != 0;
}

} /* extern "C" */
