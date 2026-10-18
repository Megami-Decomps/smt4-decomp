/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a79e8` (_code @ 0x1a79e8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_002e3390(int);
/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_001a79e8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  
  temp_v1 = *(int *)(param_1 + 0x20c);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + 0xc;
  }
  temp_v1 = *(int *)(temp_v1 + 0x30);
  temp_v2 = FUN_002e3390(param_2);
  puVar7 = *(unsigned int **)(temp_v1 + 0x74);
  puVar6 = puVar7 + (unsigned int)(unsigned short)puVar7[1] * 3;
  if (*(short *)(temp_v1 + 0x70) != 0) {
    puVar5 = puVar6;
    if (*puVar6 < *puVar7) {
      do {
        temp_v3 = *puVar5 >> 3;
        if ((temp_v3 < temp_v2) && ((((int)*(char *)(param_2 + temp_v3) >> (*puVar5 & 7)) & 1U) != 0)) {
          temp_v0 = *(unsigned short *)((int)puVar5 + 6);
        }
        else {
          temp_v0 = (unsigned short)puVar5[1];
        }
        puVar6 = puVar7 + (unsigned int)temp_v0 * 3;
        temp_v3 = *puVar5;
        puVar5 = puVar6;
      } while (*puVar6 < temp_v3);
    }
    temp_v2 = puVar6[2];
    if ((temp_v2 != 0) && (FUN_0030ea58(), temp_v2 == 0)) {
      return (((int)puVar6 - (int)(puVar7 + 3)) / 0xc) & 0xffff;
    }
  }
  return 0xffff;
}
