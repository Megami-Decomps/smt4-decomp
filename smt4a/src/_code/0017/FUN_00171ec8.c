/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00171ec8` (_code @ 0x171ec8, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern unsigned int FUN_002e3390(int);
extern int FUN_002eba64(unsigned int *);
extern int rt_memcpy(int, int, unsigned int);


unsigned int * FUN_00171ec8(int *param_1,int param_2)

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
  
  temp_v7 = 0xe8;
  puVar6 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0xe8,4);
  puVar7 = puVar6;
  do {
    temp_v7 = temp_v7 - 1;
    *(unsigned char *)puVar7 = 0;
    puVar7 = (unsigned int *)((int)puVar7 + 1);
  } while (temp_v7 != 0);
  puVar6[2] = 0x7010000;
  puVar6[1] = 0x4e465443;
  *puVar6 = 0x40000122;
  puVar6[4] = 0;
  piVar11 = (int *)(puVar6 + 3);
  puVar6[5] = 0;
  if (param_2 != 0) {
    temp_v5 = FUN_002e3390(param_2);
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
  if (((DAT_005c4c2c & 1) == 0) && (temp_v7 = FUN_002eba64(&DAT_005c4c2c), temp_v7 != 0)) {
    DAT_0064c054 = temp_v10;
    DAT_0064c058 = temp_v9;
    DAT_0064c05c = temp_v9;
    DAT_0064c060 = temp_v9;
    DAT_0064c064 = temp_v9;
    DAT_0064c068 = temp_v10;
    DAT_0064c06c = temp_v9;
    DAT_0064c070 = temp_v9;
    DAT_0064c074 = temp_v9;
    DAT_0064c078 = temp_v9;
    DAT_0064c07c = temp_v10;
    DAT_0064c080 = temp_v9;
  }
  temp_v4 = DAT_0064c070;
  temp_v3 = DAT_0064c06c;
  temp_v2 = DAT_0064c068;
  temp_v1 = DAT_0064c064;
  temp_v0 = DAT_0064c060;
  temp_v10 = DAT_0064c05c;
  temp_v9 = DAT_0064c058;
  puVar6[0x21] = DAT_0064c054;
  puVar6[0x22] = temp_v9;
  puVar6[0x23] = temp_v10;
  puVar6[0x24] = temp_v0;
  puVar6[0x25] = temp_v1;
  puVar6[0x26] = temp_v2;
  puVar6[0x27] = temp_v3;
  puVar6[0x28] = temp_v4;
  temp_v0 = DAT_0064c07c;
  temp_v10 = DAT_0064c078;
  temp_v9 = DAT_0064c074;
  puVar6[0x2c] = DAT_0064c080;
  puVar6[0x29] = temp_v9;
  puVar6[0x2a] = temp_v10;
  puVar6[0x2b] = temp_v0;
  puVar6[6] = puVar6[6] | 1;
  return puVar6;
}
