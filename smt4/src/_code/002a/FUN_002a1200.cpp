/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1200` (_code @ 0x2a1200, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned int FUN_002a12d8(void);


unsigned int FUN_002a1200(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002a12d8();
  if ((temp_v0 & 0x3fc00) == 0x13800) {
    temp_v0 = temp_v0 & 0x3ff;
    temp_v1 = temp_v0 - 0xc0;
    temp_v2 = temp_v1 >= 0x40;
    if (temp_v2) {
      temp_v1 = temp_v0 - 0x140;
    }
    temp_v3 = temp_v2 && temp_v1 >= 0x40;
    if (temp_v2 && temp_v1 >= 0x40) {
      temp_v3 = temp_v0 - 0x40 >= 0x20;
    }
    if (!temp_v3) {
                    /* WARNING: Treating indirect jump as return */
      return 1;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}

} /* extern "C" */
