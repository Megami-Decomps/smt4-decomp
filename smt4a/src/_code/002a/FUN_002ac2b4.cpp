/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac2b4` (_code @ 0x2ac2b4, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */

extern int slotRecordFindById(void);


unsigned int FUN_002ac2b4(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  if (param_2 != 0) {
    temp_v0 = DAT_0057f290 + param_1 * 0x28;
    while (((*(short *)(temp_v0 + temp_v3 * 2 + 0x523a) == 0 || (temp_v2 = slotRecordFindById(), temp_v2 == 0)) ||
           ((*(unsigned short *)(temp_v2 + 0x60) & 4) == 0))) {
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 0xc) {
        return 0;
      }
    }
    return 1;
  }
  temp_v0 = DAT_0057f290 + param_1 * 8;
  do {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x13b8) & 0x7fff;
    while( 1 ) {
      if (((temp_v1 != 0) && (temp_v2 = slotRecordFindById(), temp_v2 != 0)) &&
         ((*(unsigned short *)(temp_v2 + 0x60) & 4) != 0)) {
        return 1;
      }
      temp_v3 = temp_v3 + 1;
      if (temp_v3 >= 2) {
        return 0;
      }
      if (temp_v3 == 0) break;
      temp_v1 = (*(unsigned int *)(temp_v0 + 0x13b8) & 0x3fffffff) >> 0xf;
    }
  } while( 1 );
}

} /* extern "C" */
