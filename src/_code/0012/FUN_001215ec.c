/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001215ec` (_code @ 0x1215ec, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00130340. */
/* Supplied declaration required: FUN_00130dcc. */
extern unsigned int FUN_00132a20(int);
extern unsigned int FUN_00132a60(int);
/* Supplied declaration required: FUN_002b4fe4. */


unsigned int FUN_001215ec(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_00132a60(param_1 + 300);
  temp_v1 = FUN_00132a20(param_1 + 300);
  if (param_3 < temp_v1) {
    return 0;
  }
  temp_v2 = param_1 + 0x10c;
  FUN_00130340(temp_v2,temp_v0,0);
  if (temp_v2 != 0) {
    temp_v3 = 0;
    temp_v2 = param_1 + 0x10c;
    FUN_002b4fe4(temp_v2,param_2,temp_v1,&temp_v3);
    if (temp_v2 != 0) {
      if (temp_v3 != temp_v1) {
        return 0;
      }
      FUN_00130dcc(param_1 + 300,param_2);
      return 1;
    }
  }
  *(unsigned int *)(param_1 + 0x170) = *(unsigned int *)(param_1 + 0x124);
  return 0;
}
