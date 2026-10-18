/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b384` (_code @ 0x45b384, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001a7a20(int, unsigned int);
/* Supplied declaration required: FUN_002e3390. */


unsigned int FUN_0045b384(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v1 = 0;
  temp_v0 = 0;
  if ((unsigned int)param_1[1] < *(unsigned int *)(param_2 + 0x1c)) {
    temp_v2 = 0x80000001;
  }
  else {
    temp_v5 = 0;
    if (temp_v5 < *(unsigned int *)(param_2 + 0x1c)) {
      do {
        if (*(int *)(*param_1 + temp_v5 * 4) == 0) {
          temp_v4 = *(int *)(param_3 + 0x30);
          temp_v6 = 0;
          temp_v2 = *(unsigned int *)(*(int *)(param_2 + 0x18) + temp_v5 * 4);
          FUN_002e3390();
          temp_v4 = FUN_001a7a20(temp_v4 + 0x28,temp_v2);
          if (temp_v4 != 0xffff) {
            temp_v6 = *(int *)(*(int *)(*(int *)(param_3 + 0x30) + 0x24) + temp_v4 * 4);
          }
          if (temp_v6 == 0) {
            temp_v1 = 1;
          }
          else {
            temp_v0 = 1;
          }
          *(int *)(*param_1 + temp_v5 * 4) = temp_v6;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(unsigned int *)(param_2 + 0x1c));
    }
    temp_v5 = *(unsigned int *)(param_2 + 0x1c);
    if (temp_v5 < (unsigned int)param_1[1]) {
      do {
        temp_v3 = temp_v5 + 1;
        *(unsigned int *)(*param_1 + temp_v5 * 4) = 0;
        temp_v5 = temp_v3;
      } while (temp_v3 < (unsigned int)param_1[1]);
    }
    if (temp_v0) {
      if (temp_v1) {
        return 0x4000;
      }
    }
    else if (temp_v1) {
      return 0x80008000;
    }
    temp_v2 = 0;
  }
  return temp_v2;
}
