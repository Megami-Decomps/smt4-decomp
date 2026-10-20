/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a60a8` (_code @ 0x3a60a8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035b394(void);

typedef struct fn_003a60a8_arg0 fn_003a60a8_arg0;
struct fn_003a60a8_arg0 {
    unsigned char pad_0x0[0x3b0];
    undefined4 field_0x3b0; /* +0x3b0 */
    unsigned char pad_0x3b4[0x8];
    unsigned char field_0x3bc; /* +0x3bc */
    unsigned char pad_0x3bd[0x1f];
    uint field_0x3dc; /* +0x3dc */
    unsigned char pad_0x3e0[0x3f5];
    byte field_0x7d5; /* +0x7d5 */
};

/* Supplied declaration required: FUN_0035b394. */
extern unsigned int FUN_00388024(void);
extern int FUN_003a68dc(void);


unsigned int FUN_003a60a8(fn_003a60a8_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (param_1->field_0x7d5 != 1) {
    param_1->field_0x3dc = param_1->field_0x3dc & 0xffffffdf;
    temp_v2 = FUN_00388024();
    param_1->field_0x3b0 = temp_v2;
    return 3;
  }
  temp_v0 = FUN_003a68dc();
  if (temp_v0 != 0) {
    FUN_0035b394();
    param_1->field_0x3dc = param_1->field_0x3dc & 0xffffffdf;
    *(unsigned int *)&param_1->field_0x3bc = 0;
    temp_v1 = FUN_00388024();
    temp_v2 = 3;
    param_1->field_0x3b0 = temp_v1;
  }
  return temp_v2;
}

} /* extern "C" */
