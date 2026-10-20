/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5660` (_code @ 0x1b5660, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001b5660_arg0 fn_001b5660_arg0;
struct fn_001b5660_arg0 {
    unsigned char pad_0x0[0x8e4];
    ushort field_0x8e4; /* +0x8e4 */
    unsigned char pad_0x8e6[0xee];
    ushort field_0x9d4; /* +0x9d4 */
    unsigned char pad_0x9d6[0x16];
    ushort field_0x9ec; /* +0x9ec */
};

extern int gameFlagBlockGet(void);
extern int FUN_001bd100(fn_001b5660_arg0 *);
extern int FUN_001bd118(fn_001b5660_arg0 *);


int FUN_001b5660(fn_001b5660_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = gameFlagBlockGet();
  temp_v1 = FUN_001bd100(param_1);
  if (temp_v1 != 0) {
    if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x8e4) == param_1) {
      temp_v0 = temp_v0 + 0x8e4;
    }
    else if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x8f0) == param_1) {
      temp_v0 = temp_v0 + 0x8f0;
    }
    else if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x8fc) == param_1) {
      temp_v0 = temp_v0 + 0x8fc;
    }
    else {
      if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x908) != param_1) {
        return 0;
      }
      temp_v0 = temp_v0 + 0x908;
    }
    return temp_v0;
  }
  temp_v1 = FUN_001bd118(param_1);
  if (temp_v1 == 1) {
    if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x920) == param_1) {
      return temp_v0 + 0x920;
    }
    temp_v1 = 2;
    do {
      temp_v2 = temp_v0 + temp_v1 * 0xc;
      if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v2 + 0x914) == param_1) {
        return temp_v0 + temp_v1 * 0xc + 0x914;
      }
      if ((fn_001b5660_arg0 *)(unsigned int)*(unsigned short *)(temp_v2 + 0x920) == param_1) {
        return temp_v0 + temp_v1 * 0xc + 0x920;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 0x14);
  }
  return 0;
}

} /* extern "C" */
