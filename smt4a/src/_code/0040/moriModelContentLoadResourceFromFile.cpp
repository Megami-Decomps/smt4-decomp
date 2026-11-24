#include "Model/MoriModelContent.h"
#include "Model/MoriModelResource.h"

extern "C" {

/* Loads the content's file when one has been set. */
void moriModelContentLoadResourceFromFile(MoriModelContent *content)
{
    if (content->file == NULL) {
        return;
    }
    content->resource = moriModelResourceCreate(&MoriModelRequest().bindTarget(content->file)
        .setCommandHeap(content->requestFirst).setKeyHeap(content->requestSecond).setMode(content->requestMode));
}

} /* extern "C" */
