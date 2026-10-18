/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d2d0` (_code @ 0x11d2d0, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_0044e3b4; /* 0x44e3b4 */
extern int DAT_0044e3b8; /* 0x44e3b8 */
extern unsigned int DAT_004c644c; /* 0x4c644c */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_0011d2d0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  
  nn_os_CriticalSection_Enter();
  piVar3 = DAT_0044e3b4;
  while( 1 ) {
    if (piVar3 == (int *)0x0) {
      nn_os_CriticalSection_Leave(&DAT_004c644c);
      return;
    }
    if (piVar3 == param_1) break;
    piVar3 = (int *)piVar3[1];
  }
  temp_v0 = *piVar3;
  piVar4 = (int *)piVar3[1];
  piVar1 = piVar4;
  if (temp_v0 != 0) {
    *(int **)(temp_v0 + 4) = piVar4;
    piVar1 = DAT_0044e3b4;
  }
  DAT_0044e3b4 = piVar1;
  if (piVar4 != (int *)0x0) {
    *piVar4 = temp_v0;
    temp_v0 = DAT_0044e3b8;
  }
  DAT_0044e3b8 = temp_v0;
  *piVar3 = 0;
  piVar3[1] = 0;
  nn_os_CriticalSection_Leave(&DAT_004c644c);
  return;
}
