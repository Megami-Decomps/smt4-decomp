/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285f14` (_code @ 0x285f14, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */
extern unsigned int DAT_0043e2b0; /* 0x43e2b0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_0033f90c. */
/* Supplied declaration required: FUN_0033f99c. */


void FUN_00285f14(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  unsigned int temp_v8 [8];
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  char acStack_40 [28];
  
  temp_v1 = DAT_0043e2ac;
  temp_v5 = DAT_0043e2ac + 0x88;
  puVar7 = (unsigned char *)(DAT_0043e2ac + 0x24bb1);
  temp_v0 = *puVar7;
  temp_v6 = *(unsigned int *)(DAT_0043e2ac + 0x8c);
  temp_v10 = FUN_002c0ba8(0x556);
  temp_v11 = FUN_002c0ba8(0x557);
  temp_v3 = FUN_002c0ba8(0x421);
  temp_v7 = romwright_piece_4_4(*(unsigned int *)(temp_v1 + 0x1f4dc),temp_v6);
  temp_v12 = temp_v3;
  FUN_0033f90c();
  temp_v4 = 0;
  temp_v8[4] = 0x2a6;
  temp_v8[0] = 0x2a2;
  temp_v8[1] = 0x2a3;
  temp_v8[2] = 0x2a4;
  temp_v8[3] = 0x2a5;
  temp_v9 = temp_v3;
  do {
    temp_v2 = FUN_002c0ba8(temp_v8[temp_v4]);
    acStack_40[temp_v4] = temp_v2;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  FUN_002bcf58(temp_v5,DAT_0043e2b0,0x24d28);
  *(int *)(temp_v1 + 0x1f4dc) = (int)((unsigned long long)temp_v7 >> 0x20);
  FUN_0033f99c(temp_v9);
  if (param_1 != 1) {
    if (param_1 == 2) {
      temp_v4 = 0;
      do {
        if (acStack_40[temp_v4] != '\0') {
          FUN_002899c4(temp_v8[temp_v4],1);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 5);
    }
  }
  else {
    *(int *)(DAT_0043e2ac + 0x8c) = (int)temp_v7;
    *puVar7 = temp_v0;
    if (temp_v10 != 0) {
      FUN_002899c4(0x556,1);
    }
    if (temp_v11 != 0) {
      FUN_002899c4(0x557,1);
    }
    if (temp_v12 != 0) {
      FUN_002899c4(0x421,1);
    }
  }
  FUN_002c4360(temp_v9);
  return;
}
