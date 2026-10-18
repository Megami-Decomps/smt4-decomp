/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e716c` (_code @ 0x3e716c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e716c_arg2 fn_003e716c_arg2;
struct fn_003e716c_arg2 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
};

extern int FUN_002a69e4(void);
extern int FUN_002a6a14(unsigned int);
/* Supplied declaration required: FUN_003e6860. */
/* Supplied declaration required: FUN_003e6880. */
/* Supplied declaration required: FUN_003e68c8. */
extern unsigned int FUN_003e6948(int);


unsigned int FUN_003e716c(int param_1,unsigned int param_2,fn_003e716c_arg2 *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002a6a14(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a69e4();
    if (temp_v1 != 2) {
      temp_v2 = 0;
    }
    else {
      temp_v3 = FUN_003e6948(temp_v0);
      temp_v2 = temp_v3;
      FUN_003e68c8();
      param_3->field_0x0 = (char)temp_v2;
      temp_v2 = temp_v3;
      FUN_003e6880();
      param_3->field_0x4 = temp_v2;
      FUN_003e6860();
      param_3->field_0x8 = temp_v3;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
