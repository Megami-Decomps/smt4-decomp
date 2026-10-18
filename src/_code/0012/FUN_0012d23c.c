/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d23c` (_code @ 0x12d23c, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004211f4; /* 0x4211f4 */
extern unsigned int DAT_004ead50; /* 0x4ead50 */
extern unsigned int DAT_004ead54; /* 0x4ead54 */
extern unsigned int DAT_004ead58; /* 0x4ead58 */
extern unsigned int DAT_004ead5c; /* 0x4ead5c */
extern unsigned int DAT_004ead60; /* 0x4ead60 */
extern unsigned int DAT_004ead64; /* 0x4ead64 */


void FUN_0012d23c(int *param_1)

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
  temp_v1 = DAT_004ead58;
  temp_v0 = DAT_004ead54;
  puVar5[2] = DAT_004ead50;
  puVar5[3] = temp_v0;
  puVar5[4] = temp_v1;
  temp_v2 = DAT_004ead64;
  temp_v1 = DAT_004ead60;
  temp_v0 = DAT_004ead5c;
  puVar5[1] = 0;
  puVar5[5] = temp_v0;
  puVar5[6] = temp_v1;
  puVar5[7] = temp_v2;
  if (puVar4 != (unsigned int *)0x0) {
    puVar4[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar4 + 2) = 1;
    puVar4[3] = (unsigned int)puVar5;
    *puVar4 = (unsigned int)&DAT_004211f4;
  }
  return;
}
