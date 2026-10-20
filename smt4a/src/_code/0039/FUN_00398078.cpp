/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398078` (_code @ 0x398078, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern int DAT_00580c94; /* 0x580c94 */


void FUN_00398078(int param_1)

{
  unsigned char *pbVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int *piVar5;
  unsigned char temp_v2;
  
  if (0 < DAT_00580c94) {
    pbVar1 = (unsigned char *)0x5f3404;
    puVar3 = (unsigned int *)0x5f33cc;
    piVar5 = (int *)0x5f3414;
    temp_v0 = DAT_00580c94;
    do {
      temp_v1 = (unsigned int)*pbVar1;
      temp_v2 = temp_v1 == 0;
      if (temp_v2) {
        temp_v1 = *puVar3;
      }
      if ((temp_v2 && temp_v1 == 0x203) && (*piVar5 == param_1)) {
        *pbVar1 = 1;
      }
      temp_v0 = temp_v0 - 1;
      pbVar1 = pbVar1 + 0x17c;
      puVar3 = puVar3 + 0x5f;
      piVar5 = piVar5 + 0x5f;
    } while (temp_v0 != 0);
    return;
  }
  return;
}

} /* extern "C" */
