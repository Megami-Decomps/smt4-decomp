/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001298b8` (_code @ 0x1298b8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0030e6cd; /* 0x30e6cd */
extern unsigned char DAT_0055a920; /* 0x55a920 */
extern unsigned int DAT_00594a00; /* 0x594a00 */

extern unsigned int FUN_002e6dac(int);
extern unsigned int *FUN_002f5010(unsigned int);
/* Supplied declaration required: FUN_002f5020. */
extern unsigned int *FUN_0030cbc0(int, int);


void FUN_001298b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((DAT_00594a00 == 0xffffffff) &&
     (puVar1 = (unsigned int *)FUN_002f5010(0xfffffff4), puVar1 != (unsigned int *)0x0)) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0x14;
    FUN_002f5020(puVar1 + 2,&LAB_0030e6cd,0x14,0xffffffff);
  }
  temp_v0 = FUN_002e6dac(DAT_00594a00 * 0x14);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  for (temp_v2 = 0; temp_v2 < DAT_00594a00; temp_v2 = temp_v2 + 1) {
    temp_v1 = *(int *)(param_1 + 8) + temp_v2 * 0x14;
    if (temp_v1 != 0) {
      puVar1 = (unsigned int *)FUN_0030cbc0(temp_v1,param_1 + 0x20);
      *puVar1 = (unsigned int)&DAT_0055a920;
    }
  }
  return;
}
