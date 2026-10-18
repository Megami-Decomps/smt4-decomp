/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109440` (_code @ 0x109440, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00113208. */
extern int FUN_002c0ac8(void);
extern int FUN_002c615c(int);


unsigned char FUN_00109440(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  if ((*(char *)(temp_v0 + 0xf9a) != '\0') && (*(char *)(temp_v0 + 0xf9c) != '\0')) {
    temp_v1 = *(int *)(temp_v0 + 0xfd0) + 1;
    *(int *)(temp_v0 + 0xfd0) = temp_v1;
    if (*(int *)(temp_v0 + 0xfd4) < temp_v1) {
      *(unsigned char *)(temp_v0 + 0xf9a) = 0;
    }
    else {
      temp_v1 = FUN_002c615c(temp_v1 * 0xff);
      temp_v2 = 0xff - temp_v1;
      if ((int)temp_v2 >= 0x100) {
        temp_v2 = 0xff;
      }
      else if ((int)temp_v2 < 0) {
        temp_v2 = 0;
      }
      *(unsigned int *)(temp_v0 + 0xfc8) = temp_v2 | 0xffffff00;
      FUN_00113208(1);
    }
  }
  return 0;
}
