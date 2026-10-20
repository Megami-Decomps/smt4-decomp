#include "romwright_types.h"

extern "C" {

int FUN_0028cb40(int, int, int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

extern int FUN_002062e8(int);
/* Supplied declaration required: FUN_0028cb40. */


int FUN_003ae58c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v2;
  int *piVar4;
  
  temp_v2 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  piVar4 = (int *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e38);
  if (*piVar4 == 0xb) {
    return 0;
  }
  temp_v0 = FUN_002062e8(temp_v2 + 0x2460);
  if (temp_v0 != 0) {
    FUN_0028cb40(temp_v2 + 0x2460,temp_v2 + 0x7e4e,temp_v2 + 0x7e50);
    if (*(short *)(temp_v2 + 0x7e4e) == 0xe) {
      temp_v2 = 10;
    }
    else {
      temp_v2 = 0;
    }
    *piVar4 = temp_v2;
  }
  return temp_v0;
}

} /* extern "C" */
