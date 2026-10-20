/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042fac4` (_code @ 0x42fac4, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042d588(void);

extern unsigned char DAT_00558338; /* 0x558338 */
extern unsigned char DAT_005b448e; /* 0x5b448e */
extern unsigned char DAT_005b448f; /* 0x5b448f */

/* Supplied declaration required: FUN_0042d588. */
extern int FUN_0042fbd4(void);


unsigned int * FUN_0042fac4(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558338;
  *(unsigned char *)(param_1 + 2) = 0;
  DAT_005b448e = 0;
  DAT_005b448f = 0;
  *(unsigned char *)((int)param_1 + 10) = 0;
  *(unsigned char *)((int)param_1 + 0xb) = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  if (param_2 == 0) {
    *(unsigned short *)(param_1 + 0x7f) = 0x6262;
    *(unsigned short *)(param_1 + 0xeb) = 0x6262;
    *(unsigned short *)(param_1 + 0x157) = 0x6767;
    param_1[1] = 0;
    FUN_0042d588();
    temp_v0 = FUN_0042fbd4();
    if (temp_v0 != 0) {
      *(unsigned char *)((int)param_1 + 9) = 1;
    }
    else {
      *(unsigned char *)((int)param_1 + 9) = 0;
    }
    *(unsigned char *)(param_1 + 2) = 1;
  }
  return param_1;
}

} /* extern "C" */
