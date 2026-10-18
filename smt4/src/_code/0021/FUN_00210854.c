/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210854` (_code @ 0x210854, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_8_stack;

/* Supplied declaration required: FUN_00144fa8. */


void FUN_00210854(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int uStack_44;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_30;
  unsigned short temp_v5;
  unsigned short temp_v6;
  
  temp_v0 = param_1 | 0x8000;
  temp_v1 = param_5;
  temp_v2 = param_8;
  temp_v3 = 0;
  temp_v4 = param_6;
  uStack_30 = param_7;
  temp_v5 = 1;
  temp_v6 = 1;
  uStack_44 = param_4;
  FUN_00144fa8(param_2,param_3,&temp_v0);
  return;
}
