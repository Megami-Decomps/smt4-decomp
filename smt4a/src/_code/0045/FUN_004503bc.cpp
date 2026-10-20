/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004503bc` (_code @ 0x4503bc, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017cf74(int, unsigned int, unsigned int);
int FUN_001c4598(...);
int nnnstdMemCpy(unsigned int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern romwright_code *DAT_0058918c; /* 0x58918c */

/* Supplied declaration required: FUN_0017cf74. */
/* Supplied declaration required: FUN_001c4598. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_004503bc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = param_3 & 0xffff0000;
  temp_v2 = *(unsigned int *)(param_2 + 0x14);
  temp_v3 = 0;
  if (temp_v0 == 0x2010000) {
    if (*(int *)(param_2 + 0x18) != 0) {
      temp_v3 = *(int *)(param_2 + 0x18) + param_2 + 0x18;
    }
    FUN_001c4598(temp_v3,temp_v2);
    return;
  }
  if ((int)temp_v0 < 0x2010000) {
    if (temp_v0 == 0x1010000) {
      temp_v1 = (*DAT_0058918c)(0x10000,0x102,param_1,temp_v2);
      if (*(int *)(param_2 + 0x18) != 0) {
        temp_v3 = *(int *)(param_2 + 0x18) + param_2 + 0x18;
      }
      nnnstdMemCpy(temp_v1,temp_v3,temp_v2);
      FUN_001c4598(temp_v1,temp_v2);
      *(unsigned int *)(param_2 + 0x1c) = temp_v1;
      *(unsigned int *)(param_2 + 0x20) = 0x10000;
    }
  }
  else if (temp_v0 == 0x2020000 || temp_v0 == 0x2030000) {
    temp_v1 = (*DAT_0058918c)(param_3 & 0x30000,0x102,param_1,temp_v2);
    if (*(int *)(param_2 + 0x18) != 0) {
      temp_v3 = *(int *)(param_2 + 0x18) + param_2 + 0x18;
    }
    FUN_0017cf74(temp_v3,temp_v1,temp_v2);
    *(unsigned int *)(param_2 + 0x1c) = temp_v1;
    *(unsigned int *)(param_2 + 0x20) = param_3 & 0x30000;
    return;
  }
  return;
}

} /* extern "C" */
