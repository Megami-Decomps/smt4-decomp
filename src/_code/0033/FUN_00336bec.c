/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336bec` (_code @ 0x336bec, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern unsigned char LAB_0019d874; /* 0x19d874 */
extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439a20; /* 0x439a20 */
extern unsigned int DAT_00439a24; /* 0x439a24 */
extern unsigned int DAT_00439a28; /* 0x439a28 */
extern unsigned int DAT_00439a2c; /* 0x439a2c */
extern unsigned int DAT_00439a30; /* 0x439a30 */
extern unsigned int DAT_00439a34; /* 0x439a34 */
extern unsigned int DAT_00439a38; /* 0x439a38 */

/* Supplied declaration required: FUN_00240530. */
/* Supplied declaration required: FUN_0024057c. */
/* Supplied declaration required: FUN_00240614. */
/* Supplied declaration required: FUN_0024082c. */
/* Supplied declaration required: FUN_002451c4. */
/* Supplied declaration required: FUN_002b7bca. */


void FUN_00336bec(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  short temp_v10;
  short temp_v11;
  int aiStack_f8 [50];
  int temp_v12;
  int temp_v13;
  
  *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) | 0x4000;
  temp_v13 = param_1;
  FUN_00240614(DAT_00435d18);
  temp_v9 = 0;
  piVar8 = (int *)(temp_v13 + 0x1e98);
  temp_v6 = 4;
  do {
    temp_v4 = temp_v6 + 1;
    temp_v6 = *piVar8 + temp_v6 * 0x114;
    temp_v7 = *(unsigned int *)(temp_v6 + 0x50);
    if ((temp_v7 & 1) != 0 && (temp_v7 & 2) != 0) {
      aiStack_f8[temp_v9] = temp_v6;
      temp_v9 = temp_v9 + 1;
    }
    temp_v6 = temp_v4;
  } while (temp_v4 < 0x36);
  FUN_002b7bca(aiStack_f8,temp_v9,4,&LAB_0019d874);
  temp_v3 = 0;
  temp_v10 = 0;
  temp_v6 = 0;
  if (temp_v6 < temp_v9) {
    do {
      temp_v4 = aiStack_f8[temp_v6];
      if (((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
         ((*(unsigned short *)(temp_v4 + 0x58) & 0x800) == 0)) {
        *(unsigned short *)(temp_v4 + 0x58) = *(unsigned short *)(temp_v4 + 0x58) | 0x800;
        if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
          temp_v11 = (short)DAT_00439a2c;
          temp_v0 = (short)DAT_00439a30;
          temp_v1 = (short)DAT_00439a34;
        }
        else {
          temp_v11 = (short)DAT_00439a20;
          temp_v0 = (short)DAT_00439a24;
          temp_v1 = (short)DAT_00439a28;
        }
        temp_v2 = (short)DAT_00439a38;
        temp_v12 = (int)temp_v0;
        temp_v5 = (int)temp_v1;
        FUN_0024057c(temp_v13,temp_v4,0,0,temp_v5);
        FUN_002451c4((int)temp_v10 * (int)temp_v11 + temp_v12 + temp_v2,0,temp_v4,0xff,temp_v5,0);
        temp_v8 = 6;
        if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
          temp_v8 = 7;
        }
        FUN_00240530((int)temp_v10 * (int)temp_v11 + (int)temp_v2,0,temp_v4,temp_v8,0xd);
        temp_v10 = temp_v10 + 1;
        if (!temp_v3) {
          temp_v3 = 1;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v9);
  }
  FUN_0024082c(DAT_004342c8,0x78);
  return;
}
