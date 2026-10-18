/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b563c` (_code @ 0x2b563c, 0x17e bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char bRam00000008; /* 0x8 */
extern unsigned char uRam00000009; /* 0x9 */
extern unsigned char bRam0000000a; /* 0xa */
extern unsigned char bRam0000000b; /* 0xb */
extern unsigned char bRam0000000c; /* 0xc */
extern unsigned char bRam0000000d; /* 0xd */
extern unsigned char bRam0000000e; /* 0xe */
extern unsigned char bRam0000000f; /* 0xf */
extern unsigned char bRam00000010; /* 0x10 */
extern unsigned char bRam00000011; /* 0x11 */
extern unsigned char uRam00000012; /* 0x12 */
extern unsigned int DAT_0044e378; /* 0x44e378 */
extern unsigned int DAT_0044e37c; /* 0x44e37c */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b563c(void)

{
/* irregular: irregular input(s): in_cr1, in_cr4, in_cr7, in_r12, in_stack_00000008, in_stack_0000000c; 10 native warning(s); review required */
  unsigned char in_r12;
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr7;
  unsigned char in_stack_00000008;
  unsigned char in_stack_0000000c;
  unsigned char *puStack_50;
  
  bRam0000000c = (unsigned char)DAT_0044e378 ^ in_stack_00000008;
  bRam0000000a = in_stack_0000000c;
  bRam00000008 = (unsigned char)DAT_0044e37c ^ in_stack_0000000c;
  coprocessor_function(0,0xb,0,in_cr7,in_cr4,in_cr1);
  uRam00000009 = in_r12;
  bRam0000000b = bRam0000000a;
  bRam0000000d = bRam0000000a;
  bRam0000000e = bRam0000000a;
  bRam0000000f = bRam0000000a;
  bRam00000010 = bRam0000000a;
  bRam00000011 = bRam00000008;
  uRam00000012 = in_r12;
  *puStack_50 = (char)puStack_50;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
