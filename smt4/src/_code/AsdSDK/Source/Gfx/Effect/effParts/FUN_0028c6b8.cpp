/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c6b8` (_code @ 0x28c6b8, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c9dc(unsigned int *, int, unsigned int, int);
int FUN_002c32a0(int, int, int, int, int, int);
int rt_memcpy(unsigned int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0025c9dc. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_0028c6b8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = *(unsigned short *)(param_1 + 1);
  puVar3 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x2c,0x10,1);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = 0xdc;
  *(unsigned short *)(puVar3 + 1) = temp_v0;
  *puVar3 = *param_1;
  temp_v3 = param_1[5];
  if (temp_v3 != 0) {
    if (param_1[6] != 0) {
      temp_v4 = param_1[4];
    }
    else if (param_1[4] != 0) {
      temp_v4 = param_1[4] + (int)param_1;
    }
    else {
      temp_v4 = 0;
    }
    temp_v0 = *(unsigned short *)(param_1 + 3);
    temp_v1 = 0;
    if (temp_v4 != 0) {
      temp_v1 = temp_v3;
    }
    if ((temp_v4 != 0 && temp_v3 != 0) && -1 < temp_v1) {
      temp_v2 = 0x10000;
      FUN_002c32a0(0x10000,0x100,0,temp_v3,0x10,1);
      *(unsigned short *)(puVar3 + 3) = temp_v0;
      puVar3[6] = temp_v2;
      puVar3[4] = temp_v2;
      puVar3[5] = temp_v3;
      rt_memcpy(puVar3[4],temp_v4,temp_v3);
    }
  }
  if (param_1[9] != 0) {
    if (param_1[10] != 0) {
      temp_v3 = param_1[8];
    }
    else if (param_1[8] != 0) {
      temp_v3 = param_1[8] + (int)param_1;
    }
    else {
      temp_v3 = 0;
    }
    FUN_0025c9dc(puVar3,temp_v3,param_1[9],*(unsigned short *)(param_1 + 7));
  }
  return puVar3;
}

} /* extern "C" */
