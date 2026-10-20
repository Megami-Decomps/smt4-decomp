/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd5f4` (_code @ 0x3cd5f4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);
int FUN_0046c35c(int, int, int);
int FUN_0046ea50(int, unsigned int);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0046c35c. */
/* Supplied declaration required: FUN_0046ea50. */


int FUN_003cd5f4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  FUN_00187180(0x30,0);
  temp_v0 = FUN_00192748();
  temp_v2 = DAT_00570280;
  FUN_0046c35c(DAT_00570280,0x27,0);
  if (0 < temp_v2 + temp_v0) {
    do {
      temp_v1 = FUN_00187180(0x30,0);
      temp_v2 = FUN_00192798();
      temp_v3 = FUN_00192748(temp_v1);
      if (temp_v4 < temp_v3) {
        temp_v2 = temp_v2 + temp_v4 * 0x28;
      }
      else {
        temp_v0 = DAT_00570280;
        FUN_0046c35c(DAT_00570280,0x27,0);
        temp_v2 = 0;
        if (temp_v4 < temp_v3 + temp_v0) {
          temp_v2 = DAT_00570280;
          FUN_0046ea50(DAT_00570280,temp_v4 - temp_v3);
        }
      }
      if (*(int *)(temp_v2 + 0x20) == param_1) {
        return (int)*(short *)(temp_v2 + 0x24);
      }
      temp_v4 = temp_v4 + 1;
      FUN_00187180(0x30,0);
      temp_v0 = FUN_00192748();
      temp_v2 = DAT_00570280;
      FUN_0046c35c(DAT_00570280,0x27,0);
    } while ((int)temp_v4 < temp_v2 + temp_v0);
  }
  return -1;
}

} /* extern "C" */
