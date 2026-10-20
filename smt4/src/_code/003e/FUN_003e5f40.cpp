/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5f40` (_code @ 0x3e5f40, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00476640; /* 0x476640 */
extern unsigned char DAT_004efdf4; /* 0x4efdf4 */
extern unsigned int DAT_004efe24; /* 0x4efe24 */
extern unsigned int DAT_004efe28; /* 0x4efe28 */
extern unsigned int DAT_004efe2c; /* 0x4efe2c */
extern unsigned int DAT_004efe30; /* 0x4efe30 */

extern unsigned int FUN_002ac94c(void);
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned char * FUN_003e5f40(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e5f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (unsigned char *)(**(romwright_code **)(**(int **)(param_1 + 0xc) + 0x1c))();
    return puVar1;
  }
  if (((DAT_00476640 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476640), temp_v0 != 0)) {
    temp_v1 = FUN_002ac94c();
    nn_math_ARMv6_MTX34CopyAsm(&DAT_004efdf4,temp_v1);
    DAT_004efe24 = 0x3f800000;
    DAT_004efe28 = 0x3f800000;
    DAT_004efe2c = 0x3f800000;
    DAT_004efe30 = 0x7e1;
  }
  return &DAT_004efdf4;
}

} /* extern "C" */
