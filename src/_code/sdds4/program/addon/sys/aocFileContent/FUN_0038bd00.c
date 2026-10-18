/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038bd00` (_code @ 0x38bd00, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a1578(unsigned int *);
extern int FUN_002ad46c(int);
/* Supplied declaration required: FUN_002bad80. */
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_00355304. */


void FUN_0038bd00(unsigned char *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_24;
  int temp_v3;
  unsigned int uStack_1c;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_2 + 0x20) = 0;
  }
  *param_1 = 0;
  puVar1 = (unsigned int *)FUN_002bb09c(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)FUN_002bad80(&temp_v2,0);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  temp_v2 = 2;
  uStack_24 = 0;
  temp_v0 = param_2 + 0x34;
  FUN_00355304(temp_v0,0xe5c,param_3,2);
  FUN_002bad80(&temp_v3,temp_v0);
  temp_v0 = FUN_002a1578((unsigned int *)&temp_v3);
  if (temp_v0 < 0) {
    FUN_002c583c(0);
    *(unsigned char *)(puVar1 + -1) = 100;
    *puVar1 = temp_v3;
    puVar1[1] = uStack_1c;
    temp_v0 = FUN_002a1578((unsigned int *)&temp_v3);
    if ((temp_v0 != -0x36bec76f) && (temp_v0 = FUN_002ad46c(DAT_00432fc8 + 0x98), temp_v0 != 0)) {
      *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
      *(unsigned char *)(puVar1 + -1) = 200;
    }
    return;
  }
  temp_v2 = 1;
  temp_v1 = 0x100;
  FUN_002c54f0(0x100,0x100,0,*(unsigned int *)(param_2 + 0x34));
  *(unsigned int *)(param_2 + 0x20) = temp_v1;
  FUN_002c3b48();
  FUN_002be7fc(param_2 + 0x24,"aoc%d:",param_3);
  return;
}
