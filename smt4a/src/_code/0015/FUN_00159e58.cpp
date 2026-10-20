/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159e58` (_code @ 0x159e58, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short uRam006446ee; /* 0x6446ee */
extern unsigned short uRam0064773a; /* 0x64773a */

extern int FUN_001c6e20(void);


void FUN_00159e58(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  else if (param_1 >= 4) {
    param_1 = 3;
  }
  uRam0064773a = (short)param_1;
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)((unsigned int)uRam006446ee * 4 + 0x644470);
    *(short *)(puVar2 + 4) = (short)param_1;
    *puVar2 = *puVar2 | 0x8000;
  }
  return;
}

} /* extern "C" */
