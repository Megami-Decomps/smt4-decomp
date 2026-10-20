/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3c50` (_code @ 0x3f3c50, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned int *, unsigned char *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_003576cc; /* 0x3576cc */
extern unsigned int DAT_0046563c; /* 0x46563c */
extern unsigned char DAT_00465640; /* 0x465640 */
extern unsigned int DAT_00465644; /* 0x465644 */
extern unsigned int DAT_00465648; /* 0x465648 */
extern unsigned int DAT_00465658; /* 0x465658 */
extern unsigned int DAT_0046565c; /* 0x46565c */
extern unsigned int DAT_004e5290; /* 0x4e5290 */

/* Supplied declaration required: FUN_002c5d5c. */


void FUN_003f3c50(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x20) = param_1;
  *(unsigned int *)(param_3 + 0x24) = param_2;
  DAT_00465658 = 0;
  DAT_0046565c = 0;
  FUN_002c5d5c(&DAT_004e5290,&LAB_003576cc,4,3);
  DAT_0046563c = 0;
  DAT_00465640 = 1;
  DAT_00465644 = 0;
  DAT_00465648 = 0;
  return;
}

} /* extern "C" */
