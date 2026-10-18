/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f7d8` (_code @ 0x10f7d8, 0xa6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0010f57d; /* 0x10f57d */
extern unsigned char LAB_0010f884; /* 0x10f884 */
extern unsigned char LAB_0010f91d; /* 0x10f91d */

/* Supplied declaration required: FUN_00117e6a. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9afe. */
extern unsigned int FUN_002ea100(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */


void FUN_0010f7d8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int iStack_38;
  unsigned int uStack_34;
  unsigned int temp_v5;
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [16];
  
  (**(romwright_code **)(**(int **)(param_1 + 0xd8) + 0xc))
            (*(int **)(param_1 + 0xd8),*(unsigned int *)(param_1 + 0x6c));
  temp_v0 = FUN_002ea100(temp_v6,*(unsigned int *)(param_1 + 0x88));
  temp_v5 = *(unsigned int *)(param_1 + 0xb8);
  uStack_34 = *(unsigned int *)(param_1 + 0xb4);
  iStack_38 = param_1 + 0xac;
  temp_v4 = param_1 + 0x90;
  temp_v2 = param_1 + 0x158;
  temp_v3 = *(unsigned int *)(param_1 + 0x8c);
  temp_v1 = *(int *)(param_1 + 0xd8);
  FUN_00117e6a(temp_v1,temp_v2,param_1 + 0x80,temp_v0);
  FUN_002e9318(temp_v6);
  if (temp_v1 != 1) {
    FUN_002ea41e(&temp_v3,temp_v2);
    FUN_002e9afe(param_1 + 200,&temp_v3);
    temp_v0 = FUN_002ea3c0(temp_v7,&LAB_0010f57d,0,&LAB_0010f884);
    FUN_002ea3d0(param_1,temp_v0);
  }
  else {
    FUN_002f7cb0(param_1);
    temp_v1 = FUN_002e760a(0x10);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_002ea3c0(temp_v1,&LAB_0010f91d,0,&LAB_0010f884);
    }
    FUN_002f7cba(param_1,temp_v2,temp_v0);
  }
  return;
}
