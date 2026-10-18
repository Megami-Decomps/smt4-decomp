/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5a90` (_code @ 0x4e5a90, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_001633a0(short);
extern short FUN_004e9ae8(int *, int *, int, unsigned int);
extern int FUN_004ee568(int *);


void FUN_004e5a90(int *param_1,unsigned int param_2)

{
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  short *psVar4;
  int temp_v2;
  unsigned int *puVar6;
  int aiStack_1e0 [109];
  int *temp_v3;
  unsigned int uStack_28;
  
  temp_v1 = 0;
  temp_v2 = 0x6d;
  puVar3 = *(unsigned int **)(*param_1 + 0x1ffc);
  puVar6 = puVar3 + 0x9d;
  psVar4 = (short *)((int)puVar3 + 0x6e);
  temp_v3 = param_1;
  uStack_28 = param_2;
  do {
    if (((*puVar3 & DAT_00571190) != 0 || (puVar3[1] & DAT_00571194) != 0) &&
       (((unsigned int)(unsigned short)*puVar6 & (1 << (param_2 & 0xff))) != 0)) {
      aiStack_1e0[temp_v1] = (int)*psVar4;
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
    puVar3 = puVar3 + 0x102;
    puVar6 = puVar6 + 0x102;
    psVar4 = psVar4 + 0x204;
  } while (temp_v2 != 0);
  temp_v0 = FUN_004e9ae8(temp_v3,aiStack_1e0,temp_v1,1);
  temp_v1 = FUN_001633a0(temp_v0 - 1);
  temp_v2 = FUN_004ee568(temp_v3);
  *(unsigned char *)(aiStack_1e0[temp_v1] + temp_v2 + 0x38) = 1;
  return;
}
