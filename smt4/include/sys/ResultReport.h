/* Reporting of a failed system call result (smt4). */
#ifndef SMT4_SYS_RESULTREPORT_H
#define SMT4_SYS_RESULTREPORT_H

#include "common.h"

extern "C" {

/* Reports the failed result `result`: ignored levels return, others are reported and end in the fatal error handler.
   Retail call sites prove both shapes: sites that keep the tested failure flag pass it as a second argument
   (`lsrs r1, r0, #31` before the call); summary-guarded sites and constant-code sites pass only the result.
   The definition itself reads only the first argument. */
void FUN_002c526c(u32 result, ...);
/* Maps/reports the thread stack memory of `stack`: reports the failed result of the mapping. */
void resultReportIfFailed(void *stack, void *memory, u32 size);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

int FUN_00103c9c(void);

#ifdef __cplusplus
}
#endif

#endif
