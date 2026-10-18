/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf0c0` (_code @ 0x3cf0c0, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_002475e4. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b4854. */
/* Supplied declaration required: FUN_003db168. */
/* Supplied declaration required: FUN_003db7a8. */
/* Supplied declaration required: FUN_003dc334. */


void FUN_003cf0c0(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4 [5];
  unsigned int temp_v5;
  
  temp_v0 = *(short *)(*(int *)(param_2 + 0x28) + 0x14c);
  temp_v3 = (unsigned int)*(short *)(*(int *)(param_2 + 0x28) + 0x14e);
  if (temp_v0 == 1) {
    temp_v3 = **(unsigned int **)(param_2 + 0x20);
    FUN_002475e4(temp_v4,*param_1);
    FUN_002475e4(temp_v4,*param_1,*(unsigned int *)(param_2 + 0x20));
    temp_v4[0] = temp_v4[0] & 0xffff;
    FUN_003dc334(DAT_00435d18,temp_v5 & 0xff,(temp_v3 & 0x2a) == 0,0);
    return;
  }
  temp_v1 = temp_v3;
  if (temp_v0 != 2 && temp_v0 != 3) {
    if (temp_v0 != 8) {
      return;
    }
    FUN_002b4854();
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    if (temp_v1 == 0) {
      FUN_003db168(DAT_00435d18,temp_v3,(**(unsigned int **)(param_2 + 0x20) & 0x10) == 0,0);
      return;
    }
  }
  temp_v3 = temp_v1;
  FUN_002ae3f0();
  temp_v3 = (*(unsigned int *)(temp_v3 + 0x28) & 0x1ff) >> 5;
  if ((**(unsigned int **)(param_2 + 0x20) & 0x2a) != 0) {
    temp_v2 = (temp_v3 == 2 || temp_v3 == 3) || temp_v3 == 4;
  }
  else {
    temp_v2 = 1;
    if ((**(unsigned int **)(param_2 + 0x20) & 0x10) != 0) {
      temp_v2 = (temp_v3 != 2 && temp_v3 != 3) && temp_v3 != 4;
    }
  }
  FUN_003db7a8(DAT_00435d18,temp_v1,temp_v2,0);
  return;
}
