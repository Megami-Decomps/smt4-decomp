/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010949c` (_code @ 0x10949c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001132fc. */
extern int FUN_002c08f0(void);
extern int FUN_002c5f60(int);


unsigned char FUN_0010949c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c08f0();
  if ((*(char *)(temp_v0 + 0xf9a) != '\0') && (*(char *)(temp_v0 + 0xf9c) != '\0')) {
    temp_v1 = *(int *)(temp_v0 + 0xfd0) + 1;
    *(int *)(temp_v0 + 0xfd0) = temp_v1;
    if (*(int *)(temp_v0 + 0xfd4) < temp_v1) {
      *(unsigned char *)(temp_v0 + 0xf9a) = 0;
    }
    else {
      temp_v1 = FUN_002c5f60(temp_v1 * 0xff);
      temp_v2 = 0xff - temp_v1;
      if ((int)temp_v2 >= 0x100) {
        temp_v2 = 0xff;
      }
      else if ((int)temp_v2 < 0) {
        temp_v2 = 0;
      }
      *(unsigned int *)(temp_v0 + 0xfc8) = temp_v2 | 0xffffff00;
      FUN_001132fc(1);
    }
  }
  return 0;
}
