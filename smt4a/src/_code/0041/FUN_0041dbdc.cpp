/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041dbdc` (_code @ 0x41dbdc, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(unsigned int);
int FUN_0041e2d8(int);
int FUN_0041f020(int, int);
int FUN_0041fc24(int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001681cc. */
extern unsigned int FUN_002a4860(int);
extern int FUN_0031d1a0(int);
/* Supplied declaration required: FUN_0041e2d8. */
/* Supplied declaration required: FUN_0041f020. */
/* Supplied declaration required: FUN_0041fc24. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041dbdc(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  *(char *)(param_1 + 0x14) = (char)param_2;
  if (param_2 != 0) {
    *(unsigned int *)(param_1 + 0x300) = 1;
    *(unsigned int *)(param_1 + 0x18) = 2;
    temp_v0 = 0x10c;
  }
  else {
    *(unsigned int *)(param_1 + 0x18) = 1;
    temp_v0 = 0x10b;
    *(unsigned int *)(param_1 + 0x300) = 0;
  }
  FUN_001681cc(temp_v0);
  FUN_0041f020(param_1,param_2);
  if (param_2 != 0) {
    rt_memcpy_w(param_1 + 0x310,param_1 + 0x3d8,100);
    rt_memcpy_w(param_1 + 0x3d8,param_1 + 0x374,100);
  }
  else {
    rt_memcpy_w(param_1 + 0x374,param_1 + 0x3d8,100);
    rt_memcpy_w(param_1 + 0x3d8,param_1 + 0x310,100);
  }
  temp_v0 = FUN_002a4860(param_1 + 0x3d8);
  *(unsigned int *)(param_1 + 0x304) = temp_v0;
  temp_v1 = FUN_0031d1a0(param_1 + 0x3d8);
  *(int *)(param_1 + 0x308) = temp_v1;
  *(unsigned int *)(param_1 + 0x2fc) = *(unsigned int *)(param_1 + 0x2f8);
  *(int *)(param_1 + 0x2f8) = temp_v1 + *(int *)(param_1 + 0x304) + *(int *)(param_1 + 0x300);
  FUN_0041fc24(param_1);
  if (*(char *)(param_1 + 0x30c) != '\0') {
    return;
  }
  FUN_0041e2d8(param_1);
  return;
}

} /* extern "C" */
