/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b5b0` (_code @ 0x14b5b0, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00421854; /* 0x421854 */


unsigned int * FUN_0014b5b0(int param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int *temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x80,4);
  temp_v1 = *(unsigned int *)(param_1 + 4);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = (unsigned int)&DAT_00421854;
    puVar1[1] = (unsigned int)param_2;
    puVar1[2] = param_1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0x11] = (unsigned int)(puVar1 + 0x18);
    puVar1[0x10] = 0;
    puVar1[0x12] = (unsigned int)(puVar1 + 0x18);
    puVar1[0x13] = 0x80000008;
  }
  temp_v2 = param_2;
  if (temp_v1 != 0) {
    temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v1 << 2,4);
    puVar3 = puVar1 + 5;
    temp_v3 = temp_v0;
    temp_v5 = temp_v1 & 0x3fffffff;
    if ((int **)puVar3 != &temp_v2) {
      temp_v3 = puVar1[6];
      temp_v5 = puVar1[8];
      temp_v2 = (int *)*puVar3;
      *puVar3 = (unsigned int)param_2;
      puVar1[6] = temp_v0;
      puVar1[7] = temp_v0;
      puVar1[8] = temp_v1 & 0x3fffffff;
    }
    temp_v0 = 0;
    if (temp_v2 != (int *)0x0) {
      temp_v0 = temp_v3;
    }
    if (temp_v2 == (int *)0x0 || temp_v0 == 0) {
      return puVar1;
    }
  }
  else {
    temp_v3 = 0;
    puVar3 = puVar1 + 5;
    temp_v5 = 0x40000000;
    if ((int **)puVar3 != &temp_v2) {
      temp_v3 = puVar1[6];
      temp_v5 = puVar1[8];
      temp_v2 = (int *)*puVar3;
      puVar1[8] = 0x40000000;
      *puVar3 = (unsigned int)param_2;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
    temp_v0 = 0;
    if (temp_v2 != (int *)0x0) {
      temp_v0 = temp_v3;
    }
    if (temp_v2 == (int *)0x0 || temp_v0 == 0) {
      return puVar1;
    }
  }
  temp_v4 = temp_v3;
  (**(romwright_code **)(*temp_v2 + 0xc))(temp_v2,temp_v3);
  return puVar1;
}

} /* extern "C" */
