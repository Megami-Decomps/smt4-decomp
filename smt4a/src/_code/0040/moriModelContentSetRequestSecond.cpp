#include "Model/MoriModelContent.h"

extern "C" {

/* Sets the content's request second setting unless the body already exists. */
void moriModelContentSetRequestSecond(MoriModelContent *content, u32 value)
{
    if (content->body == NULL) {
        content->requestSecond = value;
    }
}

} /* extern "C" */
