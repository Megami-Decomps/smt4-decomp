/* NON_MATCHING: cached source-content and constructor-id values occupy opposite saved registers; allocation and constructor instruction order now match retail. */
/* Content constructor: creates the content's body object (MoriModelContent.cpp line 239). */
#include "classes/Obj557b18.h"
#include <new>
#include "Model/MoriModelContent.h"

extern "C" {

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCopyBody(MoriModelContent *content, MoriModelContent *src, u32 arg)
{
    UnitModelContent *source = reinterpret_cast<UnitModelContent *>(src->unk0C);
    Obj557b18 *body = static_cast<Obj557b18 *>(
        FUN_00178b04(sizeof(Obj557b18), DAT_00526000, 0xef));
    if (body != NULL) {
        body = new (body) Obj557b18(source, 0, arg);
    }
    content->body = reinterpret_cast<MoriModelBody *>(body);
}

} /* extern "C" */
