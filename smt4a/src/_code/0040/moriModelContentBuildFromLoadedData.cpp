#include "Model/MoriModelContent.h"
#include "Model/MoriModelResource.h"

extern "C" {

/* Builds the content's model directly from the loaded data. */
void moriModelContentBuildFromLoadedData(MoriModelContent *content, Obj557d00 *linked)
{
    content->resource = moriModelResourceCreate(&MoriModelRequest().bindTarget(content->file).setResourceMode(true)
        .setCommandHeap(content->requestFirst).setKeyHeap(content->requestSecond).setMode(content->requestMode));
}

} /* extern "C" */
