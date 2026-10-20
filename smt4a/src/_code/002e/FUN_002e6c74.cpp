/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6c74` (_code @ 0x2e6c74, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6c60(...);

typedef struct fn_002e6c74_arg2 fn_002e6c74_arg2;
struct fn_002e6c74_arg2 {
    uint field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    uint field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6c60. */
extern int returnMinusOne3(unsigned int, unsigned int);
extern unsigned int returnMinusOne4(unsigned int, unsigned int, int, unsigned int, unsigned int, int, fn_002e6c74_arg2 *);


unsigned long long FUN_002e6c74(unsigned int param_1,int param_2,fn_002e6c74_arg2 *param_3)

{
/* irregular: 1 unstructured edge(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  fn_002e6c74_arg2 *pfVar5;
  
  temp_v1 = param_3->field_0xc;
  temp_v2 = param_3->field_0x14;
  temp_v3 = param_2;
  pfVar5 = param_3;
  if ((temp_v1 & 0x20010) != 0) {
    temp_v0 = returnMinusOne3(temp_v2,param_3->field_0x18);
    if (-1 >= temp_v0) {
      FUN_002e6c60(param_3);
      temp_v2 = 0xffffffff;
      return romwright_piece_4_4(param_1,temp_v2);
    }
    temp_v1 = temp_v1 & 0xfffdffef;
    param_3->field_0xc = temp_v1;
  }
  temp_v1 = returnMinusOne4(temp_v2,param_1,param_2,temp_v1,param_1,temp_v3,pfVar5);
  param_3->field_0x18 = param_3->field_0x18 + (param_2 - (temp_v1 & 0x7fffffff));
  temp_v2 = 0;
  if (temp_v1 != 0) {
    FUN_002e6c60(param_3);
    temp_v2 = 0xffffffff;
  }
  return romwright_piece_4_4(param_1,temp_v2);
}

} /* extern "C" */
