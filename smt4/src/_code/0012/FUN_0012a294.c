/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a294` (_code @ 0x12a294, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_0044e3b4; /* 0x44e3b4 */
extern int *DAT_0044e3b8; /* 0x44e3b8 */
extern unsigned int DAT_004c644c; /* 0x4c644c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0012a294(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned char temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004c644c);
  temp_v0 = *param_1;
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = param_1[1];
  }
  if ((temp_v1 && temp_v0 == 0) && (DAT_0044e3b4 != param_1)) {
    if (DAT_0044e3b4 == (int *)0x0) {
      DAT_0044e3b4 = param_1;
      DAT_0044e3b8 = param_1;
      *param_1 = 0;
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004c644c);
      return;
    }
    piVar3 = DAT_0044e3b4;
    do {
      if (param_1[4] < piVar3[4]) {
        temp_v0 = *piVar3;
        param_1[1] = (int)piVar3;
        *param_1 = temp_v0;
        piVar1 = param_1;
        if (*piVar3 != 0) {
          *(int **)(*piVar3 + 4) = param_1;
          piVar1 = DAT_0044e3b4;
        }
        DAT_0044e3b4 = piVar1;
        *piVar3 = (int)param_1;
        nn_os_CriticalSection_Leave((unsigned int)&DAT_004c644c);
        return;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    *(int **)((int)DAT_0044e3b8 + 4) = param_1;
    *param_1 = (int)DAT_0044e3b8;
    param_1[1] = 0;
    DAT_0044e3b8 = param_1;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004c644c);
    return;
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004c644c);
  return;
}
