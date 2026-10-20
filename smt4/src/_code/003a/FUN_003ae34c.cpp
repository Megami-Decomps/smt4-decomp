/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae34c` (_code @ 0x3ae34c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

typedef struct fn_003ae34c_arg1 fn_003ae34c_arg1;
struct fn_003ae34c_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x20];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x46];
    ushort field_0xa2; /* +0xa2 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int *DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: rt_memcpy_w. */


void FUN_003ae34c(unsigned int param_1,fn_003ae34c_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = *(int *)(*DAT_00439ca8 + 0x1fc0) + temp_v0 * 0x288;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x27c);
    }
    if ((temp_v1 != 0 && temp_v2 != 0) &&
       (*(short *)(temp_v2 + 0x46) == *(short *)((int)&param_2->field_0x44 + 2))) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 4) {
      return;
    }
  }
  rt_memcpy_w(DAT_00439ca8 + temp_v0 * 0x181 + 0x1758,param_2,0x604);
  return;
}

} /* extern "C" */
