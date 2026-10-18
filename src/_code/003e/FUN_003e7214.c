/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7214` (_code @ 0x3e7214, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00155748(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001557dc. */
extern int FUN_00155808(void);
extern int FUN_0015582c(int);
extern unsigned int *FUN_003e6a44(unsigned int);


unsigned int FUN_003e7214(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = *(int *)(param_1 + 4);
  puVar2 = (unsigned int *)FUN_003e6a44(*(unsigned int *)(temp_v0 + 0x3c));
  temp_v1 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    temp_v1 = *puVar2;
    temp_v3 = 0xffffffff;
    *param_3 = temp_v1;
    temp_v0 = FUN_00155748(*(unsigned int *)(temp_v0 + 0x3c),temp_v1);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v2 = FUN_00155808();
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 == 2) {
          return 0;
        }
      }
      else {
        FUN_001557dc(temp_v0);
      }
    }
    else {
      temp_v0 = FUN_0015582c(temp_v0);
      temp_v3 = *(unsigned int *)(temp_v0 + 8);
    }
    temp_v1 = 1;
    param_3[1] = temp_v3;
  }
  return temp_v1;
}
