/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a3cc` (_code @ 0x11a3cc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7014(void);
int FUN_002b703c(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_002b7014. */
/* Supplied declaration required: FUN_002b703c. */


void FUN_0011a3cc(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) =
       param_1 | (param_2 << 8) | (param_3 << 0x10) | (param_4 << 0x18);
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf00c3;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7014();
  return;
}

} /* extern "C" */
