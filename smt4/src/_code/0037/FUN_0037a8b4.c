/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a8b4` (_code @ 0x37a8b4, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_0014c240; /* 0x14c240 */

/* Supplied declaration required: FUN_00235c70. */
/* Supplied declaration required: FUN_002af3b4. */
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_0037b61c. */
/* Supplied declaration required: FUN_0037be24. */


void FUN_0037a8b4(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  int temp_v3;
  unsigned int temp_v4;
  romwright_code *pcVar10;
  unsigned int *puVar11;
  unsigned char temp_v5 [32];
  int temp_v6;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (temp_v3 = *(int *)(param_1 + 0x34), temp_v3 != -1)) {
    temp_v0 = *(int *)(param_1 + 0x1c) + 0xc;
    FUN_002af3b4(temp_v0,temp_v3,*(unsigned int *)(param_1 + 0x20),1,0);
    if ((temp_v0 == 0) && (*(romwright_code **)(param_1 + 0x24) != (romwright_code *)0x0)) {
      (**(romwright_code **)(param_1 + 0x24))(0,0,0,0,0,*(unsigned int *)(param_1 + 0x28));
      return;
    }
    temp_v0 = *(int *)(param_1 + 0x1c) + 0xc;
    FUN_00235c70(temp_v0,temp_v3);
    *(int *)(param_1 + 0x38) = temp_v0;
  }
  FUN_002c5d5c(temp_v5,&LAB_0014c240,8,4);
  temp_v4 = 0;
  puVar11 = (unsigned int *)&temp_v6;
  temp_v6 = 0;
  do {
    temp_v3 = param_1 + temp_v4 * 8;
    if (*(int *)(temp_v3 + 0x40) == 0) {
      temp_v0 = *(int *)(temp_v3 + 0x3c);
      if (temp_v0 != -1) {
        temp_v1 = *(int *)(param_1 + 0x1c) + 0xc;
        FUN_002af3b4(temp_v1,temp_v0,*(unsigned int *)(param_1 + 0x20),4,0);
        if ((temp_v1 == 0) && (*(int *)(param_1 + 0x24) != 0)) {
          (**(romwright_code **)(param_1 + 0x24))(0,0,0,0,0,*(unsigned int *)(param_1 + 0x28));
          return;
        }
        temp_v1 = *(int *)(param_1 + 0x1c) + 0xc;
        FUN_00235c70(temp_v1,temp_v0);
        *(int *)(temp_v3 + 0x40) = temp_v1;
        goto LAB_0037a9fc;
      }
    }
    else {
LAB_0037a9fc:
      if (*(int *)(temp_v3 + 0x3c) != -1) {
        temp_v0 = *(int *)(param_1 + 0x2c);
        if (temp_v0 != 0) {
          temp_v0 = temp_v0 + 0xc;
        }
        puVar6 = temp_v5 + temp_v4 * 8;
        puVar3 = puVar6;
        FUN_0037be24(puVar6,(int)puVar11 + temp_v4,*(unsigned int *)(temp_v3 + 0x40),
                     *(unsigned int *)(param_1 + 0x30),temp_v0);
        if ((puVar3 == (unsigned char *)0xffffffff) ||
           (((unsigned char *)0x1 < puVar3 && (puVar3 == (unsigned char *)0x2)))) {
          temp_v0 = *(int *)(param_1 + 0x1c) + 0xc;
          FUN_0037b61c(temp_v0,*(unsigned int *)(temp_v3 + 0x40),*(unsigned int *)(param_1 + 0x20));
          if (temp_v0 == 0) {
            pcVar10 = *(romwright_code **)(param_1 + 0x24);
            if (pcVar10 == (romwright_code *)0x0) {
              return;
            }
            temp_v2 = *(unsigned int *)(param_1 + 0x28);
            puVar5 = (unsigned char *)0x0;
            puVar11 = (unsigned int *)0x0;
            puVar3 = puVar5;
            puVar6 = puVar5;
            puVar7 = puVar5;
            (*pcVar10)(puVar5,puVar3,puVar6,puVar7,puVar11,temp_v2);
            return;
          }
          temp_v0 = *(int *)(param_1 + 0x1c);
          if (temp_v0 != 0) {
            temp_v0 = temp_v0 + 0xc;
          }
          FUN_0037be24(puVar6,(int)puVar11 + temp_v4,*(unsigned int *)(temp_v3 + 0x40),
                       *(unsigned int *)(param_1 + 0x30),temp_v0);
        }
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  pcVar10 = *(romwright_code **)(param_1 + 0x24);
  if (pcVar10 == (romwright_code *)0x0) {
    return;
  }
  temp_v2 = *(unsigned int *)(param_1 + 0x28);
  puVar5 = (unsigned char *)0x1;
  puVar3 = (unsigned char *)(param_1 + 0x34);
  puVar6 = (unsigned char *)(param_1 + 0x3c);
  puVar7 = temp_v5;
  (*pcVar10)(puVar5,puVar3,puVar6,puVar7,puVar11,temp_v2);
  return;
}
