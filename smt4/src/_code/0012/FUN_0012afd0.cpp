/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012afd0` (_code @ 0x12afd0, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

extern int FUN_002bfefc(unsigned int *);
extern unsigned int FUN_002c30c4(int);
extern int rt_memcpy(int, int, unsigned int);


unsigned int * FUN_0012afd0(int *param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v7 = 0xd0;
  puVar6 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0xd0,4);
  puVar7 = puVar6;
  do {
    temp_v7 = temp_v7 - 1;
    *(unsigned char *)puVar7 = 0;
    puVar7 = (unsigned int *)((int)puVar7 + 1);
  } while (temp_v7 != 0);
  puVar6[2] = 0x7010000;
  puVar6[1] = 0x4e465443;
  *puVar6 = 0x40000422;
  puVar6[4] = 0;
  piVar11 = (int *)(puVar6 + 3);
  puVar6[5] = 0;
  if (param_2 != 0) {
    temp_v5 = FUN_002c30c4(param_2);
    temp_v8 = 0x100;
    if (temp_v5 < 0x100) {
      temp_v8 = temp_v5;
    }
    temp_v7 = (**(romwright_code **)(*param_1 + 8))(param_1,temp_v8 + 1,4);
    temp_v6 = rt_memcpy(temp_v7,param_2,temp_v8);
    if (temp_v7 != 0) {
      temp_v6 = temp_v7 - (int)piVar11;
    }
    *(unsigned char *)(temp_v7 + temp_v8) = 0;
    if (temp_v7 != 0) {
      *piVar11 = temp_v6;
    }
    else {
      *piVar11 = 0;
    }
  }
  else {
    *piVar11 = 0;
  }
  puVar6[8] = 0;
  puVar6[9] = 0;
  temp_v10 = 0x3f800000;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0x3f800000;
  temp_v9 = 0;
  puVar6[0xd] = 0x3f800000;
  puVar6[0xe] = 0x3f800000;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  if (((DAT_00476634 & 1) == 0) && (temp_v7 = FUN_002bfefc(&DAT_00476634), temp_v7 != 0)) {
    DAT_004efd6c = temp_v10;
    DAT_004efd70 = temp_v9;
    DAT_004efd74 = temp_v9;
    DAT_004efd78 = temp_v9;
    DAT_004efd7c = temp_v9;
    DAT_004efd80 = temp_v10;
    DAT_004efd84 = temp_v9;
    DAT_004efd88 = temp_v9;
    DAT_004efd8c = temp_v9;
    DAT_004efd90 = temp_v9;
    DAT_004efd94 = temp_v10;
    DAT_004efd98 = temp_v9;
  }
  temp_v4 = DAT_004efd88;
  temp_v3 = DAT_004efd84;
  temp_v2 = DAT_004efd80;
  temp_v1 = DAT_004efd7c;
  temp_v0 = DAT_004efd78;
  temp_v10 = DAT_004efd74;
  temp_v9 = DAT_004efd70;
  puVar6[0x21] = DAT_004efd6c;
  puVar6[0x22] = temp_v9;
  puVar6[0x23] = temp_v10;
  puVar6[0x24] = temp_v0;
  puVar6[0x25] = temp_v1;
  puVar6[0x26] = temp_v2;
  puVar6[0x27] = temp_v3;
  puVar6[0x28] = temp_v4;
  temp_v0 = DAT_004efd94;
  temp_v10 = DAT_004efd90;
  temp_v9 = DAT_004efd8c;
  puVar6[0x2c] = DAT_004efd98;
  puVar6[0x29] = temp_v9;
  puVar6[0x2a] = temp_v10;
  puVar6[0x2b] = temp_v0;
  puVar6[6] = puVar6[6] | 1;
  return puVar6;
}

} /* extern "C" */
