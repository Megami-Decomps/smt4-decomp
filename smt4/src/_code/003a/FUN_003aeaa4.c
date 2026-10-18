/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeaa4` (_code @ 0x3aeaa4, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 6 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
} param_6_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002d00a4. */


void FUN_003aeaa4(unsigned int param_1,unsigned short param_2,unsigned int param_3,unsigned short param_4,
                 unsigned short param_5,unsigned short param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = param_5;
  temp_v3 = param_6;
  temp_v0 = param_2;
  temp_v1 = param_4;
  temp_v4 = param_3;
  FUN_002d00a4(DAT_00439ca8 + 0x2460,&temp_v0);
  return;
}
