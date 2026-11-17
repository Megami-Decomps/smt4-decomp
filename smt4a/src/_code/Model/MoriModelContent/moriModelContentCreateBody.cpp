/* Content constructor: creates the content's body object (MoriModelContent.cpp line 239). */
#include "classes/Obj557b18.h"
#include <new>
#include "Model/MoriModelContent.h"

extern "C" {
void *asdMemoryAllocTraced(u32 size, const char *file, int line);
extern char g_moriModelContentSourcePath[];     /* "c:\SMT4F\SMT4F\sdds4\program\Model\MoriModelContent.cpp" */

/* The body constructor's last parameter is the parent body as a word (its mangled name keeps `unsigned int`). */
static __inline Obj557b18 *moriModelBodyCreate(Obj557d00 *resource, Obj557b18 *parent)
{
    Obj557b18 *body = static_cast<Obj557b18 *>(
        asdMemoryAllocTraced(sizeof(Obj557b18), g_moriModelContentSourcePath, 0xef));
    if (body != NULL) {
        body = new (body) Obj557b18(reinterpret_cast<UnitModelContent *>(resource), 0,
            reinterpret_cast<u32>(parent));
    }
    return body;
}

void moriModelContentCreateBody(MoriModelContent *content, Obj557b18 *parent)
{
    content->body = moriModelBodyCreate(content->resource, parent);
}

} /* extern "C" */
