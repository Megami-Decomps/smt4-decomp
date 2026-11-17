/* NON_MATCHING: the vtable word now names _ZTV9Obj4207d0 (retail); retail loads the vtable address before the push, keeps `this` in r0 until the handle load and holds the handle in r1 (the build copies this to r4 first). */
#include "classes/Obj557b18.h"
#include "classes/Obj557b58.h"
#include "classes/Obj557d00.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

extern "C" {

void asdOperatorDelete(void *p);

extern u8 _ZTV9Obj4207d0[];

/* The content's deleting destructor: unregisters the body, deletes the binding, the body and the
 * resource, and frees the content. */
void FUN_0040ac3c(MoriModelContent *content)
{
    /* The vtable pointer, written as this C-style destructor stores it. */
    *reinterpret_cast<u8 **>(content) = _ZTV9Obj4207d0 + 8;
    Obj557b18 *body = content->body;
    content->file = NULL;
    if (body != NULL) {
        if (body->flags & 4) {
            FUN_003fd790(body);
        }
        ptrListRemoveClearOwner(g_handleRegistry, content->body);
    }
    if (content->binding != NULL) {
        delete content->binding;
        content->binding = NULL;
    }
    if (content->body != NULL) {
        delete content->body;
        content->body = NULL;
    }
    if (content->resource != NULL) {
        delete content->resource;
        content->resource = NULL;
    }
    asdOperatorDelete(content);
}

} /* extern "C" */
