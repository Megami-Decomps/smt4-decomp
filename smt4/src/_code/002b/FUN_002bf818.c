/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf818` (_code @ 0x2bf818, 0x298 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002bf818_arg0 fn_002bf818_arg0;
struct fn_002bf818_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    char field_0xc; /* +0xc */
    unsigned char pad_0xd[0xc];
    undefined1 field_0x19; /* +0x19 */
    unsigned char pad_0x1a[0x3];
    undefined1 field_0x1d; /* +0x1d */
};

extern fn_002bf818_arg0 *pfRam0000006d; /* 0x6d */
extern unsigned char DAT_004c5819; /* 0x4c5819 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

unsigned char
FUN_002bf818(fn_002bf818_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr7; 9 native warning(s); review required */
  int temp_v0;
  int unaff_r5;
  int unaff_r6;
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr7;
  
  temp_v0 = 0;
  if (param_1 != (fn_002bf818_arg0 *)0x0) {
    temp_v0 = param_1->field_0x4;
    if (temp_v0 < 0) {
      temp_v0 = param_1->field_0x8;
    }
    if (temp_v0 == 0) {
      coprocessor_store(0,in_cr0,0);
      temp_v0 = *(int *)(unaff_r6 + 0x74);
      *(unsigned int *)(unaff_r5 + 0x34) = 0;
      *(int *)(temp_v0 + 0x40) = temp_v0;
      param_1->field_0xc = (char)unaff_r5;
      *(int *)(unaff_r5 + 0x20) = temp_v0;
      param_1->field_0x1d = param_4;
      param_1->field_0x19 = 0;
      pfRam0000006d = param_1;
      return DAT_004c5819;
    }
  }
  coprocessor_function(0,0xb,0,in_cr7,in_cr0,in_cr3);
  *(int *)(temp_v0 * 2 + 0x7c) = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
