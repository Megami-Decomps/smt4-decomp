/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00337e54` (_code @ 0x337e54, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_00337e54(int param_1,int param_2)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = (int)*(short *)(*(int *)(param_1 + 0x1e98) + temp_v2 * 0x114 + 0x60);
    if (-1 < temp_v0) {
      temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288);
      if ((((temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) &&
         (temp_v0 = *(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288 + 0xcc, temp_v0 != 0)) {
        if (param_2 != 0) {
          if ((param_2 != 1) || ((temp_v1 & 0x10) != 0)) {
LAB_00337ee8:
            *(unsigned int *)(temp_v0 + 0x184) = 0;
            *(unsigned int *)(temp_v0 + 0x14c) = 0;
            *(unsigned int *)(temp_v0 + 0x150) = 0;
            *(unsigned int *)(temp_v0 + 0x15c) = 0;
            *(unsigned int *)(temp_v0 + 0x160) = 0;
            *(unsigned int *)(temp_v0 + 0x164) = 0;
            *(unsigned int *)(temp_v0 + 0x168) = 0;
            *(unsigned int *)(temp_v0 + 0x16c) = 0;
            *(unsigned int *)(temp_v0 + 0x170) = 0;
            *(unsigned int *)(temp_v0 + 0x174) = 0;
            *(unsigned int *)(temp_v0 + 0x178) = 0;
            *(unsigned int *)(temp_v0 + 0x17c) = 0;
            *(unsigned int *)(temp_v0 + 0x180) = 0;
          }
        }
        else if ((temp_v1 & 0x10) == 0 && (temp_v1 & 0x20) == 0) goto LAB_00337ee8;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      return;
    }
  } while( 1 );
}
