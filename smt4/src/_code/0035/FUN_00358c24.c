/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358c24` (_code @ 0x358c24, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420e54; /* 0x420e54 */
extern unsigned char DAT_004656d3; /* 0x4656d3 */
extern unsigned char DAT_004656d4; /* 0x4656d4 */

extern int FUN_00239a54(void);
/* Supplied declaration required: FUN_003577ec. */


unsigned int * FUN_00358c24(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00420e54;
  *(unsigned char *)(param_1 + 2) = 0;
  DAT_004656d3 = 0;
  DAT_004656d4 = 0;
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
    FUN_003577ec();
    temp_v0 = FUN_00239a54();
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
