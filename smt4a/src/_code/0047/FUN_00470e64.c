/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00470e64` (_code @ 0x470e64, 0x318 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00470e64_arg0 fn_00470e64_arg0;
struct fn_00470e64_arg0 {
    unsigned char pad_0x0[0x310];
    int field_0x310; /* +0x310 */
    unsigned char pad_0x314[0x4];
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x138];
    int field_0x454; /* +0x454 */
    int field_0x458; /* +0x458 */
    int field_0x45c; /* +0x45c */
};

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
} param_1_stack;

extern int DAT_00570260; /* 0x570260 */
extern unsigned int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00192748(void);
extern unsigned int FUN_00192798(unsigned int);
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: FUN_001b2ebc. */
extern int FUN_001b315c(void);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
extern int FUN_001d109c(void);
/* Supplied declaration required: FUN_002e3494. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0030cb44. */
/* Supplied declaration required: FUN_00429f38. */
extern int FUN_0046bc7c(fn_00470e64_arg0 *, unsigned int);
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00470e64(fn_00470e64_arg0 *param_1)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  char *pcVar9;
  int temp_v7;
  unsigned char temp_v8 [136];
  unsigned int *temp_v9;
  int temp_v10;
  unsigned char temp_v11 [136];
  int temp_v12;
  int *temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  
  if (param_1->field_0x458 != 0) {
    FUN_002e3494();
    param_1->field_0x458 = 0;
  }
  if (param_1->field_0x454 != 0) {
    FUN_002e3494();
    param_1->field_0x454 = 0;
  }
  piVar1 = &param_1->field_0x45c;
  param_1->field_0x45c = 0;
  temp_v13 = piVar1;
  FUN_00429f38();
  if (piVar1 == (int *)0x0) {
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
    return;
  }
  temp_v0 = FUN_001d109c();
  if (temp_v0 != 0) {
    FUN_002e6354(temp_v11,0x80);
    temp_v0 = FUN_0046bc7c(param_1,0x37);
    if (0 < temp_v0) {
      temp_v7 = temp_v0 * 0x10;
      FUN_0030cb44();
      if (temp_v7 != 0) {
        FUN_002f5020();
      }
      param_1->field_0x454 = temp_v7;
    }
    temp_v12 = param_1->field_0x454;
    FUN_002e6354(temp_v8,0x80);
    temp_v7 = 0;
    temp_v15 = 0;
    if (temp_v15 < param_1->field_0x310) {
      do {
        temp_v14 = param_1->field_0x318 + temp_v15 * 0x50;
        temp_v1 = FUN_001b315c();
        if (temp_v1 != 0) {
          temp_v2 = temp_v14;
          FUN_001b31ac();
          temp_v3 = temp_v14;
          FUN_001b31e0();
          temp_v5 = 0;
          if (temp_v3 != 0) {
            temp_v10 = temp_v14 + 0x24;
            do {
              pcVar9 = (char *)(temp_v2 + temp_v5 * 0x40);
              if (*pcVar9 == '7') {
                if ((temp_v0 <= temp_v7) || (temp_v12 == 0)) goto LAB_00471070;
                temp_v9 = (unsigned int *)(temp_v12 + temp_v7 * 0x10);
                rt_memcpy_w(temp_v9,*(int *)(temp_v14 + 0x4c) + temp_v5 * 0x10,0xe);
                FUN_00100388(temp_v8,"%s/%s",temp_v10,pcVar9 + 1);
                temp_v4 = DAT_0057027c;
                FUN_001b2ebc(DAT_0057027c,temp_v8,0,temp_v9 + 2,1,0x80,0);
                temp_v7 = temp_v7 + 1;
                *temp_v9 = temp_v4;
                *(unsigned char *)(temp_v9 + 3) = 1;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < temp_v3);
          }
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < param_1->field_0x310);
    }
LAB_00471070:
    temp_v7 = 0;
    if (0 < temp_v0) {
      do {
        temp_v1 = *(int *)(param_1->field_0x454 + temp_v7 * 0x10);
        if (temp_v1 != 0) {
          FUN_001a6f60(temp_v1,0);
          temp_v1 = FUN_00192748();
          *temp_v13 = param_1->field_0x45c + temp_v1;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v0);
    }
    temp_v7 = 0;
    if (param_1->field_0x45c != 0) {
      temp_v1 = param_1->field_0x45c * 0xc;
      FUN_0030cb44();
      temp_v6 = 0;
      param_1->field_0x458 = temp_v1;
      if (0 < temp_v0) {
        do {
          temp_v1 = *(int *)(param_1->field_0x454 + temp_v6 * 0x10);
          if (temp_v1 != 0) {
            FUN_001a6f60(temp_v1,0);
            temp_v4 = FUN_001a6f60(temp_v1,0);
            temp_v1 = FUN_00192748();
            if (temp_v1 != 0) {
              temp_v4 = FUN_00192798(temp_v4);
              nnnstdMemCpy(param_1->field_0x458 + temp_v7 * 0xc,temp_v4,temp_v1 * 0xc);
              temp_v7 = temp_v7 + temp_v1;
            }
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < temp_v0);
      }
    }
  }
  return;
}
