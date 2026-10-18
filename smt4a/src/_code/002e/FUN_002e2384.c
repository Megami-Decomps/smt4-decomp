/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2384` (_code @ 0x2e2384, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e2384_arg0 fn_002e2384_arg0;
struct fn_002e2384_arg0 {
    unsigned char pad_0x0[0x144];
    undefined4 field_0x144; /* +0x144 */
    unsigned char pad_0x148[0x4];
    undefined4 field_0x14c; /* +0x14c */
    unsigned char pad_0x150[0x1c];
    undefined1 field_0x16c; /* +0x16c */
};

extern unsigned char FUN_002a2cf0(void);
/* Supplied declaration required: FUN_0031d890. */
extern int FUN_0032ec64(void);
extern int FUN_00344784(void);
/* Supplied declaration required: FUN_0037c418. */
/* Supplied declaration required: FUN_003a6278. */


unsigned int FUN_002e2384(fn_002e2384_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = FUN_0032ec64();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00344784();
    if (temp_v1 != 0) {
      FUN_003a6278();
      param_1->field_0x14c = 0;
      param_1->field_0x144 = 1;
      FUN_0031d890();
      temp_v0 = FUN_002a2cf0();
      temp_v2 = 3;
      param_1->field_0x16c = temp_v0;
    }
  }
  else {
    FUN_0037c418();
  }
  return temp_v2;
}
