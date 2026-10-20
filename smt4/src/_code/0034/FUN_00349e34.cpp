/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349e34` (_code @ 0x349e34, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023ae1c(unsigned int *, unsigned int, int);
int FUN_0023bb00(int *, unsigned int *, int);
int FUN_0023bba0(int *, int);
int rt_memcpy_w(unsigned int *, int, int);

typedef struct fn_00349e34_arg2 fn_00349e34_arg2;
struct fn_00349e34_arg2 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_00490e3e; /* 0x490e3e */

/* Supplied declaration required: FUN_0023ae1c. */
/* Supplied declaration required: FUN_0023bb00. */
/* Supplied declaration required: FUN_0023bba0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00349e34(int param_1,unsigned int *param_2,fn_00349e34_arg2 *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 0xc) + (int)param_3 * 4);
  if (temp_v0 != 0) {
    *param_2 = DAT_00490e3e | 0x80000000;
    param_2[1] = 0xf02c0;
    FUN_0023ae1c(param_2 + 2,param_4,0xbf02c1);
    piVar3 = (int *)(temp_v0 + 0x10);
    if (*piVar3 == 0) {
      piVar1 = piVar3;
      FUN_0023bba0(piVar3,temp_v0 + 0x14);
      *piVar3 = ((int)piVar1 + (-4 - (int)piVar3)) >> 2;
    }
    rt_memcpy_w(param_2 + 0x10,temp_v0 + 0x14,*piVar3 << 2);
    FUN_0023bb00(piVar3,param_2 + 0x10 + *piVar3,temp_v0 + 0x7a0);
    return;
  }
  return;
}

} /* extern "C" */
