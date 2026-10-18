/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_SharedMemoryBlock_AttachAndMap` (_code @ 0x1396a4, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int nn_os_AddressSpaceManager_Allocate(unsigned char *, int, unsigned int, unsigned int);


/* WARNING: Removing unreachable block (ram,0x001396ec) */

int nn_os_SharedMemoryBlock_AttachAndMap
              (int param_1,unsigned int param_2,int param_3,unsigned char param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0x14) = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    temp_v0 = 0x8a01bf9;
  }
  else {
    temp_v0 = nn_os_AddressSpaceManager_Allocate
                      (&DAT_004eac5c,param_1,(param_3 + 0xfffU) & 0xfffff000,0x1000);
    if (temp_v0 == 0) {
      temp_v0 = -0x279fe7c9;
    }
    else {
      *(unsigned char *)(param_1 + 0x10) = param_4;
      temp_v0 = *(int *)(param_1 + 0x14);
      software_interrupt(0x1f);
      if (-1 < temp_v0) {
        *(unsigned char *)(param_1 + 0x18) = 1;
      }
    }
  }
  return temp_v0;
}
