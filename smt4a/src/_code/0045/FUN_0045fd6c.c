/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fd6c` (_code @ 0x45fd6c, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0045fd6c_arg0 fn_0045fd6c_arg0;
struct fn_0045fd6c_arg0 {
    unsigned char pad_0x0[0x204];
    unsigned char field_0x204; /* +0x204 */
    unsigned char pad_0x205[0x2e4b];
    int field_0x3050; /* +0x3050 */
    int field_0x3054; /* +0x3054 */
    unsigned char pad_0x3058[0x8];
    int field_0x3060; /* +0x3060 */
    int field_0x3064; /* +0x3064 */
    unsigned char pad_0x3068[0x8];
    int field_0x3070; /* +0x3070 */
    int field_0x3074; /* +0x3074 */
    unsigned char pad_0x3078[0x8];
    int field_0x3080; /* +0x3080 */
    int field_0x3084; /* +0x3084 */
};

/* Supplied declaration required: FUN_0045f6d8. */


void FUN_0045fd6c(fn_0045fd6c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  FUN_0045f6d8();
  temp_v0 = *(unsigned short *)&param_1[1].field_0x204;
  if (((temp_v0 & 1) != 0) && (param_1->field_0x3054 < param_1->field_0x3050)) {
    param_1->field_0x3054 = param_1->field_0x3054 + 1;
  }
  if ((((temp_v0 >> 1) & 1) != 0) && (param_1->field_0x3064 < param_1->field_0x3060)) {
    param_1->field_0x3064 = param_1->field_0x3064 + 1;
  }
  if ((((temp_v0 >> 2) & 1) != 0) && (param_1->field_0x3074 < param_1->field_0x3070)) {
    param_1->field_0x3074 = param_1->field_0x3074 + 1;
  }
  if (((int)((unsigned int)(temp_v0 >> 2) << 0x1e) < 0) && (param_1->field_0x3084 < param_1->field_0x3080)) {
    param_1->field_0x3084 = param_1->field_0x3084 + 1;
  }
  return;
}
