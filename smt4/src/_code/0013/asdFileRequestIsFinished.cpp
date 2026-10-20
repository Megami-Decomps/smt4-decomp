#include "common.h"

extern "C" {

u8 asdFileRequestIsFinished(s32 *message)
{
    return *message == 4 || *message == 5;
}

} /* extern "C" */
