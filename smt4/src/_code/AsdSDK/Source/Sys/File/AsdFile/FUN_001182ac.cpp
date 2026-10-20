/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001182ac` (_code @ 0x1182ac, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb150(unsigned char *, int);
int FUN_002c4040(unsigned int *);

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern unsigned int DAT_00465028; /* 0x465028 */

/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c4040. */


void FUN_001182ac(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  while (*param_1 != 4 && *param_1 != 5) {
    FUN_002c4040(&DAT_00465028);
    FUN_002bb150(&LAB_002dc6c0,0);
  }
  return;
}

} /* extern "C" */
