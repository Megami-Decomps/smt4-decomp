/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b612c` (_code @ 0x2b612c, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(int, unsigned char *, int);

extern unsigned char LAB_00127fa8; /* 0x127fa8 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_002b612c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *unaff_r4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  FUN_002c5d5c(param_1,&LAB_00127fa8,0x18);
  *(unsigned char *)(param_1 + 0x90) = 0;
  *(unsigned char *)(param_1 + 0x91) = 0;
  *(unsigned char *)(param_1 + 0x92) = 0;
  *(unsigned char *)(param_1 + 0x93) = 0;
  temp_v0 = 0;
  do {
    temp_v5 = (temp_v0 & 0xff) == 0;
    if (temp_v5) {
      temp_v2 = 0xe;
    }
    else {
      temp_v2 = 0xf;
    }
    if (temp_v5) {
      temp_v4 = 0xe;
    }
    else {
      temp_v4 = 0xf;
    }
    temp_v3 = (unsigned int)unaff_r4 & 0xffff0000;
    switch(temp_v0) {
    case 0:
      temp_v3 = 0xc00000;
      break;
    case 1:
      temp_v3 = 0xc80000;
      break;
    case 2:
      temp_v3 = 0xd00000;
      break;
    case 3:
      temp_v3 = 0xd80000;
      break;
    case 4:
      temp_v3 = 0xf00000;
      break;
    case 5:
      temp_v3 = 0xf80000;
    }
    temp_v1 = temp_v0 + 1;
    unaff_r4 = (unsigned int *)(param_1 + temp_v0 * 0x18);
    *unaff_r4 = 0;
    unaff_r4[1] = (temp_v2 << 0x10) | (temp_v2 << 8) | temp_v2;
    unaff_r4[2] = 0;
    unaff_r4[3] = (temp_v4 << 0x18) | (temp_v4 << 0x10) | (temp_v4 << 8);
    unaff_r4[4] = 0;
    unaff_r4[5] = temp_v3;
    temp_v0 = temp_v1;
  } while (temp_v1 < 6);
  return;
}

} /* extern "C" */
