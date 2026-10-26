#pragma once
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* Runtime object, job and event helpers. */
extern "C" {

AsdProcess *jobFind(u32 handle);

} /* extern "C" */
