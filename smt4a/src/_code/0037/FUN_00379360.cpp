/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379360` (_code @ 0x379360, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005806d4; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern int FUN_00376f94(void);


void FUN_00379360(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v1 = gameFlagsGetBlock();
  temp_v2 = FUN_00376f94();
  if ((*(char *)(temp_v1 + 0x1664) != '\0') && (temp_v2 >= 100)) {
    temp_v8 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0x1665),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0x1665),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0x1666),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0x1666),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = *(float *)(g_lmapScene + 0x4c) + 180.0f;
    *(unsigned char *)(temp_v1 + 0x1664) = 0;
    temp_v8 = temp_v8 * 700.0f + 350.0f;
    temp_v5 = temp_v5 * 700.0f + 350.0f;
    temp_v1 = 0;
    while( 1 ) {
      temp_v0 = DAT_005806d4 + temp_v1 * 0x188;
      temp_v3 = *(char *)(temp_v0 + 0x34) != '\0';
      temp_v2 = 0;
      if (temp_v3) {
        temp_v2 = *(int *)(temp_v0 + 0x1b0);
      }
      if (((temp_v3 && temp_v2 != 0) && (temp_v2 < 0xb)) && (*(int *)(temp_v0 + 0xb8) == 2)) break;
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 0x28) {
        return;
      }
    }
    *(float *)(temp_v0 + 0x138) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x13c) = 0x43fa0000;
    *(float *)(temp_v0 + 0x140) = temp_v7 * 700.0f + 350.0f;
    *(float *)(temp_v0 + 0x144) = temp_v4;
    *(float *)(temp_v0 + 0x148) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x14c) = 0;
    *(float *)(temp_v0 + 0x150) = temp_v6 * 700.0f + 350.0f;
    *(float *)(temp_v0 + 0x154) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x158) = 0x41200000;
    *(float *)(temp_v0 + 0x15c) = temp_v5 - temp_v8;
    *(unsigned int *)(temp_v0 + 0x160) = 0xc3fa0000;
    *(float *)(temp_v0 + 0x164) = *(float *)(temp_v0 + 0x150) - *(float *)(temp_v0 + 0x140);
    *(float *)(temp_v0 + 0x15c) = *(float *)(temp_v0 + 0x15c) * 0.1f;
    *(float *)(temp_v0 + 0x160) = *(float *)(temp_v0 + 0x160) * 0.1f;
    *(float *)(temp_v0 + 0x164) = *(float *)(temp_v0 + 0x164) * 0.1f;
    *(unsigned int *)(temp_v0 + 0x168) = 0x42c80000;
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x138);
    *(unsigned int *)(temp_v0 + 0x40) = *(unsigned int *)(temp_v0 + 0x13c);
    *(unsigned int *)(temp_v0 + 0x44) = *(unsigned int *)(temp_v0 + 0x140);
    *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x138);
    *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x13c);
    *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x140);
    *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(temp_v0 + 0x144);
    *(unsigned int *)(temp_v0 + 0xb8) = 0x1a;
    *(unsigned int *)(temp_v0 + 0xbc) = 0;
    return;
  }
  return;
}

} /* extern "C" */
