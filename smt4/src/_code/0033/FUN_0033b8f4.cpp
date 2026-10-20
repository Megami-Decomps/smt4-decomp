/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b8f4` (_code @ 0x33b8f4, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);
int dataTable14Sub1GetRecord(void);

extern int flagBitIsSet(unsigned int);
/* Supplied declaration required: devilGetRecord. */
extern int randNextInRange(unsigned int);
/* Supplied declaration required: dataTable14Sub1GetRecord. */


unsigned short FUN_0033b8f4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  devilGetRecord();
  temp_v0 = (*(unsigned int *)(temp_v0 + 0x2c) & 0x1fffff) >> 0xe;
  dataTable14Sub1GetRecord();
  temp_v1 = randNextInRange(0xb);
  temp_v2 = randNextInRange(0xd);
  temp_v3 = flagBitIsSet(6);
  if (temp_v3 != 0) {
    if (temp_v2 >= 2) {
      return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
    }
  }
  else if (0 < temp_v2) {
    return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
  }
  temp_v1 = temp_v1 + 0xc;
  return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
}

} /* extern "C" */
