/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348b7c` (_code @ 0x348b7c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00348b7c_arg0 fn_00348b7c_arg0;
struct fn_00348b7c_arg0 {
    unsigned char pad_0x0[0x842];
    ushort field_0x842; /* +0x842 */
    unsigned char pad_0x844[0x4e];
    ushort field_0x892; /* +0x892 */
    unsigned char pad_0x894[0x1a];
    ushort field_0x8ae; /* +0x8ae */
    unsigned char pad_0x8b0[0x1a];
    ushort field_0x8ca; /* +0x8ca */
};

extern int FUN_00287894(fn_00348b7c_arg0 *);
extern int FUN_00298f88(fn_00348b7c_arg0 *);
extern int FUN_002adc88(void);


int FUN_00348b7c(fn_00348b7c_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002adc88();
  temp_v1 = FUN_00298f88(param_1);
  if (temp_v1 != 0) {
    if ((fn_00348b7c_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x842) == param_1) {
      return temp_v0 + 0x842;
    }
    if ((fn_00348b7c_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x850) == param_1) {
      return temp_v0 + 0x850;
    }
    if ((fn_00348b7c_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x85e) == param_1) {
      return temp_v0 + 0x85e;
    }
    if ((fn_00348b7c_arg0 *)(unsigned int)*(unsigned short *)(temp_v0 + 0x86c) == param_1) {
      return temp_v0 + 0x86c;
    }
  }
  else {
    temp_v1 = FUN_00287894(param_1);
    if (temp_v1 == 1) {
      return temp_v0 + 0x87a;
    }
  }
  return 0;
}

} /* extern "C" */
