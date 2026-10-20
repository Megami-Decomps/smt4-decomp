/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00507244` (_code @ 0x507244, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_005c4c38; /* 0x5c4c38 */
extern unsigned char DAT_0064c0dc; /* 0x64c0dc */
extern unsigned int DAT_0064c10c; /* 0x64c10c */
extern unsigned int DAT_0064c110; /* 0x64c110 */
extern unsigned int DAT_0064c114; /* 0x64c114 */
extern unsigned int DAT_0064c118; /* 0x64c118 */

extern unsigned int FUN_001a1e28(void);
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned char * FUN_00507244(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00507260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (unsigned char *)(**(romwright_code **)(**(int **)(param_1 + 0xc) + 0x18))();
    return puVar1;
  }
  if (((DAT_005c4c38 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c38), temp_v0 != 0)) {
    temp_v1 = FUN_001a1e28();
    nn_math_ARMv6_MTX34CopyAsm(&DAT_0064c0dc,temp_v1);
    DAT_0064c10c = 0x3f800000;
    DAT_0064c110 = 0x3f800000;
    DAT_0064c114 = 0x3f800000;
    DAT_0064c118 = 0x7e1;
  }
  return &DAT_0064c0dc;
}

} /* extern "C" */
