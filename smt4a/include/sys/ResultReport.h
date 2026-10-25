/* Reporting of a failed system call result (smt4a). */
#ifndef SMT4A_SYS_RESULTREPORT_H
#define SMT4A_SYS_RESULTREPORT_H

#include "common.h"

extern "C" {

/* Reports the failed result `result`: ignored levels return, others are reported and end in the fatal error handler. */
void FUN_002e3140(u32 result);

} /* extern "C" */

#endif
