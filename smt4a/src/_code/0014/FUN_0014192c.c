/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014192c` (_code @ 0x14192c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int DAT_0063fe0c; /* 0x63fe0c */
extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned char DAT_0063fe4c; /* 0x63fe4c */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern unsigned int DAT_0063ff38; /* 0x63ff38 */

/* Supplied declaration required: FUN_0015402c. */


void FUN_0014192c(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)0x0;
  if (param_1 == 0) {
    param_4 = 0;
    puVar1 = &DAT_0063fe10;
  }
  else if (param_1 == 1) {
    param_4 = 0;
    puVar1 = &DAT_0063fe4c;
  }
  else if (param_1 == 2) {
    if (DAT_0063fe0c == 1) {
      return;
    }
    param_4 = 1;
    puVar1 = &DAT_0063fe88;
  }
  FUN_0015402c(puVar1,puVar1 + 0x18,(&DAT_0063ff38)[param_4],7,param_2);
  return;
}
