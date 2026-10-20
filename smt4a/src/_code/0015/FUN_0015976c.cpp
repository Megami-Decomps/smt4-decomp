/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015976c` (_code @ 0x15976c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016ec20(unsigned int *);
int FUN_0016ecc8(unsigned int *, unsigned char [8], unsigned char [4], int);
int FUN_0016f0e4(void);

/* Supplied declaration required: FUN_0016ec20. */
/* Supplied declaration required: FUN_0016ecc8. */
/* Supplied declaration required: FUN_0016f0e4. */


unsigned int * FUN_0015976c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [8];
  unsigned char temp_v1 [4];
  
  *param_1 = param_2;
  *(unsigned short *)(param_1 + 1) = 0;
  *(unsigned short *)((int)param_1 + 6) = 0x80;
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  FUN_0016f0e4();
  *(unsigned short *)(param_1 + 2) = 0;
  *(unsigned short *)((int)param_1 + 10) = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned short *)((int)param_1 + 0xe) = 0;
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned short *)((int)param_1 + 0x12) = 0;
  FUN_0016ec20(param_1);
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  FUN_0016ecc8(param_1,temp_v0,temp_v1,1);
  return param_1;
}

} /* extern "C" */
