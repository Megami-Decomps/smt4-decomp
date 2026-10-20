/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158900` (_code @ 0x158900, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(int *);
int FUN_001883b0(int, unsigned short [264], unsigned int);
int FUN_002e3c44(unsigned short *, int, int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_002e3c44. */


void FUN_00158900(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short temp_v1 [264];
  int temp_v2;
  unsigned int temp_v3;
  
  puVar3 = temp_v1;
  temp_v2 = 0;
  temp_v3 = 0;
  refIsNullOrZero(&temp_v2);
  while ((temp_v0 = FUN_00100836(param_2,0x105,(unsigned int *)&temp_v2), temp_v0 != 0 &&
         (puVar2 = puVar3, FUN_002e3c44(puVar3,param_2,temp_v0,&temp_v2), puVar2 != (unsigned short *)0x0
         ))) {
    puVar3 = puVar3 + 1;
    param_2 = param_2 + temp_v0;
  }
  *puVar3 = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  FUN_001883b0(param_1,temp_v1,param_3);
  return;
}

} /* extern "C" */
