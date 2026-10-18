/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e52c` (_code @ 0x19e52c, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


unsigned short FUN_0019e52c(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  
  temp_v0 = FUN_00187180(10,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned short *)(temp_v1 + temp_v4 * 8) == param_1) {
          return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 2);
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v3);
    }
  }
  while( 1 ) {
    temp_v4 = temp_v3;
    if (temp_v2 <= temp_v4) {
      return 0;
    }
    puVar6 = (unsigned short *)(temp_v1 + temp_v4 * 8);
    if (*puVar6 == param_1) break;
    if (puVar6[4] == param_1) {
      return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 10);
    }
    temp_v3 = temp_v4 + 2;
  }
  return *(unsigned short *)(temp_v1 + temp_v4 * 8 + 2);
}
