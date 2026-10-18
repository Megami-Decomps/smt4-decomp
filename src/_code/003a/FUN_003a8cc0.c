/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8cc0` (_code @ 0x3a8cc0, 0x1b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

/* Supplied declaration required: FUN_0022cb88. */
extern unsigned char FUN_0022e244(int, unsigned int);
/* Supplied declaration required: FUN_0022e2ec. */
/* Supplied declaration required: FUN_0022e310. */
/* Supplied declaration required: FUN_0022e490. */
/* Supplied declaration required: FUN_00233804. */
/* Supplied declaration required: FUN_002338c4. */
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
extern int FUN_0029ec6c(unsigned short);
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_003a9dd4. */


void FUN_003a8cc0(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  short temp_v4;
  unsigned char temp_v5 [24];
  unsigned char temp_v6;
  
  FUN_002339e8(*(unsigned int *)(param_1 + 0x590));
  FUN_002339ac();
  FUN_0022e490();
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    temp_v4 = 0;
    temp_v3 = 1;
    do {
      puVar3 = (unsigned short *)(temp_v3 & 0xffff);
      FUN_002b9364();
      temp_v1 = temp_v3;
      FUN_002b087c();
      if ((puVar3 != (unsigned short *)0x0 && temp_v1 != 0) && ((*(unsigned short *)(temp_v1 + 0x16) & 1) != 0)) {
        temp_v4 = temp_v4 + 1;
        temp_v2 = FUN_0029ec6c(*puVar3);
        if (temp_v2 != 0) {
          FUN_0022e310(temp_v5,*puVar3,0);
          temp_v6 = 1;
          FUN_0022e2ec(param_1 + 0x5a8,temp_v5);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0x500);
    *(short *)(param_1 + 0xa5ae) = temp_v4;
    FUN_0022cb88(param_1,1);
    FUN_002338c4(param_1 + 0x20,10,(int)*(short *)(param_1 + 0x5a8),0,1,1);
    *(unsigned char *)(param_1 + 0x2d) = 1;
    temp_v0 = FUN_0022e244(param_1 + 0x5a8,1);
    *(unsigned char *)(param_1 + 0x94) = temp_v0;
    FUN_002c583c(0);
    FUN_002c583c(0);
  }
  else {
    FUN_003a9dd4(param_1);
  }
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar2 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar2 = *puVar2 | 0x1000;
  temp_v2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5a4) != '\0') {
    if (temp_v2 >= 10) {
      temp_v2 = 10;
    }
    FUN_00233804(param_1 + 0x55c,0x1c,0x1030,temp_v2);
  }
  else {
    if (temp_v2 >= 10) {
      temp_v2 = 10;
    }
    FUN_00233804(param_1 + 0x55c,0x1d,0x40e,temp_v2);
  }
  *(unsigned char *)(param_1 + 0x56c) = 1;
  return;
}
