/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb96c` (_code @ 0x3eb96c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_0044e358; /* 0x44e358 */
extern unsigned int DAT_0044e35c; /* 0x44e35c */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

/* Supplied declaration required: FUN_002c3b00. */


unsigned long long FUN_003eb96c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_0044e358 = 0;
  DAT_0044e35c = 0;
  DAT_004c6410 = 0;
  FUN_002c3b00(&DAT_004c6410);
  return 0x3576b8004c6410;
}
