/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a0f0` (_code @ 0x37a0f0, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037a0f0_arg0 fn_0037a0f0_arg0;
struct fn_0037a0f0_arg0 {
    unsigned char pad_0x0[0x204];
    unsigned char field_0x204; /* +0x204 */
    unsigned char pad_0x205[0x2787];
    int field_0x298c; /* +0x298c */
    int field_0x2990; /* +0x2990 */
    unsigned char pad_0x2994[0x8];
    int field_0x299c; /* +0x299c */
    int field_0x29a0; /* +0x29a0 */
    unsigned char pad_0x29a4[0x8];
    int field_0x29ac; /* +0x29ac */
    int field_0x29b0; /* +0x29b0 */
    unsigned char pad_0x29b4[0x8];
    int field_0x29bc; /* +0x29bc */
    int field_0x29c0; /* +0x29c0 */
};

/* Supplied declaration required: FUN_00379ad0. */


void FUN_0037a0f0(fn_0037a0f0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  
  FUN_00379ad0();
  temp_v0 = *(unsigned short *)&param_1[1].field_0x204;
  if (((temp_v0 & 1) != 0) && (param_1->field_0x2990 < param_1->field_0x298c)) {
    param_1->field_0x2990 = param_1->field_0x2990 + 1;
  }
  if ((((temp_v0 >> 1) & 1) != 0) && (param_1->field_0x29a0 < param_1->field_0x299c)) {
    param_1->field_0x29a0 = param_1->field_0x29a0 + 1;
  }
  if ((((temp_v0 >> 2) & 1) != 0) && (param_1->field_0x29b0 < param_1->field_0x29ac)) {
    param_1->field_0x29b0 = param_1->field_0x29b0 + 1;
  }
  if (((int)((unsigned int)(temp_v0 >> 2) << 0x1e) < 0) && (param_1->field_0x29c0 < param_1->field_0x29bc)) {
    param_1->field_0x29c0 = param_1->field_0x29c0 + 1;
  }
  return;
}
