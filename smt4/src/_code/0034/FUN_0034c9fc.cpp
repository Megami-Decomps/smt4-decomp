/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c9fc` (_code @ 0x34c9fc, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b6480(...);
int FUN_002be624(...);

typedef struct fn_0034c9fc_arg0 fn_0034c9fc_arg0;
struct fn_0034c9fc_arg0 {
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

extern unsigned char LAB_0034ca48; /* 0x34ca48 */
extern unsigned char LAB_0034d4f8; /* 0x34d4f8 */

/* Supplied declaration required: FUN_002b6480. */
/* Supplied declaration required: FUN_002be624. */


void FUN_0034c9fc(fn_0034c9fc_arg0 *param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [64];
  
  param_1->field_0x40 = param_2;
  param_1->field_0x2c = 1;
  FUN_002be624(temp_v0,&LAB_0034ca48);
  param_1->field_0x24 = 0;
  FUN_002b6480(temp_v0,0,1,&LAB_0034d4f8,param_1);
  return;
}

} /* extern "C" */
