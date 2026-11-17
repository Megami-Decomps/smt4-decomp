/* Content constructor: creates the content's binding object (MoriModelContent.cpp line 251). */
#include "common.h"
#include <new>
#include "classes/Obj557b58.h"
#include "Model/MoriModelContent.h"

extern "C" {

extern char g_moriModelContentSourcePath[];     /* "c:\SMT4F\SMT4F\sdds4\program\Model\MoriModelContent.cpp" */

void moriModelContentCreateBinding(MoriModelContent *content)
{
    /* The binding's constructor takes the resource as a word (its mangled name keeps `unsigned int`). */
    u32 resource = reinterpret_cast<u32>(content->resource);
    content->binding = new (g_moriModelContentSourcePath, 0xfb) Obj557b58(resource);
}

} /* extern "C" */
