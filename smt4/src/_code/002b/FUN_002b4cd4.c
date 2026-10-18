/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4cd4` (_code @ 0x2b4cd4, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern signed char cRam00000018; /* 0x18 */
extern romwright_code *pcRam0000001c; /* 0x1c */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_0014f8e8. */
/* Supplied declaration required: FUN_0014f9b4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b4d14) */
/* WARNING: Removing unreachable block (ram,0x002b4864) */

unsigned int FUN_002b4cd4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3; 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  
  FUN_0014f9b4((int)(char)param_2);
  param_1 = param_1 + param_2 * 0x10;
  if (*(char *)(param_1 + 0x2a4) != '\x01') {
    *(unsigned short *)(param_1 + 2) = 0;
    return 0;
  }
  temp_v0 = *(unsigned int *)(param_1 + 0x2a0);
  FUN_0014f8e8();
  coprocessor_function(0,1,0,in_cr0,in_cr1,in_cr3);
  iRam00000000 = (int)temp_v0 >> 0x20;
  if (cRam00000018 != '\0' || (temp_v1 & temp_v0) != *(unsigned int *)(iRam00000000 * 4 + 8)) {
    (*pcRam0000001c)();
    cRam00000018 = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
