/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148bb8` (_code @ 0x148bb8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned int gameFlagIsSet(void);


unsigned int FUN_00148bb8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  short temp_v2 [32];
  
  temp_v2[0] = 0;
  temp_v2[1] = 0x484;
  temp_v2[2] = 0x485;
  temp_v2[3] = 0x486;
  temp_v2[4] = 0x487;
  temp_v2[5] = 0x488;
  temp_v2[6] = 0x487;
  temp_v2[7] = 0x487;
  temp_v2[8] = 0;
  temp_v2[9] = 0;
  temp_v2[10] = 0;
  temp_v2[0xb] = 0;
  temp_v2[0xc] = 0x48b;
  temp_v2[0xd] = 0;
  temp_v2[0xe] = 0;
  temp_v2[0xf] = 0x484;
  temp_v2[0x10] = 0x485;
  temp_v2[0x11] = 0x486;
  temp_v2[0x12] = 0x487;
  temp_v2[0x13] = 0x487;
  temp_v2[0x14] = 0x488;
  temp_v2[0x15] = 0x489;
  temp_v2[0x16] = 0x48a;
  temp_v2[0x17] = 0;
  temp_v2[0x18] = 0;
  temp_v2[0x19] = 0;
  temp_v2[0x1a] = 0;
  temp_v2[0x1b] = 0x48b;
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    temp_v0 = temp_v2[param_1 + 0xe];
  }
  else {
    temp_v0 = temp_v2[param_1];
  }
  if (temp_v0 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  temp_v1 = gameFlagIsSet();
                    /* WARNING: Treating indirect jump as return */
  return temp_v1;
}

} /* extern "C" */
