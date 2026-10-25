/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101518` (_code @ 0x101518, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __rw_string_rep_allocate(int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: __rw_string_rep_allocate. */
extern unsigned int *_ZSt3maxIjERKT_S2_S2_(unsigned int *, unsigned int *);


int FUN_00101518(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0 [2];
  int iStack_20;
  unsigned int uStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  
  temp_v0[0] = (param_2 >> 1) + param_2 + (param_2 >> 3);
  if (temp_v0[0] < param_2 + 0x20) {
    temp_v0[0] = param_2 + 0x20;
  }
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  puVar1 = (unsigned int *)_ZSt3maxIjERKT_S2_S2_(temp_v0,(unsigned int *)&uStack_18);
  __rw_string_rep_allocate(param_1,*puVar1,param_4);
  return param_1 + 0xc;
}

} /* extern "C" */
