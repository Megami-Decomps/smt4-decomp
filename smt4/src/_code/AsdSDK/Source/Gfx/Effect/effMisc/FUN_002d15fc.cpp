/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d15fc` (_code @ 0x2d15fc, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a775c(void);
int FUN_002c32a0(int, int, int, int, int, int);
int FUN_002c3944(void);
int FUN_00313760(unsigned int *, int, int);
int FUN_0031ce4c(unsigned int *);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int FUN_0028522c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a775c. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_00313760. */
/* Supplied declaration required: FUN_0031ce4c. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_002d15fc(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x24);
  temp_v0 = *(int *)(temp_v1 + 0x20);
  if (temp_v0 == 0) {
    temp_v0 = *(int *)(temp_v1 + 0xb8);
  }
  temp_v2 = temp_v0 * *(int *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x24) + 0x24);
  if (temp_v2 >= 101) {
    temp_v2 = 100;
  }
  puVar1 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0xa8,0x10,1);
  FUN_002c3944();
  puVar1[1] = 0xffffffff;
  *puVar1 = temp_v2;
  puVar1[2] = 0x3f800000;
  rt_memcpy_w(puVar1 + 4,param_1 + 0x10,0x44);
  FUN_00313760(puVar1,**(unsigned short **)(param_1 + 0x9c),temp_v1);
  if (*(int *)(puVar1[0x27] + 8) != 0) {
    if (*(short *)(param_1 + 0xc) == 3) {
      if (puVar1[0x15] != 0) {
        FUN_002a775c();
      }
      temp_v2 = FUN_0028522c(*(unsigned int *)(param_1 + 0x54),0);
      puVar1[0x15] = temp_v2;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v2 + 8) + 0x2c) + 0x220) + 8) + 0x28) =
           1;
    }
    *(unsigned short *)(puVar1 + 3) = *(unsigned short *)(param_1 + 0xc);
    FUN_0031ce4c(puVar1);
  }
  return puVar1;
}

} /* extern "C" */
