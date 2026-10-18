/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317cdc` (_code @ 0x317cdc, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_001dffbc(); /* 0x1dffbc */
extern int FUN_001e0138(); /* 0x1e0138 */
extern int FUN_002db938(); /* 0x2db938 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00294334(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b087c. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


char * FUN_00317cdc(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  float temp_v2;
  char *pcVar5;
  unsigned int in_s0;
  unsigned int in_s1;
  float temp_v3;
  unsigned long long temp_v4;
  float temp_v5;
  
  temp_v4 = romwright_piece_4_4(in_s1,in_s0);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x48,1);
  FUN_002c4b30(puVar1,0x48);
  temp_v5 = 0.0f;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0;
  puVar1[4] = 0x3e800000;
  *(unsigned char *)(puVar1 + 5) = 0;
  temp_v0 = param_1 & 0xffff;
  *(unsigned char *)((int)puVar1 + 0x17) = 0;
  FUN_002b087c();
  puVar1[0xe] = (int)*(short *)(temp_v0 + 0x88);
  *(unsigned char *)(puVar1 + 0x11) = 1;
  temp_v1 = FUN_002c1f28();
  if (temp_v1 != 0) {
    puVar1[1] = 1;
  }
  else {
    temp_v0 = FUN_00294334(puVar1[0xe],1);
    puVar1[0xd] = temp_v0;
    puVar1[1] = 2;
  }
  temp_v3 = (float)temp_v4;
  temp_v2 = temp_v3;
  if (0xc07fffff < (unsigned int)temp_v3) {
    temp_v2 = 2.24208e-44f;
  }
  *puVar1 = -param_1 & 0xffff;
  if (0xc07fffff >= (unsigned int)temp_v3) {
    if ((unsigned int)temp_v3 >= 0xc0400000) {
      temp_v2 = 4.2039e-45f;
    }
    else if ((int)temp_v3 >= 0x40400000) {
      temp_v2 = 2.38221e-44f;
    }
    else if ((int)temp_v3 >= 0x3fc00000) {
      temp_v2 = 5.60519e-45f;
    }
    else if (temp_v3 < temp_v5) {
      temp_v2 = 2.52234e-44f;
    }
    else {
      temp_v2 = 7.00649e-45f;
    }
  }
  puVar1[0xf] = (unsigned int)temp_v2;
  puVar1[0xb] = (unsigned int)temp_v3;
  puVar1[0xc] = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
  *(unsigned char *)((int)puVar1 + 0x16) = 1;
  *(unsigned char *)((int)puVar1 + 0x15) = 0;
  pcVar5 = "EVE_BtlTex";
  FUN_002c5978("EVE_BtlTex",2,0,0,FUN_001dffbc,FUN_002db938,puVar1);
  FUN_002c4c00("EVE_BtlTexDraw",0x6f,0,0,FUN_001e0138,0,puVar1,pcVar5);
  return pcVar5;
}
