/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a651c` (_code @ 0x3a651c, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlItemComputeValues(...);

/* Supplied declaration required: btlItemComputeValues. */
extern int gameGetSlotTable(void);
extern int gameCountUnits(void);


unsigned int FUN_003a651c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [8];
  
  if ((param_1 == 0 || param_1 == 2) || param_1 == 3) {
    temp_v0 = -1;
    btlItemComputeValues(0xffffffff,param_2,temp_v4,temp_v5);
    if (temp_v0 == 0) {
      return 1;
    }
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return 0;
    }
    temp_v0 = 3;
    temp_v1 = gameGetSlotTable();
    temp_v1 = temp_v1 + 0x9108;
  }
  else {
    temp_v0 = gameCountUnits();
    temp_v1 = gameGetSlotTable();
    temp_v1 = temp_v1 + 0x90f0;
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v0) {
    do {
      temp_v2 = (int)*(char *)(temp_v1 + temp_v3);
      if ((-1 < temp_v2) && (btlItemComputeValues(temp_v2,param_2,temp_v4,temp_v5), temp_v2 == 0)) {
        return 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0);
  }
  return 0;
}

} /* extern "C" */
