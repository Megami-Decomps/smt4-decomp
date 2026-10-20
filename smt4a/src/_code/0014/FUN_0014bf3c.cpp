/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014bf3c` (_code @ 0x14bf3c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00192748(unsigned int);

extern unsigned int DAT_00570280; /* 0x570280 */

extern int FUN_0017607c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


int FUN_0014bf3c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  FUN_00184310();
  if (param_1 != 0) {
    temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 2);
    temp_v0 = FUN_0017607c(DAT_00570280,temp_v4);
    if (temp_v0 == 0) {
      temp_v1 = FUN_00187180(1,0);
      temp_v0 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v1);
      if ((temp_v4 < temp_v2) && (temp_v0 = temp_v0 + temp_v4 * 0x30, param_2 != 0)) {
        temp_v0 = temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  else {
    temp_v0 = FUN_0017607c(DAT_00570280,0);
    if (temp_v0 == 0) {
      temp_v1 = FUN_00187180(1,0);
      temp_v0 = FUN_00192798();
      temp_v3 = FUN_00192748(temp_v1);
      if ((temp_v3 != 0) && (param_2 != 0)) {
        return temp_v0 + 0x10;
      }
      return temp_v0;
    }
  }
  return temp_v0 + 2;
}

} /* extern "C" */
