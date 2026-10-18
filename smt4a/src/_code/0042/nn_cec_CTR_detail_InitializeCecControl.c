/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_detail_InitializeCecControl` (_code @ 0x42fe78, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005c1fc4; /* 0x5c1fc4 */

extern int FUN_0016f864(void);
/* Supplied declaration required: FUN_0016f988. */
extern unsigned int FUN_002e3390(char *);


void nn_cec_CTR_detail_InitializeCecControl(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0016f864();
  if (-1 < temp_v0) {
    temp_v1 = FUN_002e3390("cecd:u");
    FUN_0016f988(&DAT_005c1fc4,"cecd:u",temp_v1,0);
    return;
  }
  return;
}
