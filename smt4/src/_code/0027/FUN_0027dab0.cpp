/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dab0` (_code @ 0x27dab0, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlMainFindEntryByListedId(int, int);

/* Supplied declaration required: btlMainFindEntryByListedId. */


int FUN_0027dab0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  btlMainFindEntryByListedId(param_1,(int)*(short *)(param_2 + 0x62));
  if (param_1 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 2;
      if (*(short *)(param_2 + 0x62) == *(short *)(temp_v1 + 8)) {
        return temp_v0;
      }
      if (*(short *)(param_2 + 0x62) == *(short *)(temp_v1 + 10)) {
        return temp_v0 + 1;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0x32);
  }
  return -1;
}

} /* extern "C" */
