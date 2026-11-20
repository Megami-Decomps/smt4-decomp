#include "Model/MoriModelContent.h"

extern "C" {

/* Sets the content's request first setting unless the body already exists. */
void moriModelContentSetRequestFirst(MoriModelContent *content, u32 value)
{
    if (content->body == NULL) {
        content->requestFirst = value;
    }
}

} /* extern "C" */
