/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371f3c` (_code @ 0x371f3c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

extern int FUN_0018719c(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
extern int FUN_00261458(void);


int FUN_00371f3c(void)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  if ((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) {
    temp_v0 = FUN_001a6f60(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20cc),0);
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    temp_v3 = FUN_00261458();
    temp_v5 = 0;
    temp_v6 = *(unsigned short *)(temp_v3 + 0x66) + 1;
    if (0 < temp_v2) {
      do {
        temp_v3 = temp_v1 + temp_v5 * 0x18;
        if ((((*(short *)(temp_v3 + 0x10) == 0) || (temp_v4 = FUN_0018719c(), temp_v4 != 0)) &&
            ((*(short *)(temp_v3 + 0x12) == 0 || (temp_v4 = FUN_0018719c(), temp_v4 == 0)))) &&
           ((*(unsigned short *)(temp_v3 + 0x14) == 0 || *(unsigned short *)(temp_v3 + 0x14) <= temp_v6 &&
            (*(unsigned short *)(temp_v3 + 0x16) == 0 || temp_v6 <= *(unsigned short *)(temp_v3 + 0x16))))) {
          return temp_v5;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v2);
    }
  }
  return -1;
}

} /* extern "C" */
