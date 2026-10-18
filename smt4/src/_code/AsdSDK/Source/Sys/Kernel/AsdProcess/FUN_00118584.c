/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118584` (_code @ 0x118584, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

extern int DAT_004e3cf4; /* 0x4e3cf4 */
extern int DAT_004e3cf8; /* 0x4e3cf8 */
extern int DAT_004e3d00; /* 0x4e3d00 */
extern unsigned int DAT_004e3d08; /* 0x4e3d08 */

/* Supplied declaration required: FUN_002c425c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5ba0. */


void FUN_00118584(int param_1,int param_2,unsigned short param_3,unsigned short param_4,unsigned long long param_5,
                 unsigned long long param_6,int param_7)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int *piVar7;
  
  temp_v2 = 0x100;
  FUN_002c498c(0x100,0x100,0,0xa4,1);
  if (temp_v2 != 0) {
    *(unsigned int *)(temp_v2 + 0x18) = 0;
    for (temp_v3 = 0;
        (temp_v1 = *(char *)(param_1 + temp_v3), *(char *)(temp_v2 + temp_v3) = temp_v1, temp_v1 != '\0' &&
        (temp_v3 < 0x18)); temp_v3 = temp_v3 + 1) {
      *(int *)(temp_v2 + 0x18) = *(int *)(temp_v2 + 0x18) + (int)*(char *)(param_1 + temp_v3);
    }
    *(int *)(temp_v2 + 0x20) = param_2;
    *(unsigned char *)(temp_v2 + 0x17) = 0;
    *(unsigned char *)(temp_v2 + 0x98) = 1;
LAB_0011862c:
    temp_v3 = 0;
    DAT_004e3d08 = DAT_004e3d08 + 1;
    if (DAT_004e3d08 >= 0xfffff) {
      DAT_004e3d08 = 1;
    }
    if (0 < DAT_004e3cf8) {
      do {
        for (temp_v4 = *(int *)(DAT_004e3cf4 + temp_v3 * 8); temp_v4 != 0; temp_v4 = *(int *)(temp_v4 + 0x4c))
        {
          if (*(unsigned int *)(temp_v4 + 0x24) == DAT_004e3d08) goto LAB_0011862c;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < DAT_004e3cf8);
    }
    temp_v0 = DAT_004e3d08 & 0xfffff;
    *(unsigned int *)(temp_v2 + 0x24) = DAT_004e3d08;
    *(unsigned int *)(temp_v2 + 0x28) = temp_v0 | (param_2 << 0x14);
    *(unsigned short *)(temp_v2 + 0x34) = param_3;
    *(unsigned short *)(temp_v2 + 0x36) = param_4;
    *(int *)(temp_v2 + 0x48) = (int)((unsigned long long)param_6 >> 0x20);
    puVar6 = (unsigned int *)(temp_v2 + 0x38);
    *puVar6 = (int)param_5;
    *(int *)(temp_v2 + 0x3c) = (int)((unsigned long long)param_5 >> 0x20);
    *(int *)(temp_v2 + 0x40) = (int)param_6;
    FUN_002c5ba0();
    *(unsigned int **)(temp_v2 + 0x60) = puVar6;
    *(unsigned char *)(temp_v2 + 0x6c) = 1;
    *(unsigned char *)(temp_v2 + 0x74) = 1;
    *(unsigned char *)(temp_v2 + 0x7c) = 1;
    *(unsigned char *)(temp_v2 + 0x84) = 1;
    *(unsigned int *)(temp_v2 + 0x1c) = *(unsigned int *)(temp_v2 + 0x1c) | 0x190000;
    piVar7 = (int *)(DAT_004e3cf4 + *(int *)(temp_v2 + 0x20) * 8);
    switch(*(unsigned char *)(temp_v2 + 0x98)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if (*piVar7 != 0) {
        *(int *)(piVar7[1] + 0x4c) = temp_v2;
        *(int *)(temp_v2 + 0x50) = piVar7[1];
        piVar7[1] = temp_v2;
      }
      else {
        *piVar7 = temp_v2;
        piVar7[1] = temp_v2;
        *(unsigned int *)(temp_v2 + 0x50) = 0;
      }
      *(unsigned int *)(temp_v2 + 0x4c) = 0;
      DAT_004e3d00 = DAT_004e3d00 + 1;
    }
    if (param_7 != 0) {
      FUN_002c425c(param_7,*(unsigned int *)(temp_v2 + 0x28));
    }
  }
  return;
}
