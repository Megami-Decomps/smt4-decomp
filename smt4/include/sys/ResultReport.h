/* Reporting of a failed system call result (smt4). */
#ifndef SMT4_SYS_RESULTREPORT_H
#define SMT4_SYS_RESULTREPORT_H

#include "common.h"

extern "C" {

/* Reports the failed result `result`: ignored levels return, others are reported and end in the fatal error handler. */
void FUN_002c526c(u32 result);
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
