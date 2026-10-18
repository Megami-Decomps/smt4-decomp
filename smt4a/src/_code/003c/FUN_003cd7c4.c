/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd7c4` (_code @ 0x3cd7c4, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

extern unsigned char LAB_00400002; /* 0x400002 */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059dbfc; /* 0x59dbfc */
extern unsigned int DAT_0059dc04; /* 0x59dc04 */

/* Supplied declaration required: FUN_00272204. */
/* Supplied declaration required: FUN_00290e98. */
/* Supplied declaration required: FUN_0037cdcc. */
/* Supplied declaration required: FUN_003ca0ec. */


unsigned char * FUN_003cd7c4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [252];
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  
  puVar1 = (unsigned char *)0x600001;
  FUN_0037cdcc(param_1,param_2,temp_v0);
  if (temp_v2 == 2) {
    puVar1 = (unsigned char *)0x400000;
  }
  else if (temp_v2 == 1) {
    FUN_003ca0ec(DAT_0059dbf4,DAT_0059dc04);
    if (temp_v1 != 8) {
      FUN_00290e98(DAT_0059dbfc,temp_v0);
    }
    else {
      FUN_00272204(DAT_0059dbfc,temp_v3,4);
    }
    puVar1 = &LAB_00400002;
  }
  return puVar1;
}
