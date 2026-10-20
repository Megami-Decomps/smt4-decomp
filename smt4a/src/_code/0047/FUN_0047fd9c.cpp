/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fd9c` (_code @ 0x47fd9c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_00192550(void);
int FUN_0034a290(void);

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_0034a290. */


unsigned int FUN_0047fd9c(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = param_1 - 1;
  temp_v3 = temp_v0 >= 0x3b;
  temp_v2 = temp_v0 == 0x3b;
  if (temp_v0 >= 0x3c) {
    temp_v3 = param_1 - 0x79fU >= 0x3f;
    temp_v2 = param_1 - 0x79fU == 0x3f;
  }
  if (!temp_v3 || temp_v2) {
    temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
    FUN_00184310();
    if ((temp_v0 != 0) && ((*(unsigned char *)(temp_v0 + 0xb3) & 4) != 0)) {
      return 1;
    }
    FUN_00192550();
    if ((*(unsigned char *)(param_1 + 0x42) & 0xf0) != 0) {
      temp_v1 = 0;
      do {
        temp_v0 = (unsigned int)*(unsigned short *)(param_2 + temp_v1 * 2 + 0x34);
        if (((temp_v0 != 0) && (FUN_0034a290(), temp_v0 != 0)) &&
           (*(unsigned char *)(temp_v0 + 0x33) == *(unsigned char *)(param_1 + 0x42) >> 4)) {
          return 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
    }
  }
  return 0;
}

} /* extern "C" */
