/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023dcbc` (_code @ 0x23dcbc, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00229f30(unsigned short);
extern int FUN_002b6b20(void);
extern unsigned int FUN_002b6b38(void);


unsigned int FUN_0023dcbc(void)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_002b6b38();
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v1 = FUN_002b6b20();
    temp_v1 = FUN_00229f30(*(unsigned short *)(temp_v1 + 0x46));
    if ((*(unsigned short *)(temp_v1 + 4) & 1) != 0) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
