/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004749a0` (_code @ 0x4749a0, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a730(void);
int FUN_0019a840(unsigned int);
int FUN_0019d4d8(int, int, int, int, int, int);
int FUN_00281024(void);
int FUN_002e6dd4(void);
int nnnstdMemCpy(unsigned int, unsigned int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0019a730. */
/* Supplied declaration required: FUN_0019a840. */
/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: FUN_00281024. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_004749a0(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x10000;
  FUN_0019d4d8(0x10000,0x100,0,0x2000,0x80,1);
  *(unsigned int *)(param_1 + 4) = temp_v0;
  FUN_002e6dd4();
  temp_v1 = 0;
  do {
    nnnstdMemCpy(*(int *)(param_1 + 4) + temp_v1 * 0x400 + 0x800,param_2 + temp_v1 * 0x300,0x300);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v0 = 0;
  FUN_0019a730();
  *(unsigned int *)(param_1 + 8) = temp_v0;
  FUN_00281024();
  *(unsigned int *)(*(int *)(param_1 + 8) + 4) = 0xde1;
  *(unsigned int *)(*(int *)(param_1 + 8) + 8) = 0x10000;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0xc) = 0x1000000;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x10) = 0;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = 0x40;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x18) = 0x40;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x1c) = 0x6754;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = 0x8363;
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x24) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x28) = 0x2000;
  FUN_0019a840(*(unsigned int *)(param_1 + 8));
  return;
}

} /* extern "C" */
