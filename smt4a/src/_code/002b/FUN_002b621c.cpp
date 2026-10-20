/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b621c` (_code @ 0x2b621c, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00377acc(char *, int, int);
int FUN_003a315c(void);
int VectorSignedToFloat(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_005806d4; /* 0x5806d4 */
extern short DAT_005f1880; /* 0x5f1880 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00377acc. */
/* Supplied declaration required: FUN_003a315c. */


void FUN_002b621c(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  float temp_v7;
  
  temp_v0 = DAT_005806d4;
  temp_v1 = (int)DAT_005f1880;
  FUN_003a315c();
  temp_v3 = 0;
  while( 1 ) {
    temp_v2 = temp_v0 + temp_v3 * 0x188;
    temp_v5 = *(char *)(temp_v2 + 0x34) != '\0';
    temp_v4 = 0;
    if (temp_v5) {
      temp_v4 = *(int *)(temp_v2 + 0x1b0);
    }
    if (((temp_v5 && temp_v4 != 0) && (temp_v4 < 0xb)) && (*(int *)(temp_v2 + 0xb8) == 2)) break;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x28) {
      return;
    }
  }
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1c),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x138) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x1e),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x13c) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x140) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x144) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x148) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x14c) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x28),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x150) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x2a),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x154) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x158) = temp_v6;
  *(float *)(temp_v2 + 0x15c) = *(float *)(temp_v2 + 0x148) - *(float *)(temp_v2 + 0x138);
  *(float *)(temp_v2 + 0x160) = *(float *)(temp_v2 + 0x14c) - *(float *)(temp_v2 + 0x13c);
  *(float *)(temp_v2 + 0x164) = *(float *)(temp_v2 + 0x150) - *(float *)(temp_v2 + 0x140);
  temp_v7 = 1.0f / *(float *)(temp_v2 + 0x158);
  *(float *)(temp_v2 + 0x15c) = *(float *)(temp_v2 + 0x15c) * temp_v7;
  *(float *)(temp_v2 + 0x160) = *(float *)(temp_v2 + 0x160) * temp_v7;
  *(float *)(temp_v2 + 0x164) = *(float *)(temp_v2 + 0x164) * temp_v7;
  temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0x2e),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v2 + 0x168) = temp_v6;
  *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x138);
  *(unsigned int *)(temp_v2 + 0x40) = *(unsigned int *)(temp_v2 + 0x13c);
  *(unsigned int *)(temp_v2 + 0x44) = *(unsigned int *)(temp_v2 + 0x140);
  *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x138);
  *(unsigned int *)(temp_v2 + 0x58) = *(unsigned int *)(temp_v2 + 0x13c);
  *(unsigned int *)(temp_v2 + 0x5c) = *(unsigned int *)(temp_v2 + 0x140);
  *(unsigned int *)(temp_v2 + 0x60) = *(unsigned int *)(temp_v2 + 0x144);
  *(unsigned int *)(temp_v2 + 0xb8) = 0x1a;
  *(unsigned int *)(temp_v2 + 0xbc) = 0;
  FUN_00377acc((char *)(temp_v2 + 0x34),(int)DAT_005f1880,3);
  return;
}

} /* extern "C" */
