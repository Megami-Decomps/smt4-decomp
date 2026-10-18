/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b0f8` (_code @ 0x39b0f8, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_00289d8c(); /* 0x289d8c */
extern int FUN_00289f10(); /* 0x289f10 */
extern int FUN_0034dab0(); /* 0x34dab0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_00409fe8(int, unsigned int);


char * FUN_0039b0f8(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 10 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  char *pcVar3;
  unsigned int in_s0;
  unsigned int in_s1;
  float temp_v1;
  unsigned long long temp_v2;
  float temp_v3;
  
  temp_v2 = romwright_piece_4_4(in_s1,in_s0);
  piVar1 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,0x48,1);
  FUN_002e6354();
  temp_v3 = 0.0f;
  piVar1[2] = 0x3f800000;
  piVar1[3] = 0;
  piVar1[4] = 0x3e800000;
  *(unsigned char *)(piVar1 + 5) = 0;
  *(unsigned char *)((int)piVar1 + 0x17) = 0;
  temp_v0 = param_1;
  FUN_00283498();
  piVar1[0xe] = -(unsigned int)*(unsigned short *)(temp_v0 + 0x22);
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    piVar1[1] = 1;
  }
  else {
    temp_v0 = FUN_00409fe8(piVar1[0xe],1);
    piVar1[0xd] = temp_v0;
    piVar1[1] = 2;
  }
  temp_v1 = (float)temp_v2;
  *piVar1 = param_1;
  if ((unsigned int)temp_v1 >= 0xc0800000) {
    temp_v0 = 0x11;
  }
  else if ((unsigned int)temp_v1 >= 0xc0400000) {
    temp_v0 = 3;
  }
  else if ((int)temp_v1 >= 0x40400000) {
    temp_v0 = 0x12;
  }
  else if ((int)temp_v1 >= 0x3fc00000) {
    temp_v0 = 4;
  }
  else if (temp_v1 < temp_v3) {
    temp_v0 = 0x13;
  }
  else {
    temp_v0 = 5;
  }
  piVar1[0xf] = temp_v0;
  piVar1[0xb] = (int)temp_v1;
  piVar1[0xc] = (int)((unsigned long long)temp_v2 >> 0x20);
  *(unsigned char *)((int)piVar1 + 0x16) = 1;
  *(unsigned char *)((int)piVar1 + 0x15) = 0;
  pcVar3 = "EVE_BtlTex";
  FUN_0014e38c("EVE_BtlTex",4,0,0,FUN_00289d8c,FUN_0034dab0,piVar1);
  FUN_0015155c("EVE_BtlTexDraw",0x71,0,0,FUN_00289f10,0,piVar1,pcVar3);
  return pcVar3;
}
