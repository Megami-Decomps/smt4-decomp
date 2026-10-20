/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284dc4` (_code @ 0x284dc4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(void);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned short *FUN_00192798(void);


unsigned int FUN_00284dc4(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00187180(0x35,1);
  puVar2 = (unsigned short *)FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v1) {
    do {
      if ((((*puVar2 == param_1) && ((puVar2[7] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
          ((puVar2[8] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 != 0)))) &&
         (((puVar2[9] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)) &&
          ((puVar2[10] == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))))) {
        return 1;
      }
      temp_v3 = temp_v3 + 1;
      puVar2 = puVar2 + 0x2a;
    } while (temp_v3 < temp_v1);
  }
  return 0;
}

} /* extern "C" */
