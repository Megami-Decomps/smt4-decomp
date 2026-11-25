#ifndef SYS_WINDOW_STATUS_CHECK_H
#define SYS_WINDOW_STATUS_CHECK_H
#include "common.h"
#include "classes/WindowStatus.h"
#include "sys/RuntimeObjects.h"

/* Tests a provider or request result after translating its legacy resource code (every such test in both games). */
static __inline bool windowStatusFailed(const WindowStatusResult &status)
{
    return nnResultIsFailure(legacyResourceIdRemap(&status));
}

#endif
