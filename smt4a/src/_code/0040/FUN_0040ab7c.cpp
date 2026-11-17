#include "Model/MoriModelContent.h"

extern "C" {

/* Sets the content's request mode setting unless the body already exists. */
void FUN_0040ab7c(MoriModelContent *content, u32 value)
{
    if (content->body == NULL) {
        content->requestMode = value;
    }
}

} /* extern "C" */
