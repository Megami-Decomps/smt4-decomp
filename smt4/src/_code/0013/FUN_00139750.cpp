/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139750` (_code @ 0x139750, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c526c(void);
int software_interrupt(int);

extern unsigned char g_nnosAddressSpaceManagerHeap; /* 0x4eac5c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_AddressSpaceManager_Free(unsigned int, unsigned int);


void FUN_00139750(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        if (*(int *)(param_1 + 0x14) < 0) {
          FUN_002c526c();
        }
        nn_os_AddressSpaceManager_Free((unsigned int)&g_nnosAddressSpaceManagerHeap,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

} /* extern "C" */
