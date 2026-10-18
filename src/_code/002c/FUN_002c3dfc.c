/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3dfc` (_code @ 0x2c3dfc, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c52f8. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c39f8) */
/* WARNING: Removing unreachable block (ram,0x002c3ae8) */
/* WARNING: Removing unreachable block (ram,0x002c3b0c) */
/* WARNING: Removing unreachable block (ram,0x002c3b24) */
/* WARNING: Removing unreachable block (ram,0x002c3b30) */
/* WARNING: Removing unreachable block (ram,0x002c3b34) */
/* WARNING: Removing unreachable block (ram,0x002c3b3c) */
/* WARNING: Removing unreachable block (ram,0x002c3b44) */
/* WARNING: Removing unreachable block (ram,0x002c3b4c) */
/* WARNING: Removing unreachable block (ram,0x002c3b54) */
/* WARNING: Removing unreachable block (ram,0x002c3b58) */
/* WARNING: Removing unreachable block (ram,0x002c3b64) */
/* WARNING: Removing unreachable block (ram,0x002c3b74) */
/* WARNING: Removing unreachable block (ram,0x002c3b84) */
/* WARNING: Removing unreachable block (ram,0x002c3b90) */
/* WARNING: Removing unreachable block (ram,0x002c3b94) */
/* WARNING: Removing unreachable block (ram,0x002c3c3c) */

void FUN_002c3dfc(int param_1)

{
/* irregular: irregular input(s): in_r12; 23 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  int in_r12;
  char acStack_18 [12];
  
  temp_v1 = 0;
  do {
    temp_v0 = (unsigned int)*(char *)(param_1 + temp_v1);
    if (temp_v0 == 0 || temp_v0 == 0x3a) {
      piVar1 = (int *)(param_1 >> 0x20);
      if (temp_v0 >= 0x20) {
        *piVar1 = temp_v1;
        piVar1[1] = (int)acStack_18;
        piVar1[2] = in_r12;
        piVar1[3] = temp_v1;
        piVar1 = piVar1 + 4;
      }
      *(unsigned int *)((temp_v0 - 0x20) + (int)piVar1) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    acStack_18[temp_v1] = *(char *)(param_1 + temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  FUN_002c52f8();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
