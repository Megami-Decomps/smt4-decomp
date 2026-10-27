/* Reporting of a failed system call result (smt4a). */
#ifndef SMT4A_SYS_RESULTREPORT_H
#define SMT4A_SYS_RESULTREPORT_H

#include "common.h"

extern "C" {

/* Reports the failed result `result`: ignored levels return, others are reported and end in the fatal error handler.
   Retail call sites prove both shapes: sites that keep the tested failure flag pass it as a second argument
   (`lsrs r1, r0, #31` before the call); summary-guarded sites and constant-code sites pass only the result.
   The definition itself reads only the first argument. */
void FUN_002e3140(u32 result, ...);

} /* extern "C" */

#endif
