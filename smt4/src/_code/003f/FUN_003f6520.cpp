/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6520` (_code @ 0x3f6520, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c38fc(unsigned char *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_0044e978; /* 0x44e978 */
extern unsigned int DAT_0044e97c; /* 0x44e97c */
extern unsigned char DAT_004d4674; /* 0x4d4674 */

/* Supplied declaration required: FUN_002c38fc. */


void FUN_003f6520(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  DAT_0044e978 = param_1;
  DAT_0044e97c = param_2;
  FUN_002c38fc(&DAT_004d4674,0x40000ca);
  return;
}

} /* extern "C" */
