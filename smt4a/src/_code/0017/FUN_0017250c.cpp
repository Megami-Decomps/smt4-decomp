/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017250c` (_code @ 0x17250c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b9c8; /* 0x55b9c8 */
extern unsigned int DAT_00647748; /* 0x647748 */
extern unsigned int DAT_0064774c; /* 0x64774c */
extern unsigned int DAT_00647750; /* 0x647750 */
extern unsigned int DAT_00647754; /* 0x647754 */
extern unsigned int DAT_00647758; /* 0x647758 */
extern unsigned int DAT_0064775c; /* 0x64775c */


void FUN_0017250c(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  
  puVar4 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x10,4);
  puVar5 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x20,4);
  temp_v3 = 0x20;
  puVar6 = puVar5;
  do {
    temp_v3 = temp_v3 - 1;
    *(unsigned char *)puVar6 = 0;
    puVar6 = (unsigned int *)((int)puVar6 + 1);
  } while (temp_v3 != 0);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  *puVar5 = 0x40000000;
  temp_v1 = DAT_00647750;
  temp_v0 = DAT_0064774c;
  puVar5[2] = DAT_00647748;
  puVar5[3] = temp_v0;
  puVar5[4] = temp_v1;
  temp_v2 = DAT_0064775c;
  temp_v1 = DAT_00647758;
  temp_v0 = DAT_00647754;
  puVar5[1] = 0;
  puVar5[5] = temp_v0;
  puVar5[6] = temp_v1;
  puVar5[7] = temp_v2;
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar4 + 2) = 1;
    puVar4[3] = (unsigned int)puVar5;
    *puVar4 = (unsigned int)&DAT_0055b9c8;
  }
  return;
}

} /* extern "C" */
