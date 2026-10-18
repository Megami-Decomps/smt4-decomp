/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4d84` (_code @ 0x2e4d84, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char LAB_00102155; /* 0x102155 */

extern int FUN_001c53f0(void);
extern int FUN_002e3390(void);
/* Supplied declaration required: FUN_002e33f0. */
/* Supplied declaration required: FUN_002e3f68. */
extern unsigned int FUN_002e5684(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002e5694. */
/* Supplied declaration required: FUN_002e56a8. */
/* Supplied declaration required: FUN_002e56ec. */


int * FUN_002e4d84(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [8];
  int *piStack_24;
  int temp_v8;
  int iStack_1c;
  int temp_v9;
  
  *param_1 = 0;
  param_1[1] = 0;
  piStack_24 = param_1;
  temp_v8 = param_2;
  iStack_1c = param_3;
  temp_v9 = param_4;
  if (param_3 != 0) {
    temp_v0 = param_3 << 2;
    FUN_002e33f0();
  }
  else {
    temp_v0 = 0;
  }
  param_1[3] = param_3;
  param_1[2] = temp_v0;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(unsigned int *)(param_1[2] + (param_3 * 4 - 4)) = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = temp_v9;
  if (temp_v8 != 0) {
    temp_v0 = FUN_002e3390();
    FUN_002e33f0(temp_v0 + 1);
    temp_v0 = FUN_001c53f0();
    param_1[6] = temp_v0;
  }
  temp_v5 = FUN_002e5684(temp_v4,temp_v7);
  temp_v0 = 4;
  FUN_002e5694(4,6,&LAB_00102155,0x2e3f69);
  temp_v1 = param_1[1];
  if (temp_v1 >= 6) {
    temp_v1 = 6;
  }
  temp_v6 = temp_v1 << 2;
  temp_v3 = temp_v0;
  for (temp_v2 = *param_1; *param_1 + temp_v6 != temp_v2; temp_v2 = temp_v2 + 4) {
    FUN_002e56a8(temp_v3,temp_v2);
    temp_v3 = temp_v3 + 4;
  }
  for (; temp_v1 < 6; temp_v1 = temp_v1 + 1) {
    FUN_002e56a8(temp_v1 * 4 + temp_v0,temp_v5);
  }
  FUN_002e56ec(*param_1,0x2e3f69);
  *param_1 = temp_v0;
  param_1[1] = 6;
  FUN_002e3f68(temp_v4);
  return param_1;
}
