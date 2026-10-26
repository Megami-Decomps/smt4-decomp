#pragma once
#include "common.h"

/* Quest status queries. */
extern "C" {

u16 QcActive_GetField20(void);

int questGetRuntimeStatus(int index);

} /* extern "C" */
