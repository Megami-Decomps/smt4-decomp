/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00400564` (_code @ 0x400564, 0x2c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00400564_arg2 fn_00400564_arg2;
struct fn_00400564_arg2 {
    unsigned char pad_0x0[0x23];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0xb];
    byte field_0x2f; /* +0x2f */
    unsigned char pad_0x30[0x8];
    byte field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x1];
    ushort field_0x3a; /* +0x3a */
    uint field_0x3c; /* +0x3c */
};

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001801a4(void);
extern int FUN_001ab854(int);
extern int FUN_00228ab0(void);
extern int FUN_002919a4(void);
extern int FUN_00291e14(void);
extern int FUN_002b4dcc(int);
/* Supplied declaration required: FUN_002b4e7c. */
/* Supplied declaration required: FUN_003ff524. */
extern int FUN_003ff5b8(unsigned int);
extern int FUN_003ff888(void);


unsigned int FUN_00400564(int param_1,int param_2,fn_00400564_arg2 *param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [2];
  unsigned short temp_v9 [2];
  
  temp_v7 = 0;
  temp_v6 = (unsigned int)((param_3->field_0x3a & 0xfff) != 0);
  temp_v4 = 0;
  if ((param_3->field_0x3c & 0x7f) != 0) {
    temp_v6 = temp_v6 | 4;
  }
  if ((param_3->field_0x38 & 4) != 0) {
    temp_v6 = temp_v6 | 0x2000000;
  }
  else if (param_3->field_0x23 == 7 || param_3->field_0x23 == 9) {
    temp_v6 = temp_v6 | 0x1000000;
  }
  if (param_3->field_0x2f == 4) {
    temp_v6 = temp_v6 | 0x4000000;
  }
  if ((param_1 >= 0) || (temp_v2 = FUN_00291e14(), temp_v2 != 0)) {
    if ((param_1 < 0) && (temp_v2 = FUN_00291e14(), temp_v2 != 0)) {
      temp_v2 = FUN_002919a4();
    }
    else if (param_2 != 0) {
      temp_v2 = FUN_00228ab0();
    }
    else {
      temp_v2 = FUN_001ab854(param_1);
    }
    if (temp_v2 == 0) {
      return 3;
    }
    if ((((temp_v6 & 1) != 0) && ((*(unsigned short *)(temp_v2 + 0x60) & 0x402) == 0)) &&
       (temp_v3 = FUN_002b4dcc(temp_v2), temp_v3 != *(short *)(temp_v2 + 0x2a))) {
      temp_v4 = 1;
    }
    if ((temp_v6 & 4) != 0) {
      temp_v8[0] = 0;
      FUN_003ff524(temp_v8,param_3->field_0x3c & 0x7f);
      if ((temp_v8[0] & *(unsigned short *)(temp_v2 + 0x60)) != 0) {
        temp_v4 = temp_v4 | 4;
      }
      if ((temp_v4 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v4 = temp_v4 | 1;
        }
      }
      else if ((temp_v4 & 1) != 0) {
        temp_v9[0] = 0;
        FUN_003ff524(temp_v9,param_3->field_0x3c & 0x7f);
        temp_v5 = temp_v4;
        if ((((temp_v9[0] & 2) != 0) ||
            (temp_v5 = temp_v4 | 4, temp_v1 = temp_v4 & 1, temp_v4 = temp_v5, temp_v1 != 0)) &&
           (temp_v4 = temp_v5, (param_3->field_0x3c & 0x7f) == 0x1b)) {
          temp_v4 = temp_v5 | 4;
        }
      }
    }
    if ((temp_v6 & 0x4000000) != 0) {
      temp_v0 = *(short *)(temp_v2 + 0x60);
      if (temp_v0 == 0) {
        temp_v4 = temp_v4 | 0x4000000;
      }
    }
  }
  else {
    temp_v2 = FUN_001801a4();
    if ((((temp_v6 & 1) != 0) && ((*(unsigned short *)(temp_v2 + 0x5e) & 2) == 0)) &&
       (temp_v3 = temp_v2, FUN_002b4e7c(), temp_v3 != *(short *)(temp_v2 + 0x2a))) {
      temp_v4 = 1;
    }
    if ((temp_v6 & 4) != 0) {
      temp_v8[0] = 0;
      FUN_003ff524(temp_v8,param_3->field_0x3c & 0x7f);
      if ((temp_v8[0] & *(unsigned short *)(temp_v2 + 0x5e)) != 0) {
        temp_v4 = temp_v4 | 4;
      }
      if ((temp_v4 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v4 = temp_v4 | 1;
        }
      }
      else if ((temp_v4 & 1) != 0) {
        temp_v9[0] = 0;
        FUN_003ff524(temp_v9,param_3->field_0x3c & 0x7f);
        temp_v5 = temp_v4;
        if ((((temp_v9[0] & 2) != 0) ||
            (temp_v5 = temp_v4 | 4, temp_v1 = temp_v4 & 1, temp_v4 = temp_v5, temp_v1 != 0)) &&
           (temp_v4 = temp_v5, (param_3->field_0x3c & 0x7f) == 0x1b)) {
          temp_v4 = temp_v5 | 4;
        }
      }
    }
    if ((temp_v6 & 0x4000000) != 0) {
      temp_v0 = *(short *)(temp_v2 + 0x5e);
      if (temp_v0 == 0) {
        temp_v4 = temp_v4 | 0x4000000;
      }
    }
  }
  if (((temp_v6 & 0x1000000) != 0) && (temp_v2 = FUN_003ff5b8(0), temp_v2 != 0)) {
    temp_v4 = temp_v4 | 0x1000000;
  }
  if (((temp_v6 & 0x2000000) != 0) && (temp_v2 = FUN_003ff888(), temp_v2 != 0)) {
    temp_v4 = temp_v4 | 0x2000000;
  }
  if (temp_v6 != temp_v4) {
    temp_v7 = 3;
  }
  return temp_v7;
}
