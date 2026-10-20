/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043eca8` (_code @ 0x43eca8, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcd48(int, int);
int FUN_0043dd54(unsigned int *);
int software_interrupt(int);

extern unsigned char DAT_0055b40c; /* 0x55b40c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_0043dd54. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int * FUN_0043eca8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned char temp_v2;
  
  *param_1 = (unsigned int)&DAT_0055b40c;
  FUN_0043dd54(param_1);
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 4));
  temp_v1 = param_1[1];
  if (temp_v1 != 0) {
    do {
      if (*(int *)(temp_v1 + 8) != 0) {
        software_interrupt(0x23);
        *(unsigned int *)(temp_v1 + 8) = 0;
      }
      temp_v0 = 0;
      if ((int *)param_1[1] != (int *)0x0) {
        temp_v0 = *(int *)param_1[1];
      }
      temp_v2 = temp_v0 != temp_v1;
      if (temp_v2) {
        temp_v1 = *(int *)(temp_v1 + 4);
      }
    } while (temp_v2 && temp_v1 != 0);
  }
  while (param_1[9] != 0) {
    nn_os_CriticalSection_Leave((unsigned int)(param_1 + 4));
    FUN_001bcd48(100000000,0);
    nn_os_CriticalSection_Enter((unsigned int)(param_1 + 4));
  }
  *(unsigned char *)((int)param_1 + 0x41) = 0;
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 4));
  FUN_0043dd54(param_1);
  puVar2 = (unsigned int *)param_1[3];
  if (puVar2 != (unsigned int *)0x0) {
    do {
      puVar3 = (unsigned int *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (unsigned int *)0x0);
    param_1[3] = 0;
  }
  puVar2 = (unsigned int *)param_1[2];
  if ((unsigned int *)param_1[2] != (unsigned int *)0x0) {
    do {
      puVar3 = (unsigned int *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (unsigned int *)0x0);
    param_1[2] = 0;
  }
  puVar2 = (unsigned int *)param_1[1];
  if (puVar2 != (unsigned int *)0x0) {
    do {
      puVar3 = (unsigned int *)puVar2[1];
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar3;
    } while (puVar3 != (unsigned int *)0x0);
    param_1[1] = 0;
  }
  return param_1;
}

} /* extern "C" */
