/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b9c0` (_code @ 0x35b9c0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001800b8(void);
int FUN_00387368(void);

extern int DAT_0059dbfc; /* 0x59dbfc */
extern int DAT_0059dc10; /* 0x59dc10 */

/* Supplied declaration required: FUN_001800b8. */
extern int FUN_002721e4(int);
extern int FUN_0037a7f4(void);
/* Supplied declaration required: FUN_00387368. */


void FUN_0035b9c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (DAT_0059dc10 != 0) {
    FUN_001800b8();
    DAT_0059dc10 = 0;
  }
  temp_v0 = DAT_0059dbfc;
  if ((DAT_0059dbfc != 0) && (temp_v1 = FUN_002721e4(DAT_0059dbfc), temp_v1 != 0)) {
    if (*(short *)(temp_v0 + 0x1c) != 1) {
      if (*(short *)(temp_v0 + 0x1c) != 9) {
        return;
      }
      FUN_00387368();
    }
    else {
      temp_v1 = FUN_0037a7f4();
    }
    if (temp_v1 != 0) {
      DAT_0059dc10 = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
