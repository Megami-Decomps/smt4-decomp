/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394d90` (_code @ 0x394d90, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00283e48(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned int FUN_00394d90(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if ((param_1 - 1U < 0x3c) && (dataTable08Sub1GetRecord(), (*(unsigned char *)(param_1 + 0x6e) & 0xf0) != 0)) {
    temp_v1 = 0;
    do {
      temp_v0 = (unsigned int)*(unsigned short *)(param_2 + temp_v1 * 2 + 0x34);
      if (((temp_v0 != 0) && (FUN_00283e48(), temp_v0 != 0)) &&
         (*(unsigned char *)(temp_v0 + 0x35) == *(unsigned char *)(param_1 + 0x6e) >> 4)) {
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
  }
  return 0;
}

} /* extern "C" */
