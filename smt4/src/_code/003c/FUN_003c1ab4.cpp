/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1ab4` (_code @ 0x3c1ab4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003c1ab4_arg2 fn_003c1ab4_arg2;
struct fn_003c1ab4_arg2 {
    unsigned char pad_0x0[0x6];
    ushort field_0x6; /* +0x6 */
    ushort field_0x8; /* +0x8 */
    byte field_0xa; /* +0xa */
    byte field_0xb; /* +0xb */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_003c1ab4(short param_1,unsigned short *param_2,fn_003c1ab4_arg2 *param_3)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  
  temp_v0 = 9999;
  temp_v2 = (int)param_1 * (int)(short)(unsigned short)param_3->field_0xa + (unsigned int)param_3->field_0x6;
  if (temp_v2 < 10000) {
    temp_v1 = (unsigned short)temp_v2;
  }
  else {
    temp_v1 = 9999;
  }
  *param_2 = temp_v1;
  temp_v2 = (int)(((int)param_1 * (int)(short)(unsigned short)param_3->field_0xb + (unsigned int)param_3->field_0x8) *
               0x2d) / 100;
  if (temp_v2 < 10000) {
    temp_v0 = (unsigned short)temp_v2;
  }
  param_2[1] = temp_v0;
  return;
}

} /* extern "C" */
