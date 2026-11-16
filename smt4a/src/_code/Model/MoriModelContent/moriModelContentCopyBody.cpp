/* Content copy constructor: creates the content's body object over the source content's model (MoriModelContent.cpp line 239). */
#include "classes/Obj557b18.h"
#include <new>
#include "Model/MoriModelContent.h"

extern "C" {

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */

extern char DAT_00526000[];     /* "c:\SMT4F\SMT4F\sdds4\program\Model\MoriModelContent.cpp" */

static __inline Obj557b18 *moriModelBodyCreate(UnitModelContent *source, u32 arg)
{
    Obj557b18 *body = static_cast<Obj557b18 *>(
        FUN_00178b04(sizeof(Obj557b18), DAT_00526000, 0xef));
    if (body != NULL) {
        body = new (body) Obj557b18(source, 0, arg);
    }
    return body;
}

void moriModelContentCopyBody(MoriModelContent *content, MoriModelContent *src, u32 arg)
{
    content->body = reinterpret_cast<MoriModelBody *>(
        moriModelBodyCreate(reinterpret_cast<UnitModelContent *>(src->unk0C), arg));
}

} /* extern "C" */
