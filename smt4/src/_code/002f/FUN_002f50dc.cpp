/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f50dc` (_code @ 0x2f50dc, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommandBlockRelease(void);
int FUN_002b703c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */
extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: asdModelCommandBlockRelease. */
/* Supplied declaration required: FUN_002b703c. */


void FUN_002f50dc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(int *)(DAT_004729e0 + DAT_004729e4 * 4) = param_1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0065;
  DAT_004729e4 = DAT_004729e4 + 2;
  if (param_1 != 0) {
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) =
         *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x132c) * 4 + 0x1334);
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0066;
    DAT_004729e4 = DAT_004729e4 + 2;
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) =
         *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x134c) * 4 + 0x1354);
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0067;
    DAT_004729e4 = DAT_004729e4 + 2;
  }
  asdModelCommandBlockRelease();
  return;
}

} /* extern "C" */
