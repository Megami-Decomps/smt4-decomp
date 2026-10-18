/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b508` (_code @ 0x13b508, 0x2a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_8_stack;

extern int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */
extern unsigned int DAT_0044e378; /* 0x44e378 */
extern unsigned int DAT_0044e37c; /* 0x44e37c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0013b014. */
extern int FUN_0013b1e0(void);
extern unsigned int *FUN_0013b364(unsigned int *, unsigned int, unsigned int *, unsigned char *, int, unsigned int *, int *);
/* Supplied declaration required: FUN_002a84d0. */
/* Supplied declaration required: FUN_002a84dc. */
/* Supplied declaration required: FUN_002ad45c. */
extern unsigned int FUN_002bb440(void);
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */


unsigned int *
FUN_0013b508(unsigned int *param_1,unsigned int *param_2,unsigned char *param_3,int param_4,
            unsigned int *param_5,int *param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 9 native warning(s); review required */
  long long temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int uStack_48;
  int uStack_44;
  unsigned char temp_v10 [4];
  unsigned int temp_v11 [2];
  unsigned int *puStack_34;
  unsigned int *puStack_30;
  unsigned char *puStack_2c;
  int temp_v12;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  puStack_2c = param_3;
  temp_v12 = param_4;
  if (param_7 == DAT_0044e370 && param_8 == DAT_0044e374) {
    FUN_0013b014(param_1,param_2,param_3,param_4,param_5,param_6,0);
    return param_1;
  }
  if (DAT_0044e378 != param_7 || DAT_0044e37c != param_8) {
    temp_v7 = param_8 ^ DAT_0044e374;
    temp_v8 = (param_7 ^ DAT_0044e370) | temp_v7;
    if (temp_v8 != 0) {
      software_interrupt(0x28);
    }
    else {
      temp_v8 = 0;
      temp_v7 = 0;
    }
  }
  else {
    temp_v8 = 0;
    temp_v7 = 0;
  }
  while( 1 ) {
    temp_v5 = temp_v12;
    temp_v1 = FUN_0013b1e0();
    if (temp_v1 == 0) {
      puVar9 = (unsigned int *)0xc8a0cfef;
    }
    else {
      temp_v1 = FUN_002a84dc();
      if (temp_v1 != 0) {
        temp_v2 = FUN_002a84dc();
        *param_2 = temp_v2;
        FUN_002ad45c(0);
        FUN_002a84d0();
        if (param_1 != (unsigned int *)0x0) {
          *param_1 = 0;
        }
        if (param_5 != (unsigned int *)0x0) {
          *param_5 = 0;
        }
        puVar9 = (unsigned int *)0x0;
        if (param_6 != (int *)0x0) {
          *param_6 = DAT_0044e368;
        }
      }
      else {
        puVar9 = param_1;
        if (param_1 == (unsigned int *)0x0) {
          puVar9 = (unsigned int *)&uStack_48;
        }
        puVar4 = param_2;
        if (param_2 == (unsigned int *)0x0) {
          puVar4 = (unsigned int *)&uStack_44;
        }
        if (param_3 == (unsigned char *)0x0) {
          temp_v5 = 0;
        }
        puVar5 = param_3;
        if (param_3 == (unsigned char *)0x0 || temp_v5 == 0) {
          puVar5 = temp_v10;
        }
        puVar10 = param_5;
        if (param_5 == (unsigned int *)0x0) {
          puVar10 = temp_v11;
        }
        temp_v9 = 0;
        piVar11 = param_6;
        if (param_6 == (int *)0x0) {
          piVar11 = &temp_v9;
        }
        FUN_002bb6b8();
        temp_v2 = FUN_002bb440();
        puVar9 = (unsigned int *)FUN_0013b364(puVar9,temp_v2,puVar4,puVar5,temp_v5,puVar10,piVar11);
        FUN_002bb648();
        if (temp_v9 != 0) {
          software_interrupt(0x23);
        }
      }
      FUN_002a84d0();
    }
    if (-1 < (int)puVar9) break;
    if (puVar9 == (unsigned int *)0xc8a0cfef) {
      if (param_8 == DAT_0044e37c && param_7 == DAT_0044e378) {
        return (unsigned int *)0xc8a0cfef;
      }
      temp_v3 = (param_8 ^ DAT_0044e374) | (param_7 ^ DAT_0044e370);
      if (temp_v3 != 0) {
        software_interrupt(0x28);
        temp_v4 = (param_7 ^ DAT_0044e370) - (temp_v7 + (temp_v3 < temp_v8));
        temp_v0 = (unsigned long long)(temp_v3 - temp_v8) * 3 +
                (((unsigned long long)
                  (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                        (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
                (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) +
                romwright_piece_4_4(temp_v4 * 3,(int)((unsigned long long)(temp_v3 - temp_v8) * 0xbad34aee >> 0x20));
        temp_v5 = (int)((unsigned long long)temp_v0 >> 0x20);
        temp_v6 = param_7 < (unsigned int)temp_v0;
        if ((int)(param_8 - (temp_v5 + (unsigned int)temp_v6)) < 0 !=
            (SBORROW4(param_8,temp_v5) != SBORROW4(param_8 - temp_v5,(unsigned int)temp_v6))) {
          return (unsigned int *)0xc8a0cfef;
        }
      }
    }
    FUN_002bb490(10000000,0);
  }
  return puVar9;
}
