#include "common.h"

extern "C" {

void onlineJobSetStateDone(void *object);
void onlineJobSetStateTimed(void *object);

typedef struct CountedObject {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 count;
} CountedObject;

/* Runs onlineJobSetStateTimed when `count` is positive and onlineJobSetStateDone when it is not. */
void FUN_00105308(CountedObject *object)
{
    if (object->count > 0) {
        onlineJobSetStateTimed(object);
        return;
    }
    onlineJobSetStateDone(object);
}

} /* extern "C" */
