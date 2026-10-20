/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c548` (_code @ 0x15c548, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern signed char DAT_004ea169; /* 0x4ea169 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_0015c548(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar4;
  unsigned int temp_v4;
  
  temp_v1 = DAT_004ea169;
  param_3 = param_3 & 0xff;
  software_interrupt(0x28);
  temp_v3 = param_3 * 3;
  temp_v0 = param_3 * 0xc;
  piVar4 = *(int **)(temp_v0 + 0x4ea1d0);
  if (DAT_004ea169 == '\x02') {
    temp_v4 = 4;
  }
  else {
    temp_v4 = 2;
  }
  if (piVar4 != (int *)(temp_v0 + 0x4ea1d0)) {
    do {
      (**(romwright_code **)(piVar4[-1] + 0x10))(piVar4 + -1,temp_v4,param_1,param_2,2,temp_v1);
      piVar4 = (int *)*piVar4;
      temp_v3 = temp_v2;
    } while (piVar4 != (int *)(temp_v0 + 0x4ea1d0));
  }
  software_interrupt(0x28);
  *(unsigned int *)(param_3 * 8 + 0x4ea3f8) = (temp_v0 + 0x4ea1d0U) - param_1;
  *(unsigned int *)(param_3 * 8 + 0x4ea3fc) = temp_v3 - (param_2 + (unsigned int)(temp_v0 + 0x4ea1d0U < param_1));
  return;
}

} /* extern "C" */
