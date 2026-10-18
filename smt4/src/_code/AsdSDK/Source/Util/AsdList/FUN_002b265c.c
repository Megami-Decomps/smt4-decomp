/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b265c` (_code @ 0x2b265c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_loadlong (CALLOTHER). */
extern int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b265c(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr4, in_cr5, in_cr8; 6 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r7;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr5;
  unsigned int in_cr8;
  
  temp_v0 = FUN_002c5300(0x100,0x100,0,0x1c,1);
  coprocessor_movefromRt(10,1,0,in_cr0,in_cr0);
  coprocessor_function(0,1,0,in_cr0,in_cr0,in_cr1);
  *(unsigned int *)(temp_v0 >> 0x20) = unaff_r7;
  coprocessor_function(10,0xb,4,in_cr0,in_cr8,in_cr1);
  coprocessor_function(0,8,0,in_cr0,in_cr0,in_cr5);
  coprocessor_function(10,0xb,4,in_cr0,in_cr8,in_cr1);
  coprocessor_loadlong(0,in_cr1,(unsigned int *)(temp_v0 >> 0x20) + 2);
  coprocessor_movefromRt(0,5,1,in_cr0,in_cr4);
  coprocessor_function(0,0xb,0,in_cr4,in_cr4,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
