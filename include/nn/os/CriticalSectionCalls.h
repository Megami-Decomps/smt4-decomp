#pragma once
#include "common.h"

/* Critical-section entry points the game calls through its own wrappers. */
extern "C" {

void nn_os_CriticalSection_Enter(int param_1);

void nn_os_CriticalSection_Leave(int param_1);

} /* extern "C" */
