/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2260` (_code @ 0x3f2260, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_0044e448; /* 0x44e448 */
extern unsigned int DAT_0044e44c; /* 0x44e44c */
extern unsigned int DAT_004c644c; /* 0x4c644c */

/* Supplied declaration required: FUN_002c3b00. */


unsigned long long FUN_003f2260(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x90) = param_1;
  *(unsigned int *)(param_3 + 0x94) = param_2;
  DAT_0044e448 = 0;
  DAT_0044e44c = 0;
  DAT_004c644c = 0;
  FUN_002c3b00(&DAT_004c644c);
  return 0x3576b8004c644c;
}
