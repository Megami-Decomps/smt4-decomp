/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e63a8` (_code @ 0x2e63a8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00102e7c(...);
int FUN_002e61e8(...);

typedef struct fn_002e63a8_arg2 fn_002e63a8_arg2;
struct fn_002e63a8_arg2 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    uint field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x2c];
    uint field_0x4c; /* +0x4c */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00102e7c. */
/* Supplied declaration required: FUN_002e61e8. */
extern int returnMinusOne2(unsigned int, unsigned int);


long long FUN_002e63a8(unsigned int param_1,char *param_2,fn_002e63a8_arg2 *param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002e61e8(param_3);
  temp_v0 = *param_2;
  param_2 = param_2 + 1;
  if (temp_v0 != 'a') {
    if (temp_v0 != 'r') {
      if (temp_v0 != 'w') {
        return (unsigned long long)param_1 << 0x20;
      }
      temp_v3 = 2;
      temp_v2 = 4;
    }
    else {
      temp_v3 = 1;
      temp_v2 = 0;
    }
  }
  else {
    temp_v3 = 0x8002;
    temp_v2 = 8;
  }
  while( 1 ) {
    while( 1 ) {
      if (*param_2 != '+') break;
      temp_v3 = temp_v3 | 3;
      temp_v2 = temp_v2 | 2;
      param_2 = param_2 + 1;
    }
    if (*param_2 != 'b') break;
    temp_v3 = temp_v3 | 4;
    temp_v2 = temp_v2 | 1;
    param_2 = param_2 + 1;
  }
  if (*param_2 == 't') {
    temp_v2 = temp_v2 | 0x10;
  }
  temp_v1 = returnMinusOne2(param_1,temp_v2);
  if (temp_v1 != -1) {
    param_3->field_0x10 = 0;
    param_3->field_0x4 = 0;
    param_3->field_0xc = temp_v3;
    param_3->field_0x1c = 0x200;
    param_3->field_0x14 = temp_v1;
    if ((int)(temp_v2 << 0x1c) < 0) {
      FUN_00102e7c(param_3,0,2);
    }
    param_3->field_0x4c = param_3->field_0x4c | 1;
    return romwright_piece_4_4(param_1,param_3);
  }
  return (unsigned long long)param_1 << 0x20;
}

} /* extern "C" */
