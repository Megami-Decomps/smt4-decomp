/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bbb74` (_code @ 0x2bbb74, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023ae58(unsigned int *, unsigned int, int);
int FUN_002af390(unsigned int *, unsigned int *);
int FUN_002b7148(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0023ae58. */
/* Supplied declaration required: FUN_002af390. */
/* Supplied declaration required: FUN_002b7148. */


void FUN_002bbb74(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = param_1;
  FUN_002b7148();
  *puVar1 = *(unsigned char *)((int)param_1 + 0x12a3a) | 0x80000000;
  puVar1[1] = 0xf02c0;
  FUN_0023ae58(puVar1 + 2,param_2,0xff02c1);
  FUN_002af390(puVar1,puVar1 + 0x14);
  return;
}

} /* extern "C" */
