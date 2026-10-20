/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f72dc` (_code @ 0x2f72dc, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(void);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
extern int FUN_00261458(void);


char * FUN_002f72dc(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_001a6f60(*(unsigned int *)(param_1 + 0x20cc),0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  temp_v3 = *(int *)(param_1 + 0x20a8);
  if (-1 < temp_v3) {
    return (char *)(temp_v1 + temp_v3 * 0x18);
  }
  temp_v4 = FUN_00261458();
  temp_v3 = 0;
  temp_v6 = *(unsigned short *)(temp_v4 + 0x66) + 1;
  if (0 < temp_v2) {
    do {
      temp_v4 = temp_v1 + temp_v3 * 0x18;
      if ((((*(short *)(temp_v4 + 0x10) == 0) || (temp_v5 = FUN_0018719c(), temp_v5 != 0)) &&
          ((*(short *)(temp_v4 + 0x12) == 0 || (temp_v5 = FUN_0018719c(), temp_v5 == 0)))) &&
         ((*(unsigned short *)(temp_v4 + 0x14) == 0 || *(unsigned short *)(temp_v4 + 0x14) <= temp_v6 &&
          (*(unsigned short *)(temp_v4 + 0x16) == 0 || temp_v6 <= *(unsigned short *)(temp_v4 + 0x16))))) {
        *(int *)(param_1 + 0x20a8) = temp_v3;
        return (char *)(temp_v1 + temp_v3 * 0x18);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return "NoGroup";
}

} /* extern "C" */
