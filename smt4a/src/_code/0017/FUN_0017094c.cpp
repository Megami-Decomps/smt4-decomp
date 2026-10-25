/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017094c` (_code @ 0x17094c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005891f8; /* 0x5891f8 */
extern int *DAT_005891fc; /* 0x5891fc */
extern unsigned int g_appletSleepCallbackCriticalSection; /* 0x61a62c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0017094c(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&g_appletSleepCallbackCriticalSection);
  temp_v0 = *param_1;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1[1];
  }
  if ((temp_v1 && temp_v0 == 0) && (DAT_005891f8 != param_1)) {
    if (DAT_005891f8 == (int *)0x0) {
      DAT_005891f8 = param_1;
      DAT_005891fc = param_1;
      *param_1 = 0;
      nn_os_CriticalSection_Leave((unsigned int)&g_appletSleepCallbackCriticalSection);
      return;
    }
    piVar3 = DAT_005891f8;
    do {
      if (param_1[4] < piVar3[4]) {
        temp_v0 = *piVar3;
        param_1[1] = (int)piVar3;
        *param_1 = temp_v0;
        piVar1 = param_1;
        if (*piVar3 != 0) {
          *(int **)(*piVar3 + 4) = param_1;
          piVar1 = DAT_005891f8;
        }
        DAT_005891f8 = piVar1;
        *piVar3 = (int)param_1;
        nn_os_CriticalSection_Leave((unsigned int)&g_appletSleepCallbackCriticalSection);
        return;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    *(int **)((int)DAT_005891fc + 4) = param_1;
    *param_1 = (int)DAT_005891fc;
    param_1[1] = 0;
    DAT_005891fc = param_1;
    nn_os_CriticalSection_Leave((unsigned int)&g_appletSleepCallbackCriticalSection);
    return;
  }
  nn_os_CriticalSection_Leave((unsigned int)&g_appletSleepCallbackCriticalSection);
  return;
}

} /* extern "C" */
