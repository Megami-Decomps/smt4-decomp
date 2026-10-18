/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0528` (_code @ 0x3a0528, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00152434. */
/* Supplied declaration required: FUN_002315c8. */
/* Supplied declaration required: FUN_00234840. */
/* Supplied declaration required: FUN_002348a0. */
/* Supplied declaration required: FUN_002348e0. */


void FUN_003a0528(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned int temp_v3 [2];
  
  temp_v0 = *(int *)(param_2 + 4);
  FUN_00152434();
  if (temp_v0 != 9) {
    FUN_002315c8(0x2b,0xfa,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_002348e0(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    FUN_002315c8(0x2b,0xfb,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_002348a0(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    FUN_002315c8(0x2b,0xfc,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_00234840(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    return;
  }
  FUN_002315c8(0x2b,0xfd,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_002348e0(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  FUN_002315c8(0x2b,0xfe,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_002348a0(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  FUN_002315c8(0x2b,0xff,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_00234840(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  return;
}
