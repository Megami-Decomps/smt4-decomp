/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015dd70` (_code @ 0x15dd70, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_0015a3f4. */
/* Supplied declaration required: FUN_0015ed54. */
/* Supplied declaration required: FUN_0015ef0c. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0015dd70(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  if ((*(char *)((int)param_1 + 0xe) == '\x01') && (0 < param_3 - 0x9ffc4)) {
    param_2 = param_2 - (param_3 - 0x9ffc4);
  }
  FUN_002c3aa8(param_1 + 4);
  for (puVar4 = (unsigned int *)param_1[1]; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[10]) {
    temp_v0 = puVar4[0x1a];
    if ((*(char *)(temp_v0 + 0xd) == '\0') && (*(int *)(temp_v0 + 0x30) != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x2c);
      if ((param_2 >= temp_v1) || (puVar4[8] == 0x7fff)) {
        FUN_0015ed54(puVar4[0x1a]);
        if (*(char *)(puVar4[0x1a] + 0xc) == '\0') {
          FUN_0015ef0c();
        }
        param_2 = param_2 - temp_v1;
      }
      else {
        if ((*param_1 & (1 << (*puVar4 & 0xff))) != 0) {
          if ((char)puVar4[1] != '\x01') {
            FUN_0015a3f4(puVar4,1);
          }
          FUN_002c3aa8();
          temp_v0 = puVar4[9];
          temp_v2 = puVar4[10];
          if (temp_v0 == 0 && temp_v2 == 0) {
            param_1[1] = 0;
            param_1[2] = 0;
          }
          else {
            if ((temp_v2 != 0) && (*(unsigned int *)(temp_v2 + 0x24) = temp_v0, temp_v0 == 0)) {
              param_1[1] = temp_v2;
            }
            if ((temp_v0 != 0) && (temp_v2 = puVar4[10], *(unsigned int *)(temp_v0 + 0x28) = temp_v2, temp_v2 == 0)) {
              param_1[2] = temp_v0;
            }
          }
          *param_1 = *param_1 & ~(1 << (*puVar4 & 0xff));
          *(short *)(param_1 + 3) = (short)param_1[3] - 1;
          FUN_002c3a24(param_1 + 4);
        }
        if ((romwright_code *)puVar4[0xb] != (romwright_code *)0x0) {
          (*(romwright_code *)puVar4[0xb])(puVar4,puVar4[0xc]);
        }
      }
    }
  }
  FUN_002c3a24(param_1 + 4);
  return;
}
