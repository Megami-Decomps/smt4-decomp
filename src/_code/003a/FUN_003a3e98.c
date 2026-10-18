/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3e98` (_code @ 0x3a3e98, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_0022e7dc. */
/* Supplied declaration required: FUN_0022fbc0. */
/* Supplied declaration required: FUN_0022fc8c. */
extern int FUN_0022fc98(void);
extern int FUN_0022fcc8(void);
/* Supplied declaration required: FUN_0022fcf8. */
extern int FUN_0022fd54(int);
/* Supplied declaration required: FUN_0022fe4c. */
extern int FUN_00230d24(int, unsigned short);
/* Supplied declaration required: FUN_00230f84. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
extern int FUN_00256750(void);
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
extern int FUN_0028fde0(unsigned short);
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002972e8. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002b9008. */


void FUN_003a3e98(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(int *)(param_1 + 8) == 1) &&
       (temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168)), temp_v1 == 2)) {
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      FUN_0029f10c(0,0x323232ff);
      FUN_002972e8(1);
      return;
    }
  }
  else {
    FUN_002972e8(0);
    FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
    FUN_0029e8c0(0);
    temp_v1 = FUN_0022fd54(param_1);
    FUN_0022fcf8(param_1);
    if ((0 < *(int *)(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x888)) &&
       (temp_v2 = FUN_0027f10c(), temp_v2 != 0)) {
      temp_v1 = 1;
    }
    temp_v2 = *(int *)(param_1 + 0x860);
    temp_v3 = FUN_002337a0(param_1 + temp_v2 * 0x74 + 0x880);
    temp_v0 = *(unsigned short *)(param_1 + temp_v2 * 0x1002 + 0xc94 + temp_v3 * 4);
    if ((((*(int *)(param_1 + 0x860) != 8) || (temp_v2 = FUN_00230d24(param_1,temp_v0), temp_v2 == 0)) ||
        (temp_v2 = FUN_0028fde0(temp_v0), temp_v2 >= 2)) && (temp_v1 != 0)) {
      FUN_00232a48();
      FUN_0022e7dc(param_1,0xb);
      return;
    }
    temp_v1 = FUN_0022fcc8();
    if ((temp_v1 != 0) || (temp_v1 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4c)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e020);
      FUN_0022fe4c(param_1,1);
      FUN_0022fc8c();
      return;
    }
    temp_v1 = FUN_0022fc98();
    if ((temp_v1 != 0) || (temp_v1 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4e)), temp_v1 == 6)) {
      *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e024);
      FUN_0022fe4c(param_1,1);
      FUN_0022fc8c();
      return;
    }
    temp_v1 = FUN_00276550();
    if (temp_v1 != 0) {
      FUN_00230f84(0);
      FUN_002329dc();
      FUN_002333d4(param_1 + 0x3a8,1);
      FUN_00297128();
      if (*(char *)(param_1 + 0x14) == '\x01') {
        *(unsigned int *)(param_1 + 0x15d60) = 1;
      }
      else {
        *(unsigned int *)(param_1 + 0x15d60) = 2;
      }
      FUN_002339e8(*(unsigned int *)(param_1 + 0x85c));
      FUN_002339ac(param_1 + 0x828);
      temp_v1 = 0;
      if (temp_v1 < *(short *)(param_1 + 0x15d50)) {
        do {
          FUN_002b9008();
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(short *)(param_1 + 0x15d50));
      }
      *(unsigned int *)(param_1 + 8) = 1;
    }
    else {
      temp_v1 = FUN_00256750();
      if (temp_v1 != 0) {
        FUN_00232a48();
        FUN_0022fbc0(param_1);
        return;
      }
    }
  }
  return;
}
