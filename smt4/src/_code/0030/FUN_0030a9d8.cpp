/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a9d8` (_code @ 0x30a9d8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00202ab4(int);
int VectorSignedToFloat(int, int);

extern unsigned char DAT_0044de28; /* 0x44de28 */
extern unsigned char DAT_0044de29; /* 0x44de29 */
extern int DAT_0044de2c; /* 0x44de2c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00202ab4. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_0030a9d8(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  FUN_00202ab4(0);
  temp_v0 = DAT_0044de2c;
  *(unsigned int *)(DAT_0044de2c + 0x14) = 0;
  DAT_0044de28 = 0;
  DAT_0044de29 = 0;
  *(unsigned char *)(temp_v0 + 0x49) = 0;
  *(unsigned char *)(temp_v0 + 0x379) = 1;
  temp_v1 = FUN_002bf4f8(0x36,3);
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x3c) = temp_v2;
  *(unsigned char *)(temp_v0 + 0x49) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 1;
  *(unsigned int *)(temp_v0 + 0x50) = 9;
  return;
}

} /* extern "C" */
