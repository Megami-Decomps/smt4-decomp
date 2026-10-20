/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005142c4` (_code @ 0x5142c4, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ad528(void);

/* Supplied declaration required: FUN_004ad528. */


unsigned int FUN_005142c4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    temp_v0 = *(int *)(param_1 + 4);
    FUN_004ad528();
    if (temp_v0 == 0x46) {
      return 0xc;
    }
    if (temp_v0 >= 0x47) {
      if (temp_v0 < 0x4c) {
        switch(temp_v0) {
        case 0x47:
          return 0xe;
        case 0x48:
          return 0xf;
        case 0x49:
          return 6;
        }
      }
      return 4;
    }
    if (temp_v0 == 0x41) {
      return 4;
    }
    if (temp_v0 >= 0x42) {
      if (temp_v0 == 0x42) {
        return 5;
      }
      if (temp_v0 != 0x43) {
        if (temp_v0 == 0x44) {
          return 9;
        }
        if (temp_v0 != 0x45) {
          return 4;
        }
      }
      return 6;
    }
    if (temp_v0 == 2) {
      return 0x10;
    }
    if (temp_v0 < 3) {
      if (temp_v0 == 0) {
        return 0;
      }
      if (temp_v0 == 1) {
        return 3;
      }
      return 4;
    }
    if (temp_v0 == 3) {
      return 0x11;
    }
    if (temp_v0 != 0x40) {
      return 4;
    }
  }
  return 1;
}

} /* extern "C" */
