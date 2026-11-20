#include "shard/Shard0034.h"

extern "C" {

extern void mikadoCameraDrawView(void *data);

extern ChildOwner4 g_mikado;

u32 childOwnerUpdateKind123(void)
{
    ChildNode *child = g_mikado.child;
    u8 kind = child->kind;
    void *data;

    if (kind == 1 || kind == 2 || kind == 3) {
        data = NULL;
        if (child != NULL) {
            data = child->data;
        }
        if (child != NULL && data != NULL) {
            mikadoCameraDrawView(data);
        }
    }
    return 0;
}

} /* extern "C" */
