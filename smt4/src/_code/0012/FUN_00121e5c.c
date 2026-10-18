/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121e5c` (_code @ 0x121e5c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001319d0. */
/* Supplied declaration required: FUN_002b47bc. */
extern unsigned int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002b4828. */
extern int FUN_002c08f0(void);


unsigned int FUN_00121e5c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x754);
  if ((temp_v1 & 1) != 0) {
    if (((temp_v1 & 8) == 0) || ((temp_v1 & 2) != 0)) {
      if (((temp_v1 & 4) != 0) && ((temp_v1 & 2) == 0)) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0xd54);
        temp_v2 = FUN_002b47f4(0x42);
        FUN_002b47bc(temp_v2,temp_v3,0);
        FUN_001319d0();
        *(unsigned int *)(temp_v0 + 0x754) = *(unsigned int *)(temp_v0 + 0x754) & 0xfffffff8;
      }
    }
    else {
      FUN_002b4828(*(unsigned int *)(temp_v0 + 0xd60));
      *(unsigned int *)(temp_v0 + 0x754) = *(unsigned int *)(temp_v0 + 0x754) & 0xfffffff0;
    }
  }
  return 0;
}
