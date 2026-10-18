/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9ca0` (_code @ 0x4a9ca0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004a9ca0_arg1 fn_004a9ca0_arg1;
struct fn_004a9ca0_arg1 {
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
    unsigned char pad_0x5c[0x6];
    unsigned char field_0x62; /* +0x62 */
    unsigned char pad_0x63[0x5b];
    ushort field_0xbe; /* +0xbe */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int *DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: rt_memcpy_w. */


void FUN_004a9ca0(unsigned int param_1,fn_004a9ca0_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = *(int *)(*DAT_0057a9c8 + 0x1ffc) + temp_v0 * 0x408;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x3fc);
    }
    if ((temp_v1 != 0 && temp_v2 != 0) && (*(short *)(temp_v2 + 0x62) == *(short *)&param_2->field_0x62))
    break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 4) {
      return;
    }
  }
  rt_memcpy_w(DAT_0057a9c8 + temp_v0 * 0x4b + 0x1abd,param_2,300);
  return;
}
