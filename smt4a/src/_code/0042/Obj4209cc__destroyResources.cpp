/* NON_MATCHING: retail keeps this in r6 and the part slot pointer in r7, and does not predicate the ptrListRemoveClearOwner call (cmp r0, #0; beq; mov r1, r0; ldr r0, [r7]; bl) where this build emits movs r1, r0; ldrne; blne with different registers for this/part/slot */
#include "classes/Obj4209cc.h"

extern "C" {
extern void *g_handleRegistry;
void objectVectorClear(ModelResourceItems *items);
s32 ptrListRemoveClearOwner(void *registry, ModelResourceItem *item);
}

/* Destroys a part, hands its memory back to the allocator it came from and clears its slot. */
static void releasePart(Obj4209ccPart **slot)
{
    Obj4209ccPart *part = *slot;
    if (part != NULL) {
        part->~Obj4209ccPart();
        part->allocator->release(part);
        *slot = NULL;
    }
}

/* Destroys and releases each part (two rows of three), then removes every model of the list from
 * the handle registry, clears the list and deletes it. */
void Obj4209cc::destroyResources()
{
    unk04 = 0;
    for (s32 i = 0; i < 3; ++i) {
        releasePart(&rowA[i]);
        releasePart(&rowB[i]);
        rowA[i] = NULL;
    }
    s32 count = models()->items->count;
    for (s32 i = 0; i < count; ++i) {
        ModelResourceItem *item = reinterpret_cast<ModelResourceItem *>(FUN_0040619c(models()->items, i));
        if (item != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, item);
        }
    }
    objectVectorClear(models()->items);
    if (models() != NULL) {
        delete models();
        handle = 0;
    }
}
