/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003056a0` (_code @ 0x3056a0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002fbac6. */
/* Supplied declaration required: FUN_002fd108. */
/* Supplied declaration required: FUN_002fd180. */


unsigned int
FUN_003056a0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [24];
  unsigned int uStack_24;
  unsigned int temp_v1;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_24 = param_1;
  temp_v1 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002f8728(temp_v0);
  FUN_002fbac6(temp_v0,param_3);
  FUN_002fd108(param_1,temp_v1,0,0,temp_v0,param_4,param_5,0,param_6);
  FUN_002fd180(temp_v0);
  return param_1;
}
