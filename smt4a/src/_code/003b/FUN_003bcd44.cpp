/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcd44` (_code @ 0x3bcd44, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int scrGetArg(int);
int scrSetResult(void);
int FUN_003e00f8(int);

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003e00f8. */


unsigned int FUN_003bcd44(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  
  temp_v0 = scrGetArg(0);
  FUN_003e00f8(temp_v0);
  temp_v1 = scrGetArg(1);
  FUN_0019cac4();
  if (temp_v1 != 0) {
    switch(temp_v0) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  scrSetResult();
  return 1;
}

} /* extern "C" */
