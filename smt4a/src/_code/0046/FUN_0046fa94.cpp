/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046fa94` (_code @ 0x46fa94, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019b770(unsigned int, unsigned char [72], unsigned int, int);
int FUN_001ab8e0(unsigned char [72], unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_8_stack;

extern unsigned int asdTMTexTableGetNode(int, unsigned int);
/* Supplied declaration required: FUN_0019b770. */
/* Supplied declaration required: FUN_001ab8e0. */
extern int FUN_001b2ca4(unsigned int, unsigned int, unsigned int);


void FUN_0046fa94(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2 [72];
  
  temp_v1 = 0x17;
  if (param_4 == 0x19) {
    temp_v1 = 0x3b;
  }
  temp_v0 = FUN_001b2ca4(param_1,temp_v1,param_5);
  if (temp_v0 != 0) {
    puVar3 = *(unsigned int **)(temp_v0 + 4);
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  temp_v1 = asdTMTexTableGetNode(param_4,param_5);
  FUN_001ab8e0(temp_v2,param_3,param_6,param_7,param_8);
  FUN_0019b770(**(int **)(*(int *)*puVar3 + 4) + (unsigned int)(param_4 != 0x19) * 0x14,temp_v2,temp_v1,0);
  return;
}

} /* extern "C" */
