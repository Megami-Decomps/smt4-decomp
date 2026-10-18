/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef790` (_code @ 0x2ef790, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ef790_arg0 fn_002ef790_arg0;
struct fn_002ef790_arg0 {
    unsigned char pad_0x0[0x10];
    uint field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    int field_0x20; /* +0x20 */
};

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eb330. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eba9c(unsigned int *, unsigned int *);


unsigned long long FUN_002ef790(fn_002ef790_arg0 *param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  
  temp_v11 = 0;
  temp_v10 = 0;
  temp_v0 = FUN_002eba9c(&param_1->field_0x10,(unsigned int *)&temp_v10);
  if (temp_v0 != 0) {
    temp_v3 = param_1->field_0x14;
    temp_v2 = param_1->field_0x10;
    FUN_002eb588(&temp_v4);
    temp_v0 = temp_v2 - temp_v4;
    if ((int)((temp_v3 - temp_v5) - (unsigned int)(temp_v2 < temp_v4)) < 0 ==
        (SBORROW4(temp_v3,temp_v5) != SBORROW4(temp_v3 - temp_v5,(unsigned int)(temp_v2 < temp_v4))))
    goto LAB_002ef7c2;
    temp_v1 = 1;
  }
  else {
LAB_002ef7c2:
    temp_v0 = param_1->field_0x20;
    if (*(char *)(temp_v0 + 0x30) != '\0') {
      FUN_002eb330(&temp_v6);
      FUN_002eb588(&temp_v8);
      temp_v0 = temp_v6 - temp_v8;
      if ((int)((temp_v7 - temp_v9) - (unsigned int)(temp_v6 < temp_v8)) < 0 !=
          (SBORROW4(temp_v7,temp_v9) != SBORROW4(temp_v7 - temp_v9,(unsigned int)(temp_v6 < temp_v8)))
         ) {
        temp_v1 = 1;
        return romwright_piece_4_4(temp_v0,temp_v1);
      }
    }
    temp_v1 = 0;
  }
  return romwright_piece_4_4(temp_v0,temp_v1);
}
