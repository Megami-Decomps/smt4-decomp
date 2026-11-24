#include "common.h"
#include <new>
#include "classes/Obj557b58.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelResource.h"

extern "C" {

extern char g_moriModelContentSourcePath[];     /* "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp" */

/* Content constructor: loads the model resource with the content's request options, then creates its binding object (MoriModelContent.cpp line 251). */
void moriModelContentLoadBindingById(MoriModelContent *content, u32 id)
{
    Obj557d00 *resource = moriModelResourceCreate(&MoriModelRequest(id)
        .setCommandHeap(content->requestFirst).setKeyHeap(content->requestSecond).setMode(content->requestMode));
    content->resource = resource;

    /* The binding's constructor takes the resource as a word (its mangled name keeps `unsigned int`). */
    content->binding = new (g_moriModelContentSourcePath, 0xfb) Obj557b58((u32)resource);
}

} /* extern "C" */
