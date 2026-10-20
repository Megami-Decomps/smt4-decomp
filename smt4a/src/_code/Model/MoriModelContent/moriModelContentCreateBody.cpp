/* NON_MATCHING: retail reads the constructor argument before the allocation call and tests the allocation result in place (cmp/beq); here the read follows the call */
/* Content constructor: creates the content's body object (MoriModelContent.cpp line 239). */
#include "common.h"
#include "Model/MoriModelContent.h"

extern "C" {

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
extern MoriModelBody *FUN_003fe9cc(void *mem, u32 unk0C, int zero, u32 arg);   /* body constructor */

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCreateBody(MoriModelContent *content, u32 arg)
{
    void *mem = FUN_00178b04(0x26c, DAT_00526000, 0xef);
    MoriModelBody *body = NULL;

    if (mem != NULL) {
        body = FUN_003fe9cc(mem, content->unk0C, 0, arg);
    }
    content->body = body;
}

} /* extern "C" */
