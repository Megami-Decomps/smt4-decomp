/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a7c4` (_code @ 0x35a7c4, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275f44(undefined4, int);

typedef struct fn_0035a7c4_arg0 fn_0035a7c4_arg0;
struct fn_0035a7c4_arg0 {
    unsigned char pad_0x0[0x360];
    undefined4 field_0x360; /* +0x360 */
    unsigned char pad_0x364[0x4c];
    undefined4 field_0x3b0; /* +0x3b0 */
    unsigned char pad_0x3b4[0x8];
    int field_0x3bc; /* +0x3bc */
    unsigned char pad_0x3c0[0x1c];
    uint field_0x3dc; /* +0x3dc */
};

extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00388024(void);


unsigned int FUN_0035a7c4(fn_0035a7c4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (param_1->field_0x3bc != 0) {
    if ((param_1->field_0x3bc == 1) && (temp_v0 = FUN_00224880(param_1->field_0x360), temp_v0 == 2)) {
      param_1->field_0x3dc = param_1->field_0x3dc & 0xffffffef;
      param_1->field_0x3bc = 0;
      temp_v1 = FUN_00388024();
      temp_v2 = 3;
      param_1->field_0x3b0 = temp_v1;
    }
  }
  else {
    FUN_00275f44(param_1->field_0x360,0x22);
    param_1->field_0x3bc = param_1->field_0x3bc + 1;
  }
  return temp_v2;
}

} /* extern "C" */
