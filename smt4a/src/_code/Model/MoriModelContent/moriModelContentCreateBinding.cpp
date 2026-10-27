/* Content constructor: creates the content's binding object (MoriModelContent.cpp line 251). */
#include "common.h"
#include <new>
#include "classes/Obj557b58.h"
#include "Model/MoriModelContent.h"

extern "C" {

extern char DAT_00526000[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

void moriModelContentCreateBinding(MoriModelContent *content)
{
    u32 resource = content->unk0C;
    Obj557b58 *binding = new (DAT_00526000, 0xfb) Obj557b58(resource);

    content->binding = reinterpret_cast<MoriModelBinding *>(binding);
}

} /* extern "C" */
