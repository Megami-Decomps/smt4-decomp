/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034cc48` (_code @ 0x34cc48, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034cc48_arg0 fn_0034cc48_arg0;
struct fn_0034cc48_arg0 {
    unsigned char pad_0x0[0x24];
    undefined4 field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x10];
    undefined2 field_0x40; /* +0x40 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_0034cc94; /* 0x34cc94 */
extern unsigned char LAB_0034d744; /* 0x34d744 */

/* Supplied declaration required: FUN_002b67c0. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_0034cc48(fn_0034cc48_arg0 *param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [64];
  
  param_1->field_0x40 = param_2;
  param_1->field_0x2c = 1;
  FUN_002be7fc(temp_v0,&LAB_0034cc94);
  param_1->field_0x24 = 0;
  FUN_002b67c0(temp_v0,0,1,&LAB_0034d744,param_1);
  return;
}
