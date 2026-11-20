#include "Model/MoriModelContent.h"

extern "C" {

/* Whether the content's file is loaded. */
u8 moriModelContentIsLoaded(MoriModelContent *content)
{
    return content->file != NULL;
}

} /* extern "C" */
