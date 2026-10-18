/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a30e8` (_code @ 0x3a30e8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0046c35c. */
/* Supplied declaration required: FUN_00470974. */


int FUN_003a30e8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x29,3);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x20;
  }
  else {
    temp_v1 = DAT_00570280;
    FUN_0046c35c(DAT_00570280,0x23,3);
    if (param_1 < temp_v1 + temp_v2) {
      temp_v1 = DAT_00570280;
      FUN_00470974(DAT_00570280,param_1 - temp_v2);
      return temp_v1;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
