/* NON_MATCHING: retail reads the constructor argument before the allocation call and tests the allocation result in place (cmp/beq); here the read follows the call */
/* Content constructor: creates the content's binding object (MoriModelContent.cpp line 251). */
#include "common.h"
#include "Model/MoriModelContent.h"

extern "C" {

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
extern MoriModelBinding *_ZN9Obj557b58C1Ev(void *mem, u32 unk0C);   /* binding constructor */

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCreateBinding(MoriModelContent *content)
{
    void *mem = FUN_00178b04(0x1c, DAT_00526000, 0xfb);
    MoriModelBinding *binding = NULL;

    if (mem != NULL) {
        binding = _ZN9Obj557b58C1Ev(mem, content->unk0C);
    }
    content->binding = binding;
}

} /* extern "C" */
