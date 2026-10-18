/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf2cc` (_code @ 0x2bf2cc, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bef8a) */
/* WARNING: Removing unreachable block (ram,0x002bef92) */
/* WARNING: Removing unreachable block (ram,0x00337196) */
/* WARNING: Removing unreachable block (ram,0x0033719a) */
/* WARNING: Removing unreachable block (ram,0x0033719e) */
/* WARNING: Removing unreachable block (ram,0x003371a2) */
/* WARNING: Removing unreachable block (ram,0x003371a6) */
/* WARNING: Removing unreachable block (ram,0x003371aa) */
/* WARNING: Removing unreachable block (ram,0x003371ae) */
/* WARNING: Removing unreachable block (ram,0x003371b2) */
/* WARNING: Removing unreachable block (ram,0x003371b6) */
/* WARNING: Removing unreachable block (ram,0x003371ba) */
/* WARNING: Removing unreachable block (ram,0x003371be) */
/* WARNING: Removing unreachable block (ram,0x003371c2) */
/* WARNING: Removing unreachable block (ram,0x003371c6) */
/* WARNING: Removing unreachable block (ram,0x003371ca) */
/* WARNING: Removing unreachable block (ram,0x003371ce) */

void FUN_002bf2cc(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr3, in_cr6, in_cr8; 27 native warning(s); review required */
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr3;
  unsigned int in_cr6;
  unsigned int in_cr8;
  unsigned char uStack000000fc;
  unsigned char temp_v0 [4];
  
  coprocessor_storelong(0,in_cr1,&uStack000000fc);
  coprocessor_function(0xb,0xb,0,in_cr8,in_cr0,in_cr6);
  coprocessor_load(0,in_cr3,temp_v0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
