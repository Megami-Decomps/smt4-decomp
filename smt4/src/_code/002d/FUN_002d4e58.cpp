/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d4e58` (_code @ 0x2d4e58, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027d7b0(void);
int VectorSignedToFloat(int, int);

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0027d748(void);
/* Supplied declaration required: FUN_0027d7b0. */


void FUN_002d4e58(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  FUN_0027d7b0();
  temp_v1 = FUN_0027d748();
  temp_v0 = DAT_00447e88;
  temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v2;
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
  *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v2;
  return;
}

} /* extern "C" */
