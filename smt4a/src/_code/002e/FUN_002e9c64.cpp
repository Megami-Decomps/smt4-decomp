/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9c64` (_code @ 0x2e9c64, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001324de(unsigned int *, int, unsigned int **, int *);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001324de. */


void FUN_002e9c64(int param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int **ppuVar2;
  unsigned int *temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [2];
  
  ppuVar2 = &temp_v0;
  temp_v2 = *param_3;
  if (param_4 != 0) {
    puVar1 = (unsigned int *)&temp_v3;
    temp_v0 = *(unsigned int **)(param_1 + 0x24);
  }
  else {
    temp_v3 = **(unsigned int **)(param_1 + 0x24);
    ppuVar2 = (unsigned int **)&temp_v3;
    puVar1 = temp_v4;
  }
  temp_v1 = param_2;
  FUN_001324de(puVar1,param_1 + 0x14,ppuVar2,&temp_v1);
  return;
}

} /* extern "C" */
