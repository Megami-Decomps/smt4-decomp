/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013dc70` (_code @ 0x13dc70, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014a960. */
extern int FUN_00164a9c(void);
extern int aeabi_idivmod(int);


unsigned char FUN_0013dc70(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00164a9c();
  if ((*(char *)(temp_v0 + 0x144e) != '\0') && (*(char *)(temp_v0 + 0x1450) != '\0')) {
    temp_v1 = *(int *)(temp_v0 + 0x1484) + 1;
    *(int *)(temp_v0 + 0x1484) = temp_v1;
    if (*(int *)(temp_v0 + 0x1488) < temp_v1) {
      *(unsigned char *)(temp_v0 + 0x144e) = 0;
    }
    else {
      temp_v1 = aeabi_idivmod(temp_v1 * 0xff);
      temp_v2 = 0xff - temp_v1;
      if ((int)temp_v2 >= 0x100) {
        temp_v2 = 0xff;
      }
      else if ((int)temp_v2 < 0) {
        temp_v2 = 0;
      }
      *(unsigned int *)(temp_v0 + 0x147c) = temp_v2 | 0xffffff00;
      FUN_0014a960(1);
    }
  }
  return 0;
}
