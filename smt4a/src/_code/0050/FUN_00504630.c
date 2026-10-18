/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00504630` (_code @ 0x504630, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00504630_arg0 fn_00504630_arg0;
struct fn_00504630_arg0 {
    unsigned char pad_0x0[0x8c];
    uint field_0x8c; /* +0x8c */
    unsigned char pad_0x90[0x200];
    uint field_0x290; /* +0x290 */
    int field_0x294; /* +0x294 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;


int FUN_00504630(fn_00504630_arg0 *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = param_1->field_0x290;
  temp_v4 = 0;
  temp_v2 = temp_v1;
  do {
    temp_v6 = temp_v2;
    if (temp_v2 >= 0x101) {
      temp_v6 = 0x100;
    }
    temp_v5 = temp_v4 + 8 + temp_v6 * 4;
    temp_v4 = temp_v5 - 4;
    if ((temp_v6 & 1) == 0) {
      temp_v4 = temp_v5;
    }
    temp_v2 = temp_v2 - temp_v6;
  } while (temp_v2 != 0);
  temp_v5 = temp_v4 + 8;
  if (0 < param_1->field_0x294) {
    temp_v5 = 0;
    do {
      temp_v2 = temp_v1;
      if (temp_v1 >= 0x101) {
        temp_v2 = 0x100;
      }
      temp_v3 = temp_v5 + 8 + temp_v2 * 4;
      temp_v5 = temp_v3 - 4;
      if ((temp_v2 & 1) == 0) {
        temp_v5 = temp_v3;
      }
      temp_v1 = temp_v1 - temp_v2;
    } while (temp_v1 != 0);
    temp_v5 = temp_v5 + temp_v4 + 0x10;
  }
  temp_v1 = param_1->field_0x8c;
  temp_v2 = temp_v1;
  if (temp_v1 >= 0x201) {
    temp_v2 = 0x200;
  }
  temp_v4 = 0;
  do {
    temp_v6 = temp_v2;
    if (temp_v2 >= 0x101) {
      temp_v6 = 0x100;
    }
    temp_v3 = temp_v4 + 8 + temp_v6 * 4;
    temp_v4 = temp_v3 - 4;
    if ((temp_v6 & 1) == 0) {
      temp_v4 = temp_v3;
    }
    temp_v2 = temp_v2 - temp_v6;
  } while (temp_v2 != 0);
  temp_v3 = temp_v4 + 0x10;
  if (0 < param_1->field_0x294) {
    temp_v3 = 0;
    do {
      temp_v2 = temp_v1;
      if (temp_v1 >= 0x101) {
        temp_v2 = 0x100;
      }
      temp_v0 = temp_v3 + 8 + temp_v2 * 4;
      temp_v3 = temp_v0 - 4;
      if ((temp_v2 & 1) == 0) {
        temp_v3 = temp_v0;
      }
      temp_v1 = temp_v1 - temp_v2;
    } while (temp_v1 != 0);
    temp_v3 = temp_v3 + temp_v4 + 0x20;
  }
  return temp_v3 + temp_v5 + 8;
}
