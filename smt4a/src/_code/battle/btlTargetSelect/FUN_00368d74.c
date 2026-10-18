/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368d74` (_code @ 0x368d74, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_9_stack;

extern int DAT_0057a9a8; /* 0x57a9a8 */

extern unsigned char FUN_0026264c(unsigned int);
/* Supplied declaration required: FUN_002a1850. */
extern unsigned int FUN_00340c10(unsigned int);


void FUN_00368d74(int param_1,unsigned int *param_2,unsigned int param_3,unsigned char param_4,
                 unsigned char param_5,unsigned char param_6,unsigned char param_7,unsigned char param_8,
                 unsigned char param_9)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  if (param_1 < 5) {
    puVar3 = (unsigned int *)(*(int *)(DAT_0057a9a8 + 4) + param_1 * 0x10 + 4);
    *(unsigned char *)((int)puVar3 + 0xf) = 1;
    temp_v0 = FUN_0026264c(param_3);
    *(unsigned char *)(puVar3 + 2) = temp_v0;
    *(unsigned char *)((int)puVar3 + 9) = param_4;
    *(unsigned char *)((int)puVar3 + 10) = param_5;
    *(unsigned char *)((int)puVar3 + 0xb) = param_6;
    *(unsigned char *)(puVar3 + 3) = param_7;
    *(unsigned char *)((int)puVar3 + 0xd) = param_8;
    *(unsigned char *)((int)puVar3 + 0xe) = param_9;
    temp_v1 = FUN_00340c10(0);
    temp_v2 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    FUN_002a1850(&temp_v2,0,temp_v1);
    *puVar3 = temp_v2;
    puVar3[1] = uStack_2c;
  }
  return;
}
