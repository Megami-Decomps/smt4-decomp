/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00419d8c` (_code @ 0x419d8c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a270(unsigned int *, unsigned int, int);
int FUN_00500fe4(int *, unsigned int *, int);
int FUN_00501084(int *, int);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_005dee3e; /* 0x5dee3e */

/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_00500fe4. */
/* Supplied declaration required: FUN_00501084. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00419d8c(int param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 0xc) + param_3 * 4);
  if (temp_v0 != 0) {
    *param_2 = DAT_005dee3e | 0x80000000;
    param_2[1] = 0xf02c0;
    FUN_0019a270(param_2 + 2,param_4,0xbf02c1);
    piVar3 = (int *)(temp_v0 + 0x10);
    if (*piVar3 == 0) {
      piVar1 = piVar3;
      FUN_00501084(piVar3,temp_v0 + 0x14);
      *piVar3 = ((int)piVar1 + (-4 - (int)piVar3)) >> 2;
    }
    rt_memcpy_w(param_2 + 0x10,temp_v0 + 0x14,*piVar3 << 2);
    FUN_00500fe4(piVar3,param_2 + 0x10 + *piVar3,temp_v0 + 0x7a0);
    return;
  }
  return;
}

} /* extern "C" */
