#include "shard/Shard0034.h"

extern "C" {

extern void FUN_004b9588(void *data);

u32 childOwnerUpdateKind123(ChildOwner4 *owner)
{
    ChildNode *child = owner->child;
    u8 kind = child->kind;
    void *data;

    if (kind == 1 || kind == 2 || kind == 3) {
        data = NULL;
        if (child != NULL) {
            data = child->data;
        }
        if (child != NULL && data != NULL) {
            FUN_004b9588(data);
        }
    }
    return 0;
}

} /* extern "C" */
