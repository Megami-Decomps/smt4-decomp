/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421314` (_code @ 0x421314, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00168750(...);

typedef struct fn_00421314_arg0 fn_00421314_arg0;
struct fn_00421314_arg0 {
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

extern unsigned char LAB_00421360; /* 0x421360 */
extern unsigned char LAB_0042184c; /* 0x42184c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00168750. */


void FUN_00421314(fn_00421314_arg0 *param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [64];
  
  param_1->field_0x40 = param_2;
  param_1->field_0x2c = 1;
  FUN_00100388(temp_v0,&LAB_00421360);
  param_1->field_0x24 = 0;
  FUN_00168750(temp_v0,0,1,&LAB_0042184c,param_1);
  return;
}

} /* extern "C" */
