/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a450` (_code @ 0x15a450, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int *DAT_005891f8; /* 0x5891f8 */
extern int DAT_005891fc; /* 0x5891fc */
extern unsigned int DAT_0061a62c; /* 0x61a62c */

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0015a450(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int *piVar4;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a62c);
  piVar3 = DAT_005891f8;
  while( 1 ) {
    if (piVar3 == (int *)0x0) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a62c);
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
    piVar1 = DAT_005891f8;
  }
  DAT_005891f8 = piVar1;
  if (piVar4 != (int *)0x0) {
    *piVar4 = temp_v0;
    temp_v0 = DAT_005891fc;
  }
  DAT_005891fc = temp_v0;
  *piVar3 = 0;
  piVar3[1] = 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a62c);
  return;
}

} /* extern "C" */
