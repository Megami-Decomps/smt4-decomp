/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fc7dc` (_code @ 0x3fc7dc, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fc7dc_arg0 fn_003fc7dc_arg0;
typedef struct fn_003fc7dc_arg0_pc fn_003fc7dc_arg0_pc;
struct fn_003fc7dc_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x1];
    ushort field_0x6; /* +0x6 */
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1];
    unsigned char field_0xa; /* +0xa */
    unsigned char pad_0xb[0x1];
    fn_003fc7dc_arg0_pc *field_0xc; /* +0xc */
};
struct fn_003fc7dc_arg0_pc {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
};


unsigned int FUN_003fc7dc(fn_003fc7dc_arg0 *param_1,unsigned int param_2)

{
  fn_003fc7dc_arg0_pc *pfVar1;
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  if (param_1->field_0x4 != 2) {
    if (param_1->field_0x4 == 3) {
      for (pfVar1 = param_1->field_0xc; pfVar1 != (fn_003fc7dc_arg0_pc *)&param_1->field_0x8;
          pfVar1 = (fn_003fc7dc_arg0_pc *)pfVar1->field_0x4) {
        temp_v1 = param_2 <= pfVar1->field_0x8;
        temp_v0 = pfVar1->field_0x8 == param_2;
        if (!temp_v1 || temp_v0) {
          temp_v1 = pfVar1->field_0xa <= param_2;
          temp_v0 = param_2 == pfVar1->field_0xa;
        }
        if (!temp_v1 || temp_v0) {
          return 1;
        }
      }
    }
  }
  else if (param_1->field_0x6 == param_2) {
    return 1;
  }
  return 0;
}
