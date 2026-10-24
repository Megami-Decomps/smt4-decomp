/* NON_MATCHING: register allocation only: retail keeps content->unk0C in r6 and `arg` in r5 across the allocation (built: r5 and r6) */
/* Content constructor: creates the content's body object (MoriModelContent.cpp line 239). */
#include "common.h"
#include "Model/MoriModelContent.h"

extern "C" {

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
extern MoriModelBody *_ZN9Obj557b18C1EP16UnitModelContentjj(void *mem, u32 unk0C, int zero, u32 arg);   /* body constructor */

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCreateBody(MoriModelContent *content, u32 arg)
{
    u32 unk0C = content->unk0C;
    MoriModelBody *body = (MoriModelBody *)FUN_00178b04(0x26c, DAT_00526000, 0xef);

    if (body != NULL) {
        body = _ZN9Obj557b18C1EP16UnitModelContentjj(body, unk0C, 0, arg);
    }
    content->body = body;
}

} /* extern "C" */
