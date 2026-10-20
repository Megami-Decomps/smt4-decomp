/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121328` (_code @ 0x121328, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a9a0(void);
int sysMemClear(int, int);

extern unsigned char DAT_0055afbc; /* 0x55afbc */

/* Supplied declaration required: FUN_0010a9a0. */
extern unsigned int FUN_00117358(int);
/* Supplied declaration required: sysMemClear. */
extern int FUN_002e760a(unsigned int);


unsigned int * FUN_00121328(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_0055afbc;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  temp_v0 = FUN_002e760a(0x3c);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    sysMemClear(temp_v0,0x3c);
    temp_v1 = FUN_00117358(temp_v0);
  }
  param_1[2] = temp_v1;
  temp_v0 = FUN_002e760a(0xc0);
  if (temp_v0 != 0) {
    FUN_0010a9a0();
  }
  param_1[3] = temp_v0;
  return param_1;
}

} /* extern "C" */
