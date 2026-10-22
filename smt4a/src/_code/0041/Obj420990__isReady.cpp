#include "classes/Obj420990.h"
extern "C" s32 resourceIsReady(Obj420990Resource *resource);

/* Switch each loaded resource to mode 2; report whether both are ready. */
u32 Obj420990::isReady()
{
    u32 allReady = 1;
    for (s32 i = 0; i < 2; ++i) {
        Obj420990Resource *resource = (Obj420990Resource *)handles[i].handle;
        if (resourceIsReady(resource) == 0) {
            allReady = 0;
        } else {
            ((Obj420990Resource *)handles[i].handle)->state->unk3c = 1;
            ((Obj420990Resource *)handles[i].handle)->state->unk40 = 1;
            ((Obj420990Resource *)handles[i].handle)->state->mode = 2;
        }
    }
    return allReady;
}
