/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f188` (_code @ 0x33f188, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_003798f0(void);
/* Supplied declaration required: FUN_003b5714. */


void FUN_0033f188(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  FUN_003b5714();
  temp_v1 = FUN_003798f0();
  temp_v0 = DAT_00581288;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(DAT_00581288 + 0x1c) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x20) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x24) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v0 + 0x2c) = *(unsigned int *)(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x34) = *(unsigned int *)(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 + 0x3c) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x4c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x50) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(DAT_005806a4 + 0x18) = temp_v2;
  return;
}
