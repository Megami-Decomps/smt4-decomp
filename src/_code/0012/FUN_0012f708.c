/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f708` (_code @ 0x12f708, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012f708_arg0 fn_0012f708_arg0;
struct fn_0012f708_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x170];
    undefined4 field_0x184; /* +0x184 */
    unsigned char pad_0x188[0x90];
    undefined4 field_0x218; /* +0x218 */
    undefined4 field_0x21c; /* +0x21c */
};

/* Supplied declaration required: FUN_002b4d78. */
/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern unsigned int FUN_002bb0b4(int, unsigned int);
extern int FUN_002bb218(void);


void FUN_0012f708(fn_0012f708_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002bb218();
  temp_v1 = temp_v0;
  FUN_002b5148(temp_v0,5);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x32;
  *(fn_0012f708_arg0 **)(temp_v1 + 0x10) = param_1;
  FUN_002b5124(temp_v0,temp_v1);
  temp_v2 = FUN_002bb0b4(temp_v0,1);
  FUN_002b4d78(temp_v0,temp_v2);
  param_1->field_0x21c = 0;
  param_1->field_0x218 = 0;
  return;
}
