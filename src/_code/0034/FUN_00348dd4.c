/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348dd4` (_code @ 0x348dd4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00348dd4_arg0 fn_00348dd4_arg0;
struct fn_00348dd4_arg0 {
    unsigned char pad_0x0[0x842];
    ushort field_0x842; /* +0x842 */
    unsigned char pad_0x844[0x4e];
    ushort field_0x892; /* +0x892 */
    unsigned char pad_0x894[0x1a];
    ushort field_0x8ae; /* +0x8ae */
    unsigned char pad_0x8b0[0x1a];
    ushort field_0x8ca; /* +0x8ca */
};

extern int FUN_00287afc(fn_00348dd4_arg0 *);
extern int FUN_00299224(fn_00348dd4_arg0 *);
extern int FUN_002adf14(void);


int FUN_00348dd4(fn_00348dd4_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002adf14();
  temp_v1 = FUN_00299224(param_1);
  if (temp_v1 != 0) {
    if ((unsigned int)(uint)*(unsigned int)(temp_v0 + 0x842) == param_1) {
      return temp_v0 + 0x842;
    }
    if ((unsigned int)(uint)*(unsigned int)(temp_v0 + 0x850) == param_1) {
      return temp_v0 + 0x850;
    }
    if ((unsigned int)(uint)*(unsigned int)(temp_v0 + 0x85e) == param_1) {
      return temp_v0 + 0x85e;
    }
    if ((unsigned int)(uint)*(unsigned int)(temp_v0 + 0x86c) == param_1) {
      return temp_v0 + 0x86c;
    }
  }
  else {
    temp_v1 = FUN_00287afc(param_1);
    if (temp_v1 == 1) {
      return temp_v0 + 0x87a;
    }
  }
  return 0;
}
