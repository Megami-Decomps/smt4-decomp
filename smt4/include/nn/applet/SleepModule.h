/* The applet module's sleep state (smt4). */
#ifndef SMT4_NN_APPLET_SLEEPMODULE_H
#define SMT4_NN_APPLET_SLEEPMODULE_H

#include "common.h"

extern "C" {

/* Marks the sleep module active; when `sleep` is nonzero, sleeps until the shell is open again. */
void FUN_002c5434(int sleep);

} /* extern "C" */

#endif
