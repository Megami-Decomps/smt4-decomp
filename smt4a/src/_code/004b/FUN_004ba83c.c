/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba83c` (_code @ 0x4ba83c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004ba83c_arg0 fn_004ba83c_arg0;
struct fn_004ba83c_arg0 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x47];
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x15];
    undefined1 field_0x61; /* +0x61 */
    byte field_0x62; /* +0x62 */
    unsigned char pad_0x63[0x785];
    int field_0x7e8; /* +0x7e8 */
};

/* Supplied declaration required: FUN_004d00a4. */


void FUN_004ba83c(fn_004ba83c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < param_1->field_0x7e8) {
    do {
      if (*(unsigned char *)(*(int *)(&param_1[1].field_0x0 + temp_v0 * 4) + 0x20) == param_2) {
        if (temp_v0 < 10) {
          FUN_004d00a4(param_1,0,temp_v0);
          return;
        }
        FUN_004d00a4(param_1,temp_v0 - 9,9);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1->field_0x7e8);
  }
  return;
}
