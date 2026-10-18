/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157c3c` (_code @ 0x157c3c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_0016d338. */
/* Supplied declaration required: FUN_00177684. */
/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_0019a2ac. */
/* Supplied declaration required: FUN_0019eafc. */
extern int FUN_001a0778(unsigned int *, int);
extern int FUN_001a07c4(int, int *, int, int);


void FUN_00157c3c(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int *puVar6;
  int temp_v4;
  
  temp_v0 = *(unsigned int *)(param_2 + 4);
  piVar4 = *(int **)(param_1 + 0xac);
  temp_v4 = param_4;
  FUN_00177684(temp_v0,1);
  FUN_0019eafc();
  FUN_0016d338(piVar4,temp_v0);
  puVar6 = (unsigned int *)*piVar4;
  *puVar6 = *(unsigned char *)(param_1 + 0xb2) | 0x80000000;
  puVar6[1] = 0xf02c0;
  FUN_0019a2ac(puVar6 + 2,param_2 + 0x3c,0xff02c1);
  *piVar4 = (int)(puVar6 + 0x14);
  puVar6[0x14] = *(unsigned char *)(param_1 + 0xba) | 0x80000000;
  puVar6[0x15] = 0xf02c0;
  FUN_0019a270(puVar6 + 0x16,param_2 + 0x7c,0xbf02c1);
  puVar6 = puVar6 + 0x24;
  *piVar4 = (int)puVar6;
  temp_v3 = *(int *)(param_2 + 0x10);
  temp_v2 = *(int *)(param_2 + 0x14);
  if (puVar6 != (unsigned int *)0x0 && temp_v3 != 0) {
    temp_v1 = FUN_001a0778(puVar6,(((int)puVar6 - piVar4[2]) & 0xfffffffcU) + 0x18);
    *piVar4 = temp_v1;
    temp_v2 = FUN_001a07c4(temp_v1,&temp_v4,temp_v3,temp_v2 << 2);
    *piVar4 = temp_v2;
    if ((unsigned int *)piVar4[3] != (unsigned int *)0x0) {
      *(unsigned int *)piVar4[3] = (unsigned int)(temp_v2 - piVar4[2]) >> 3;
    }
    piVar4[2] = *piVar4;
    piVar4[3] = temp_v4;
    if (piVar4[4] == 0) {
      piVar4[4] = (*piVar4 - piVar4[1]) & 0xfffffffc;
    }
  }
  return;
}
