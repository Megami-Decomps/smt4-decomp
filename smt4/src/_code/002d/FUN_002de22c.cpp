/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de22c` (_code @ 0x2de22c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002495d4(unsigned int, int, unsigned int, int);
int FUN_0024fc18(unsigned int);
int FUN_00250200(void);

extern unsigned char DAT_0044ea80; /* 0x44ea80 */

/* Supplied declaration required: FUN_002495d4. */
/* Supplied declaration required: FUN_0024fc18. */
/* Supplied declaration required: FUN_00250200. */


unsigned int FUN_002de22c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002495d4((*(unsigned int *)((unsigned char *)&DAT_0044ea80 + 0x1c)),*(int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                 *(unsigned short *)(param_1 + 8));
  }
  temp_v0 = (*(unsigned int *)((unsigned char *)&DAT_0044ea80 + 0x1c));
  FUN_0024fc18((*(unsigned int *)((unsigned char *)&DAT_0044ea80 + 0x1c)));
  FUN_00250200();
  return temp_v0;
}

} /* extern "C" */
