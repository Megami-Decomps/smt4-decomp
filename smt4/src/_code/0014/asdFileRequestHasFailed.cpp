#include "common.h"
#include "util/AsdFileRequestHasFailed.h"

extern "C" {

u8 asdFileRequestHasFailed(s32 *message)
{
    return *message == 5;
}

} /* extern "C" */
