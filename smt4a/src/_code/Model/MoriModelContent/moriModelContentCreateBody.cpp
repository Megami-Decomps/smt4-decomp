/* NON_MATCHING: register allocation only: retail keeps content->unk0C in r6 and `arg` in r5 across the allocation (built: r5 and r6) */
/* Content constructor: creates the content's body object (MoriModelContent.cpp line 239). */
#include "classes/Obj557b18.h"
#include <new>
#include "Model/MoriModelContent.h"

extern "C" {
void *FUN_00178b04(u32 size, const char *file, int line);
extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCreateBody(MoriModelContent *content, u32 arg)
{
    UnitModelContent *source = reinterpret_cast<UnitModelContent *>(content->unk0C);
    Obj557b18 *body = static_cast<Obj557b18 *>(
        FUN_00178b04(sizeof(Obj557b18), DAT_00526000, 0xef));
    if (body != NULL) {
        body = new (body) Obj557b18(source, 0, arg);
    }
    content->body = reinterpret_cast<MoriModelBody *>(body);
}

} /* extern "C" */
