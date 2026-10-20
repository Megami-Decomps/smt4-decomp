#include "shard/Shard0033.h"

extern "C" {

extern void asdMemFree(void *ptr);
extern void FUN_002b40ec(void *p);
extern void FUN_002b2f08(void *p);
extern void block6Free(u32 handle);

/* Releases the resources owned by the object, then the object. */
void resource28Free(Resource28 *res)
{
    Handles10 *handles;

    if (res->unk2C != NULL) {
        FUN_002b40ec(res->unk2C);
    }
    if (res->handles != NULL) {
        handles = res->handles;
        block6Free(handles->handleA);
        block6Free(handles->handleB);
        asdMemFree(handles);
    }
    if (res->unk30 != NULL) {
        FUN_002b2f08(res->unk30);
    }
    asdMemFree(res);
}

} /* extern "C" */
