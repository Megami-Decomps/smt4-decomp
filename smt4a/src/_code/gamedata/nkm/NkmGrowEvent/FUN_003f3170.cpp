/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3170` (_code @ 0x3f3170, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(...);
int FUN_001630d4(...);
int FUN_00184310(...);
int FUN_0019a5a0(...);
int FUN_003c3f1c(...);
int FUN_004bcd90(...);
int FUN_004bd2b4(...);
int FUN_004bd6b0(...);

typedef struct fn_003f3170_arg0 fn_003f3170_arg0;
struct fn_003f3170_arg0 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x1e];
    ushort field_0x62; /* +0x62 */
};

/* stack frame of param_1: 10 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_003d2d24; /* 0x3d2d24 */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003c3f1c. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd2b4. */
/* Supplied declaration required: FUN_004bd6b0. */


unsigned short FUN_003f3170(fn_003f3170_arg0 *param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  
  temp_v0 = 0x100;
  FUN_001630d4(0x100,0x100,0,0x3ea,1);
  temp_v1 = (unsigned int)param_1->field_0x62;
  temp_v6 = 0;
  FUN_00184310();
  temp_v5 = 0;
  do {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v5 * 2 + 0x40);
    if (temp_v2 != 0) {
      FUN_003c3f1c();
      if (temp_v6 < (*(unsigned char *)(temp_v2 + 3) & 0x1f)) {
        temp_v6 = *(unsigned char *)(temp_v2 + 3) & 0x1f;
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 8);
  temp_v5 = FUN_0014bef4(99);
  temp_v7 = param_1->field_0x34;
  uStack_3c = param_1->field_0x38;
  uStack_38 = param_1->field_0x3c;
  uStack_34 = param_1->field_0x40;
  if (temp_v5 < 3) {
    temp_v6 = temp_v6 + 1;
  }
  temp_v8 = *(unsigned short *)(temp_v1 + 0x52);
  temp_v9 = *(unsigned short *)(temp_v1 + 0x56);
  temp_v10 = *(unsigned short *)(temp_v1 + 0x5a);
  temp_v11 = *(unsigned short *)(temp_v1 + 0x5e);
  temp_v12 = *(unsigned short *)(temp_v1 + 0x62);
  temp_v13 = *(unsigned short *)(temp_v1 + 0x66);
  temp_v14 = *(unsigned short *)(temp_v1 + 0x6a);
  temp_v15 = *(unsigned short *)(temp_v1 + 0x6e);
  FUN_0010063a(&temp_v7,0x10,2,&LAB_003d2d24);
  temp_v5 = 0;
  do {
    temp_v1 = 1;
    do {
      temp_v2 = temp_v1;
      FUN_003c3f1c();
      if (((*(unsigned char *)(temp_v2 + 3) & 0x80) != 0) && ((*(unsigned char *)(temp_v2 + 3) & 0x1f) == temp_v6)) {
        temp_v3 = 0;
        do {
          temp_v2 = (unsigned int)*(unsigned short *)((int)&temp_v7 + temp_v3 * 2);
          if (temp_v2 == temp_v1) goto LAB_003f32c0;
        } while ((temp_v2 != 0) && (temp_v3 = temp_v3 + 1, temp_v3 < 0x10));
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(short *)(temp_v0 + temp_v3) = (short)temp_v1;
      }
LAB_003f32c0:
      temp_v1 = (temp_v1 + 1) & 0xffff;
    } while (temp_v1 < 0x1f5);
  } while ((temp_v5 < 1) && (temp_v6 = temp_v6 - 1, -1 < (int)temp_v6));
  temp_v4 = 0;
  if (0 < temp_v5) {
    temp_v5 = FUN_0014bef4((temp_v5 - 1U) & 0xffff);
    temp_v3 = 0;
    do {
      if (*(short *)((int)&param_1->field_0x34 + temp_v3 * 2) == 0) {
        temp_v4 = *(unsigned short *)(temp_v0 + temp_v5 * 2);
        FUN_004bd6b0(param_1,temp_v4);
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
  }
  FUN_004bcd90(param_1);
  FUN_004bd2b4(param_1);
  FUN_0019a5a0(temp_v0);
  return temp_v4;
}

} /* extern "C" */
