/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388eb4` (_code @ 0x388eb4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6d1c(unsigned char [68], unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002a8ac4(int, unsigned char [68], unsigned int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_7_stack;

/* Supplied declaration required: FUN_002a6d1c. */
extern int FUN_002a6d50(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8ac4. */
extern unsigned int asdTMTexTableCallFileB(unsigned int, unsigned int);


void FUN_00388eb4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2 [68];
  
  temp_v0 = FUN_002a6d50(param_1,0x17,param_4);
  puVar3 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar3 = *(unsigned int **)(temp_v0 + 4);
  }
  temp_v1 = asdTMTexTableCallFileB(0x17,param_4);
  FUN_002a6d1c(temp_v2,param_3,param_5,param_6,param_7);
  FUN_002a8ac4(**(int **)(*(int *)*puVar3 + 4) + 0x14,temp_v2,temp_v1);
  return;
}

} /* extern "C" */
