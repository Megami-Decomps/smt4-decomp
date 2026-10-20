/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd6c0` (_code @ 0x4bd6c0, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_0035e458(void);

/* Supplied declaration required: FUN_001aba54. */
extern int FUN_0035d89c(int);
/* Supplied declaration required: FUN_0035e458. */


void FUN_004bd6c0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(short *)(param_1 + param_3 * 2 + 0x34) = (short)param_2;
  temp_v0 = param_2;
  FUN_001aba54();
  temp_v2 = 0;
  if ((temp_v0 != 0) && (*(unsigned short *)(temp_v0 + 0x26) < 0x12)) {
    temp_v2 = (int)*(char *)((unsigned int)*(unsigned short *)(temp_v0 + 0x26) + param_1 + 0x4c);
  }
  temp_v0 = param_2;
  FUN_0035e458();
  temp_v1 = FUN_0035d89c(param_2);
  if (temp_v0 < temp_v2) {
    temp_v2 = (int)(char)temp_v0;
  }
  else if (temp_v2 < temp_v1) {
    temp_v2 = (int)(char)temp_v1;
  }
  *(char *)(param_1 + param_3 + 0x44) = (char)temp_v2;
  return;
}

} /* extern "C" */
