/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3acc` (_code @ 0x2b3acc, 0x4f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b3acc(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_s17; 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int in_cr0;
  unsigned int in_s17;
  int *temp_v5;
  unsigned int temp_v6;
  int *temp_v7;
  unsigned char temp_v8;
  
  temp_v7 = (int *)0x0;
  temp_v8 = 1;
  piVar5 = *(int **)(param_1 + 0x1c);
  do {
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    temp_v0 = temp_v6 >> 8;
    temp_v6 = temp_v6 & 0xffffff00;
    temp_v5 = piVar5;
    if (&temp_v7 != &temp_v5) {
      temp_v5 = (int *)0x0;
      temp_v6 = romwright_piece_3_1((int)temp_v0,1);
      temp_v8 = 0;
      temp_v7 = piVar5;
    }
  } while ((temp_v5 == (int *)0x0) || ((char)temp_v6 == '\0'));
  temp_v3 = *temp_v5;
  *(unsigned int *)(temp_v3 + 0x24) = in_s17;
  temp_v1 = DAT_004c6330;
  coprocessor_storelong(0,in_cr0,temp_v3 + 0xa0);
  temp_v3 = 0;
  temp_v4 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  FUN_0013b608();
  temp_v2 = *(int *)(temp_v1 + 0x28) + 1;
  *(int *)(temp_v1 + 0x28) = temp_v2;
  if ((*(int *)(temp_v1 + 0x38) != 0) &&
     ((*(char *)(temp_v4 + 1) != '\0' ||
      ((temp_v2 == *(int *)(temp_v1 + 0x20) && (*(char *)(temp_v1 + 0x3c) != '\0')))))) {
    temp_v3 = *(int *)(temp_v1 + 0x38);
  }
  if (*(char *)(temp_v4 + 2) != '\0') {
    DAT_004c62a2 = 0;
    DAT_004c62a8 = 0;
    DAT_004c62a1 = 0;
  }
  else if (temp_v2 >= *(int *)(temp_v1 + 0x20)) {
    DAT_004c62a1 = 0;
  }
  else {
    FUN_002ba2b8();
  }
  FUN_0013b618();
  if (temp_v3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
