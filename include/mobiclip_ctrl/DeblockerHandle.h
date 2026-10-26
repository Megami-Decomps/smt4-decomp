#pragma once
#include "common.h"

/* Deblocker filter handle release. */
extern "C" {

void deblockerHandleRelease(u32 *handle);

void mwmofilterDeblockerRelease(int param_1);

} /* extern "C" */
