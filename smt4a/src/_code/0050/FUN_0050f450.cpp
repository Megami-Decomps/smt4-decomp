/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050f450` (_code @ 0x50f450, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(unsigned int *, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_005b4098; /* 0x5b4098 */
extern unsigned int DAT_005b409c; /* 0x5b409c */
extern unsigned int DAT_00640550; /* 0x640550 */
extern unsigned int DAT_00640554; /* 0x640554 */
extern unsigned int DAT_00640558; /* 0x640558 */

/* Supplied declaration required: emptyStub_002f4370. */


void FUN_0050f450(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  DAT_005b4098 = 0;
  DAT_005b409c = 0;
  DAT_00640550 = 0;
  DAT_00640558 = 0xffffffff;
  DAT_00640554 = 0;
  emptyStub_002f4370(&DAT_00640550,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
