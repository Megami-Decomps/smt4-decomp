/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4810` (_code @ 0x2b4810, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00123934. */
/* Supplied declaration required: FUN_0013c584. */
/* Supplied declaration required: FUN_0013c5f4. */
/* Supplied declaration required: FUN_0013c684. */
/* Supplied declaration required: FUN_0013c6b4. */
/* Supplied declaration required: FUN_00147390. */


void FUN_002b4810(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int uStack_f9c;
  unsigned char uStack_bc;
  unsigned char temp_v1 [20];
  
  FUN_00123934();
  FUN_0013c584(temp_v0);
  uStack_bc = 0;
  uStack_f9c = param_2;
  FUN_00147390();
  FUN_0013c684();
  FUN_0013c6b4();
  FUN_0013c5f4(temp_v1,temp_v0);
  return;
}
