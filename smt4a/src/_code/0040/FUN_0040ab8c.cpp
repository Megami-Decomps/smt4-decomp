#include "Model/MoriModelContent.h"

extern "C" {

/* Whether the content's file is loaded. */
u8 FUN_0040ab8c(MoriModelContent *content)
{
    return content->file != NULL;
}

} /* extern "C" */
