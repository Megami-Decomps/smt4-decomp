/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019618c` (_code @ 0x19618c, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_9_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0019618c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  
  param_3 = param_3 & 0x7fffff;
  puVar3 = (unsigned char *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar3 = 2;
  *(unsigned int *)(puVar3 + 4) = param_2;
  *(unsigned int *)(puVar3 + 8) = param_4;
  temp_v1 = *(unsigned int *)(puVar3 + 0xc);
  *(unsigned int *)(puVar3 + 0xc) = param_3 | (temp_v1 & 0xff800000);
  if (param_5 == 0x10) {
    *(unsigned int *)(puVar3 + 0xc) = param_3 | (temp_v1 & 0xfe000000);
  }
  else if (param_5 == 0x18) {
    temp_v1 = param_3 | (temp_v1 & 0xfe000000) | 0x800000;
    *(unsigned int *)(puVar3 + 0xc) = temp_v1;
  }
  else if (param_5 == 0x20) {
    temp_v1 = param_3 | (temp_v1 & 0xfe000000) | 0x1000000;
    *(unsigned int *)(puVar3 + 0xc) = temp_v1;
  }
  temp_v1 = *(unsigned int *)(puVar3 + 0x18);
  temp_v0 = (temp_v1 & 0xff800000) | (param_7 & 0x7fffff);
  *(unsigned int *)(puVar3 + 0x18) = temp_v0;
  *(unsigned int *)(puVar3 + 0x14) = param_8;
  if (param_9 == 0x10) {
    temp_v0 = (temp_v1 & 0xfe000000) | (param_7 & 0x7fffff);
  }
  *(unsigned int *)(puVar3 + 0x10) = param_6;
  if (param_9 == 0x10) {
    *(unsigned int *)(puVar3 + 0x18) = temp_v0;
  }
  else {
    if (param_9 == 0x18) {
      temp_v1 = (temp_v0 & 0xfe7fffff) | 0x800000;
    }
    else {
      if (param_9 != 0x20) {
        FUN_0018b600();
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (((DAT_0061a510 == param_1) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
          DAT_0061a481 = '\x01';
          FUN_001963e0();
        }
        FUN_0018b610();
        return;
      }
      temp_v1 = (temp_v0 & 0xfe7fffff) | 0x1000000;
    }
    *(unsigned int *)(puVar3 + 0x18) = temp_v1;
  }
  FUN_0018b600();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((DAT_0061a510 == param_1) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  FUN_0018b610();
  return;
}
