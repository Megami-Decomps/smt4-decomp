/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121e08` (_code @ 0x121e08, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00121e08(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002c34a4(0x100,0x100,0,param_2,0x1000,1);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  puVar2 = (unsigned int *)0x18;
  FUN_002c23f8(0x18,param_2);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(unsigned char *)(puVar2 + 4) = 0;
  }
  *(unsigned int **)(param_1 + 0xc) = puVar2;
  FUN_002bcf34();
  return;
}
