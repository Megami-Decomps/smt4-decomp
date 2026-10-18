/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004740b4` (_code @ 0x4740b4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004740b4_arg0 fn_004740b4_arg0;
struct fn_004740b4_arg0 {
    unsigned char pad_0x0[0x45];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x2];
    int field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
};

extern int FUN_00192748(void);
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001a6f60. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0030cb44. */


void FUN_004740b4(fn_004740b4_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = param_1->field_0x45 != 0;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x48;
  }
  if (temp_v1 && temp_v0 != 0) {
    FUN_001a6f60(temp_v0,0);
    FUN_00192798();
  }
  temp_v1 = param_1->field_0x45 != 0;
  temp_v0 = 0;
  if (temp_v1) {
    temp_v0 = param_1->field_0x48;
  }
  if (temp_v1 && temp_v0 != 0) {
    FUN_001a6f60(temp_v0,0);
    temp_v0 = FUN_00192748();
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 << 4;
      FUN_0030cb44();
      if (temp_v0 != 0) {
        FUN_002f5020();
      }
      param_1->field_0x4c = temp_v0;
    }
  }
  return;
}
