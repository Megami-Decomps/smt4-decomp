/* NON_MATCHING: retail keeps the parent in r5 and the loaded resource in r6; the build swaps them. */
#include "classes/Obj557b18.h"
#include <new>
#include "Model/MoriModelContent.h"
#include "Model/MoriModelResource.h"

extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, int line);   /* allocate with source location */

extern char g_moriModelContentSourcePath[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

/* Loads the content's model and creates its body (MoriModelContent.cpp line 239). */
void moriModelContentLoadBody(MoriModelContent *content, Obj557b18 *parent)
{
    if (content->file != NULL) {
        Obj557d00 *loaded = moriModelResourceCreate(&MoriModelRequest().bindTarget(content->file)
            .setCommandHeap(content->requestFirst).setKeyHeap(content->requestSecond).setMode(content->requestMode));
        content->resource = loaded;
        Obj557b18 *body = (Obj557b18 *)
            asdMemoryAllocTraced(sizeof(Obj557b18), g_moriModelContentSourcePath, 0xef);
        if (body != NULL) {
            /* The constructor takes the parent body as a word (its mangled name keeps `unsigned int`). */
            body = new (body) Obj557b18((UnitModelContent *)loaded, 0, (u32)parent);
        }
        content->body = body;
    }
}

} /* extern "C" */
