/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb490` (_code @ 0x3eb490, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned char *, unsigned char *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_003f7308; /* 0x3f7308 */
extern unsigned int DAT_00464ac0; /* 0x464ac0 */
extern unsigned int DAT_00464ac4; /* 0x464ac4 */
extern unsigned char DAT_004dace0; /* 0x4dace0 */

/* Supplied declaration required: FUN_002c5d5c. */


unsigned long long FUN_003eb490(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x20) = param_1;
  *(unsigned int *)(param_3 + 0x24) = param_2;
  DAT_00464ac0 = 0;
  DAT_00464ac4 = 0;
  FUN_002c5d5c(&DAT_004dace0,&LAB_003f7308,0x40,2);
  return 0x17f6cc00000000;
}

} /* extern "C" */
