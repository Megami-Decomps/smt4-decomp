/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eed54` (_code @ 0x2eed54, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002eed74. */


void FUN_002eed54(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  unsigned int *puStack_1c;
  unsigned int uStack_18;
  unsigned char uStack_14;
  
  pcVar1 = *(romwright_code **)(param_1 + 0xc);
  temp_v0 = param_2;
  puStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002eed74();
  temp_v0 = *param_3;
  puStack_1c = (unsigned int *)param_3[1];
  uStack_18 = param_3[2];
  (*pcVar1)(param_2,&temp_v0,param_1 + 0x10,&uStack_14);
  return;
}
