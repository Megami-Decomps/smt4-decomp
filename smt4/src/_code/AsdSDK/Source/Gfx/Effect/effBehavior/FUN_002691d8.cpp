/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002691d8` (_code @ 0x2691d8, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c32a0(int, int, int, int, int, int);
int rt_memcpy(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: rt_memcpy. */


unsigned short * FUN_002691d8(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int *puVar2;
  unsigned short *puVar3;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 * 0x14 + 0x47359c);
  temp_v1 = param_2 * *(int *)(param_3 + 0xc0) * *(int *)(param_3 + 0xc4) + param_2;
  puVar1 = (unsigned short *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,
               *(int *)(param_1 * 0x14 + 0x473598) * param_2 + temp_v1 * 0x28 + temp_v0 * 2 + 0x30,0x10,
               1);
  puVar3 = puVar1 + 0x18 + temp_v1 * 0x14;
  *(unsigned short **)(puVar1 + 0xc) = puVar1 + 0x18;
  *(int *)(puVar1 + 0x12) = (int)puVar3 + temp_v0;
  *(int *)(puVar1 + 0xe) = (int)puVar3 + temp_v0 + temp_v0;
  *(unsigned short **)(puVar1 + 0x10) = puVar3;
  *puVar1 = (short)param_1;
  *(int *)(puVar1 + 2) = param_2;
  *(int *)(puVar1 + 4) = temp_v1;
  *(unsigned int *)(puVar1 + 6) = 0;
  *(unsigned int *)(puVar1 + 8) = 0;
  *(unsigned int *)(puVar1 + 10) = 0;
  *(unsigned short **)(puVar1 + 0x14) = puVar1;
  rt_memcpy(puVar3,param_3,temp_v0);
  rt_memcpy(*(unsigned int *)(puVar1 + 0x12),param_3,temp_v0);
  puVar2 = *(unsigned int **)(puVar1 + 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[3] = 0x3f800000;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[7] = 0x3f800000;
  if (*(char *)(puVar2 + 0x2f) != '\0') {
    *(unsigned int *)(puVar1 + 6) = *(unsigned int *)(puVar1 + 6) | 1;
  }
  if (param_1 == 0xc || param_1 == 0xd) {
    *(unsigned int *)(puVar1 + 6) = *(unsigned int *)(puVar1 + 6) | 2;
  }
  return puVar1;
}

} /* extern "C" */
