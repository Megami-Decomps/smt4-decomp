/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneBuilder_CreateObject` (_code @ 0x2c2fbc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002aaa88. */


void nw_gfx_SceneBuilder_CreateObject(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_002aaa88(param_1,0,0,0,*param_1,param_2,param_3,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
