/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb9b0` (_code @ 0x2eb9b0, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineTimeGetNow(int);

/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002ee46c(void);


int FUN_002eb9b0(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_2;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  temp_v0 = FUN_002ee46c();
  *(int *)(param_1 + 0x14) = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x20) = param_2;
  onlineTimeGetNow(param_1 + 0x28);
  return param_1;
}

} /* extern "C" */
