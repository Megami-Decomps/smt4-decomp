/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017628c` (_code @ 0x17628c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short [20], unsigned int, int, int, unsigned char *);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00191f58; /* 0x191f58 */

/* Supplied declaration required: libc_bsearch. */


void FUN_0017628c(int param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0 [20];
  
  if (*(int *)(param_1 + 0x42c) != 0) {
    temp_v0[0] = param_2;
    libc_bsearch(temp_v0,*(unsigned int *)(param_1 + 0x430),*(int *)(param_1 + 0x42c),0x20,
                 &LAB_00191f58);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
