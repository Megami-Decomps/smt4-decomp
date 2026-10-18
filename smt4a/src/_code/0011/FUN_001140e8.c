/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001140e8` (_code @ 0x1140e8, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002f3edc. */
/* Supplied declaration required: FUN_002f3f72. */
/* Supplied declaration required: FUN_002ff088. */
/* Supplied declaration required: FUN_002ff0ea. */


void FUN_001140e8(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  int iStack_14;
  int uStack_10;
  
  iStack_14 = param_1;
  uStack_10 = param_2;
  FUN_002ff088(&temp_v2,param_1 + 0x20,&uStack_10);
  temp_v3 = temp_v2;
  FUN_002ff0ea(&temp_v4,param_1 + 0x20,&temp_v3);
  FUN_002f3edc(&temp_v0,param_1 + 0x3c,&uStack_10);
  temp_v4 = temp_v1;
  temp_v3 = temp_v0;
  FUN_002f3f72(temp_v5,param_1 + 0x3c,&temp_v3,&temp_v4);
  return;
}
