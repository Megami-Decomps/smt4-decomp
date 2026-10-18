/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023db14` (_code @ 0x23db14, 0x280 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023db14_arg2 fn_0023db14_arg2;
struct fn_0023db14_arg2 {
    unsigned char pad_0x0[0x23];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0xb];
    byte field_0x2f; /* +0x2f */
    unsigned char pad_0x30[0x5];
    byte field_0x35; /* +0x35 */
    ushort field_0x36; /* +0x36 */
    uint field_0x38; /* +0x38 */
};

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0023dd94. */
extern int FUN_0025452c(void);
/* Supplied declaration required: FUN_00262664. */
/* Supplied declaration required: FUN_00269e54. */
extern int FUN_002a89e4(void);
extern int FUN_002b66ec(void);
extern int FUN_0033fd64(unsigned int);
extern int FUN_0033fe88(void);


unsigned int FUN_0023db14(int param_1,int param_2,fn_0023db14_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [2];
  unsigned short temp_v9 [4];
  
  temp_v7 = 0;
  temp_v4 = 0;
  temp_v6 = (unsigned int)((param_3->field_0x36 & 0xfff) != 0);
  if ((param_3->field_0x38 & 0x7f) != 0) {
    temp_v6 = temp_v6 | 4;
  }
  if ((param_3->field_0x35 & 8) != 0) {
    temp_v6 = temp_v6 | 0x2000000;
  }
  else if (param_3->field_0x23 == 7 || param_3->field_0x23 == 9) {
    temp_v6 = temp_v6 | 0x1000000;
  }
  if (param_3->field_0x2f == 4) {
    temp_v6 = temp_v6 | 0x4000000;
  }
  if (param_1 < 0) {
    temp_v2 = FUN_002b66ec();
    if ((((temp_v6 & 1) != 0) && ((*(unsigned short *)(temp_v2 + 0x72) & 2) == 0)) &&
       (temp_v3 = temp_v2, FUN_00262664(), temp_v3 != *(short *)(temp_v2 + 0x2a))) {
      temp_v4 = 1;
    }
    if ((temp_v6 & 4) != 0) {
      temp_v8[0] = 0;
      FUN_0023dd94(temp_v8,param_3->field_0x38 & 0x7f);
      if ((temp_v8[0] & *(unsigned short *)(temp_v2 + 0x72)) != 0) {
        temp_v4 = temp_v4 | 4;
      }
      if ((temp_v4 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v4 = temp_v4 | 1;
        }
      }
      else if ((temp_v4 & 1) != 0) {
        temp_v9[0] = 0;
        FUN_0023dd94(temp_v9,param_3->field_0x38 & 0x7f);
        temp_v5 = temp_v4;
        if ((((temp_v9[0] & 2) != 0) ||
            (temp_v5 = temp_v4 | 4, temp_v1 = temp_v4 & 1, temp_v4 = temp_v5, temp_v1 != 0)) &&
           (temp_v4 = temp_v5, (param_3->field_0x38 & 0x7f) == 0x11)) {
          temp_v4 = temp_v5 | 4;
        }
      }
    }
    if ((temp_v6 & 0x4000000) != 0) {
      temp_v0 = *(short *)(temp_v2 + 0x72);
      if (temp_v0 == 0) {
        temp_v4 = temp_v4 | 0x4000000;
      }
    }
  }
  else {
    if (param_2 != 0) {
      temp_v2 = FUN_0025452c();
    }
    else {
      temp_v2 = FUN_002a89e4();
    }
    if (temp_v2 == 0) {
      return 3;
    }
    if ((((temp_v6 & 1) != 0) && ((*(unsigned short *)(temp_v2 + 0x44) & 0x406) == 0)) &&
       (temp_v3 = temp_v2, FUN_00269e54(), temp_v3 != *(short *)(temp_v2 + 0x2a))) {
      temp_v4 = 1;
    }
    if ((temp_v6 & 4) != 0) {
      temp_v8[0] = 0;
      FUN_0023dd94(temp_v8,param_3->field_0x38 & 0x7f);
      if ((temp_v8[0] & *(unsigned short *)(temp_v2 + 0x44)) != 0) {
        temp_v4 = temp_v4 | 4;
      }
      if ((temp_v4 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v4 = temp_v4 | 1;
        }
      }
      else if ((temp_v4 & 1) != 0) {
        temp_v9[0] = 0;
        FUN_0023dd94(temp_v9,param_3->field_0x38 & 0x7f);
        temp_v5 = temp_v4;
        if ((((temp_v9[0] & 2) != 0) ||
            (temp_v5 = temp_v4 | 4, temp_v1 = temp_v4 & 1, temp_v4 = temp_v5, temp_v1 != 0)) &&
           (temp_v4 = temp_v5, (param_3->field_0x38 & 0x7f) == 0x11)) {
          temp_v4 = temp_v5 | 4;
        }
      }
    }
    if ((temp_v6 & 0x4000000) != 0) {
      temp_v0 = *(short *)(temp_v2 + 0x44);
      if (temp_v0 == 0) {
        temp_v4 = temp_v4 | 0x4000000;
      }
    }
  }
  if (((temp_v6 & 0x1000000) != 0) && (temp_v2 = FUN_0033fd64(0), temp_v2 != 0)) {
    temp_v4 = temp_v4 | 0x1000000;
  }
  if (((temp_v6 & 0x2000000) != 0) && (temp_v2 = FUN_0033fe88(), temp_v2 != 0)) {
    temp_v4 = temp_v4 | 0x2000000;
  }
  if (temp_v6 != temp_v4) {
    temp_v7 = 3;
  }
  return temp_v7;
}
