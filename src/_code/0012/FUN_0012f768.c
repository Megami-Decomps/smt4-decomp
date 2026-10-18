/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f768` (_code @ 0x12f768, 0x1e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0013fdb0. */
/* Supplied declaration required: FUN_001409b8. */
/* Supplied declaration required: FUN_002acb8c. */
/* Supplied declaration required: FUN_002b4d78. */
/* Supplied declaration required: FUN_002b4fa8. */
extern unsigned int FUN_002bb0b4(unsigned int, unsigned int);
extern unsigned int FUN_002bb218(void);


void FUN_0012f768(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  temp_v2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_0013fdb0(*(int *)(param_1 + 0x24) + temp_v2 * 0x48,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(unsigned int *)(param_1 + 0x20));
  }
  temp_v0 = FUN_002bb218();
  temp_v1 = FUN_002bb0b4(temp_v0,1);
  FUN_002b4d78(temp_v0,temp_v1);
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  FUN_001409b8(param_1 + 0x88);
  if (*(int *)(param_1 + 0xb4) != 0) {
    piVar4 = *(int **)(param_1 + 0x28);
    temp_v3 = 0;
    temp_v2 = (unsigned int)(((unsigned long long)*(unsigned int *)(param_1 + 0x2c) * 0x17f405fd + 0x17f405fd) >> 0x27);
    if (temp_v2 != 0) {
      do {
        (**(romwright_code **)(*piVar4 + 4))(piVar4);
        temp_v3 = temp_v3 + 1;
        piVar4 = piVar4 + 0x156;
      } while (temp_v3 < temp_v2);
    }
    FUN_002acb8c(param_1 + 0x3c,*(unsigned int *)(param_1 + 0x40),param_1 + 0x40);
    FUN_002acb8c(param_1 + 0x30,*(unsigned int *)(param_1 + 0x34),param_1 + 0x34);
    FUN_002b4fa8(param_1 + 0xa4,*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0xb8));
    piVar4 = *(int **)(param_1 + 0x48);
    temp_v3 = 0;
    temp_v2 = (unsigned int)(((unsigned long long)*(unsigned int *)(param_1 + 0x4c) * 0x75075075 + 0x75075075) >> 0x29);
    if (temp_v2 != 0) {
      do {
        (**(romwright_code **)(*piVar4 + 4))(piVar4);
        temp_v3 = temp_v3 + 1;
        piVar4 = piVar4 + 0x118;
      } while (temp_v3 < temp_v2);
    }
    FUN_002acb8c(param_1 + 0x5c,*(unsigned int *)(param_1 + 0x60),param_1 + 0x60);
    FUN_002acb8c(param_1 + 0x50,*(unsigned int *)(param_1 + 0x54),param_1 + 0x54);
    piVar4 = *(int **)(param_1 + 0x68);
    temp_v3 = 0;
    temp_v2 = (unsigned int)(((unsigned long long)*(unsigned int *)(param_1 + 0x6c) * 0x175d2ea3 + 0x175d2ea3) >> 0x2a);
    if (temp_v2 != 0) {
      do {
        (**(romwright_code **)(*piVar4 + 4))(piVar4);
        temp_v3 = temp_v3 + 1;
        piVar4 = piVar4 + 0xaf5;
      } while (temp_v3 < temp_v2);
    }
    FUN_002acb8c(param_1 + 0x7c,*(unsigned int *)(param_1 + 0x80),param_1 + 0x80);
    FUN_002acb8c(param_1 + 0x70,*(unsigned int *)(param_1 + 0x74),param_1 + 0x74);
    *(unsigned int *)(param_1 + 0xb4) = 0;
    *(unsigned int *)(param_1 + 0xb8) = 0;
  }
  return;
}
