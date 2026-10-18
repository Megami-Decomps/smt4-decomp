/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e98e0` (_code @ 0x3e98e0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e98e0_arg0 fn_003e98e0_arg0;
struct fn_003e98e0_arg0 {
    unsigned char pad_0x0[0x3034];
    int field_0x3034; /* +0x3034 */
    unsigned char pad_0x3038[0x1570];
    uint field_0x45a8; /* +0x45a8 */
    uint field_0x45ac; /* +0x45ac */
};

extern unsigned int DAT_00573b18; /* 0x573b18 */
extern unsigned int DAT_00573b1c; /* 0x573b1c */

extern int FUN_00330a80(int);


unsigned int FUN_003e98e0(fn_003e98e0_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (((param_1->field_0x45ac & DAT_00573b1c) == 0 && (param_1->field_0x45a8 & DAT_00573b18) == 0)
     && (param_1->field_0x3034 - 1U >= 4)) {
    temp_v1 = 0;
    temp_v2 = temp_v1;
    do {
      temp_v0 = FUN_00330a80(temp_v1);
      temp_v1 = temp_v1 + 1;
      if (*(short *)(temp_v0 + 0x60) != 0) {
        temp_v2 = temp_v2 + 1;
      }
    } while (temp_v1 < 0x20);
    if (temp_v2 < 1) {
      return 0;
    }
  }
  return 1;
}
