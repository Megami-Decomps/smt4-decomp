/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a283c` (_code @ 0x2a283c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002277d8(void);
int scrScriptProcessStartEntry(undefined4, int);
int FUN_0031d890(void);

typedef struct fn_002a283c_arg0 fn_002a283c_arg0;
struct fn_002a283c_arg0 {
    unsigned char pad_0x0[0xf4];
    undefined4 field_0xf4; /* +0xf4 */
    unsigned char pad_0xf8[0x4c];
    undefined4 field_0x144; /* +0x144 */
    unsigned char pad_0x148[0x4];
    undefined4 field_0x14c; /* +0x14c */
    int field_0x150; /* +0x150 */
};

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_002277d8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_0031d890. */


unsigned int FUN_002a283c(fn_002a283c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_1->field_0x150 != 0) {
    if ((param_1->field_0x150 == 1) && (temp_v0 = scrRunOpcodesStub(param_1->field_0xf4), temp_v0 == 2)) {
      param_1->field_0x14c = 0;
      param_1->field_0x144 = 1;
      param_1->field_0x150 = 0;
      FUN_0031d890();
      FUN_002277d8();
      temp_v1 = 3;
    }
  }
  else {
    scrScriptProcessStartEntry(param_1->field_0xf4,0x10);
    param_1->field_0x150 = param_1->field_0x150 + 1;
  }
  return temp_v1;
}

} /* extern "C" */
