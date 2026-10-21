/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a116c` (_code @ 0x2a116c, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned int legacyResourceIdRemap(void);


unsigned int FUN_002a116c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = legacyResourceIdRemap();
  if ((temp_v0 & 0x3fc00) == 0x13800) {
    if (temp_v0 == 0xc9413910) {
      return 1;
    }
    if ((int)temp_v0 < -0x36bec6f0) {
      if (temp_v0 == 0xc8a13909) {
        return 1;
      }
      temp_v1 = 0;
      if (temp_v0 != 0xc8c13885) {
        temp_v1 = temp_v0 + 0x36bec77b;
      }
      if (temp_v0 == 0xc8c13885 || temp_v1 == 0x88) {
        return 1;
      }
    }
    else {
      temp_v1 = 0;
      if (temp_v0 != 0xc9413912) {
        temp_v1 = temp_v0 + 0x369ec6ee;
      }
      if (temp_v0 == 0xc9413912 || temp_v1 == 8) {
        return 1;
      }
    }
    if (((temp_v0 & 0x3ff) >= 0x60) && ((temp_v0 & 0x3ff) < 0x80)) {
                    /* WARNING: Treating indirect jump as return */
      return 1;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}

} /* extern "C" */
