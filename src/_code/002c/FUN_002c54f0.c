/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c54f0` (_code @ 0x2c54f0, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: FUN_002c3aa8. */
extern int func_0x006c5be8(unsigned int);
/* Supplied declaration required: func_0x00b3fdb2. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c5fc6) */

void FUN_002c54f0(unsigned int param_1)

{
/* irregular: irregular input(s): in_cr3; 9 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  char temp_v5;
  unsigned int in_cr3;
  unsigned char uStack_10;
  
  temp_v4 = param_1 >= 0x20000;
  temp_v5 = SBORROW4(param_1,0x20000);
  temp_v0 = param_1 - 0x20000;
  temp_v3 = param_1 == 0x20000;
  if (!temp_v3) {
    temp_v4 = param_1 >= 0x30000;
    temp_v5 = SBORROW4(param_1,0x30000);
    temp_v0 = param_1 - 0x30000;
  }
  temp_v1 = temp_v0 < 0;
  temp_v2 = temp_v3 || param_1 == 0x30000;
  if (temp_v3 || param_1 == 0x30000) {
    temp_v0 = func_0x006c5be8(DAT_00465124);
    coprocessor_store(0,in_cr3,&uStack_10);
    if (!temp_v2 && temp_v1 == temp_v5) {
      func_0x00b3fdb2(*(unsigned short *)(temp_v0 + 0x10));
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002c3aa8();
  if (temp_v4) {
    software_interrupt(0xa0e1a0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
