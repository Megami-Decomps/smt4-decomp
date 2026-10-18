/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7398` (_code @ 0x3e7398, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e7398_arg2 fn_003e7398_arg2;
struct fn_003e7398_arg2 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
};

extern int FUN_002a6d28(void);
extern int FUN_002a6d58(unsigned int);
/* Supplied declaration required: FUN_003e6a8c. */
/* Supplied declaration required: FUN_003e6aac. */
/* Supplied declaration required: FUN_003e6af4. */
extern unsigned int FUN_003e6b74(int);


unsigned int FUN_003e7398(int param_1,unsigned int param_2,fn_003e7398_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a6d28();
    if (temp_v1 != 2) {
      temp_v2 = 0;
    }
    else {
      temp_v3 = FUN_003e6b74(temp_v0);
      temp_v2 = temp_v3;
      FUN_003e6af4();
      param_3->field_0x0 = (char)temp_v2;
      temp_v2 = temp_v3;
      FUN_003e6aac();
      param_3->field_0x4 = temp_v2;
      FUN_003e6a8c();
      param_3->field_0x8 = temp_v3;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
