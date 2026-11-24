#include "Model/MoriModelContent.h"
#include "Model/MoriModelResource.h"

extern "C" {

/* Create a resource using this content's request options and retain the returned object. */
void moriModelContentLoadResourceById(MoriModelContent *content, u32 id)
{
    content->resource = moriModelResourceCreate(&MoriModelRequest(id)
        .setCommandHeap(content->requestFirst).setKeyHeap(content->requestSecond).setMode(content->requestMode));
}
}
