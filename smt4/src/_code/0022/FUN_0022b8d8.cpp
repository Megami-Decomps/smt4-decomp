/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b8d8` (_code @ 0x22b8d8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e4a4(...);

typedef struct fn_0022b8d8_arg0 fn_0022b8d8_arg0;
struct fn_0022b8d8_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x57];
    undefined4 field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x15];
    undefined1 field_0x71; /* +0x71 */
    byte field_0x72; /* +0x72 */
    unsigned char pad_0x73[0x4b9];
    int field_0x52c; /* +0x52c */
};

/* Supplied declaration required: FUN_0022e4a4. */


void FUN_0022b8d8(fn_0022b8d8_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < param_1->field_0x52c) {
    do {
      if (*(unsigned char *)(*(int *)(&param_1[1].field_0x0 + temp_v0 * 4) + 0x20) == param_2) {
        if (temp_v0 < 10) {
          FUN_0022e4a4(param_1,0,temp_v0);
          return;
        }
        FUN_0022e4a4(param_1,temp_v0 - 9,9);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1->field_0x52c);
  }
  return;
}

} /* extern "C" */
