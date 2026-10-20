/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebc50` (_code @ 0x2ebc50, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e5c(int *);
int FUN_002f1468(unsigned int *, int *);
int FUN_002fb208(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern unsigned int FUN_002e6e34(int *, int);
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f1468. */
/* Supplied declaration required: FUN_002fb208. */


int FUN_002ebc50(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int iStack_20;
  unsigned int *puStack_1c;
  unsigned int uStack_18;
  int temp_v1;
  
  iStack_20 = param_1;
  puStack_1c = param_2;
  uStack_18 = param_3;
  temp_v1 = param_4;
  temp_v0 = FUN_002e6e34(&iStack_20,param_1 + 0x10);
  FUN_002fb208();
  puVar2 = (unsigned int *)(param_1 + 0x40);
  temp_v1 = temp_v0;
  FUN_002f1468(puVar2,&temp_v1);
  *puVar2 = *param_2;
  FUN_002e6e5c(&iStack_20);
  return param_1;
}

} /* extern "C" */
