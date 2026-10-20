/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f9188` (_code @ 0x1f9188, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00291ba4(void);
int VectorSignedToFloat(int, int);

extern int DAT_00447600; /* 0x447600 */
extern short DAT_0049fb62; /* 0x49fb62 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00291ba4. */


void FUN_001f9188(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  float temp_v7;
  
  temp_v0 = DAT_00447600;
  temp_v1 = (int)DAT_0049fb62;
  FUN_00291ba4();
  temp_v3 = 0;
  while( 1 ) {
    temp_v2 = temp_v0 + temp_v3 * 0x180;
    temp_v5 = *(char *)(temp_v2 + 0x34) != '\0';
    temp_v4 = 0;
    if (temp_v5) {
      temp_v4 = *(int *)(temp_v2 + 0x1a8);
    }
    if (((temp_v5 && temp_v4 != 0) && (temp_v4 < 0xb)) && (*(int *)(temp_v2 + 0xb8) == 2)) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x20) {
      return;
    }
  }
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x138) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x13c) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x140) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1e),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x144) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x148) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x14c) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x150) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x154) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x28),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x158) = temp_v6;
  *(float *)(temp_v2 + 0x15c) = *(float *)(temp_v2 + 0x148) - *(float *)(temp_v2 + 0x138);
  *(float *)(temp_v2 + 0x160) = *(float *)(temp_v2 + 0x14c) - *(float *)(temp_v2 + 0x13c);
  *(float *)(temp_v2 + 0x164) = *(float *)(temp_v2 + 0x150) - *(float *)(temp_v2 + 0x140);
  temp_v7 = 1.0f / *(float *)(temp_v2 + 0x158);
  *(float *)(temp_v2 + 0x15c) = *(float *)(temp_v2 + 0x15c) * temp_v7;
  *(float *)(temp_v2 + 0x160) = *(float *)(temp_v2 + 0x160) * temp_v7;
  *(float *)(temp_v2 + 0x164) = *(float *)(temp_v2 + 0x164) * temp_v7;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x2a),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x168) = temp_v6;
  *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x138);
  *(unsigned int *)(temp_v2 + 0x40) = *(unsigned int *)(temp_v2 + 0x13c);
  *(unsigned int *)(temp_v2 + 0x44) = *(unsigned int *)(temp_v2 + 0x140);
  *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x138);
  *(unsigned int *)(temp_v2 + 0x58) = *(unsigned int *)(temp_v2 + 0x13c);
  *(unsigned int *)(temp_v2 + 0x5c) = *(unsigned int *)(temp_v2 + 0x140);
  *(unsigned int *)(temp_v2 + 0x60) = *(unsigned int *)(temp_v2 + 0x144);
  *(unsigned int *)(temp_v2 + 0xb8) = 0x19;
  *(unsigned int *)(temp_v2 + 0xbc) = 0;
  return;
}

} /* extern "C" */
