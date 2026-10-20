/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156994` (_code @ 0x156994, 0x258 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016a130(int);
int FUN_0016a220(int);
int FUN_0017352c(...);
int FUN_00178150(unsigned int, int, int);
int FUN_001782c8(int, int, int);
int FUN_0017efa4(int, int, int);
int FUN_0017f87c(int, int, int, int);
int trackAdvance(int);
int FUN_001881c8(void);
int FUN_00199f84(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34InvTransposeAsm(int, int);
int nn_math_ARMv6_MTX34MultAsm(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_0016a130. */
/* Supplied declaration required: FUN_0016a220. */
/* Supplied declaration required: FUN_0017352c. */
/* Supplied declaration required: FUN_00178150. */
/* Supplied declaration required: FUN_001782c8. */
/* Supplied declaration required: FUN_0017efa4. */
/* Supplied declaration required: FUN_0017f87c. */
/* Supplied declaration required: trackAdvance. */
/* Supplied declaration required: FUN_001881c8. */
/* Supplied declaration required: FUN_00199f84. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


void FUN_00156994(int param_1,unsigned int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [60];
  
  if ((*(unsigned int *)(param_1 + 4) & 2) == 0) {
    FUN_0016a130(param_1);
    if (*(int *)(param_1 + 0x1b0) != 0) {
      temp_v2 = *(int *)(param_1 + 0x90);
      if (temp_v2 != 0) {
        temp_v1 = 0;
        temp_v0 = 0;
        if (temp_v0 < *(unsigned int *)(temp_v2 + 0x10)) {
          do {
            if (*(short *)(*(int *)(*(int *)(temp_v2 + 0xc) + temp_v0 * 4) + 6) == 6) {
              temp_v1 = param_1 + 0xa8;
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < *(unsigned int *)(temp_v2 + 0x10));
        }
        FUN_0017f87c(temp_v2,param_1 + 0x10c,param_1 + 0x98,temp_v1);
        FUN_00178150(*(unsigned int *)(param_1 + 0x90),param_1 + 0x10c,param_1 + 0x98);
        trackAdvance(param_1 + 0x84);
      }
      temp_v2 = *(int *)(param_1 + 0xc0);
    }
    else {
      FUN_0016a220(param_1);
      temp_v2 = *(int *)(param_1 + 0x90);
      if (temp_v2 != 0) {
        temp_v1 = 0;
        temp_v0 = 0;
        if (temp_v0 < *(unsigned int *)(temp_v2 + 0x10)) {
          do {
            if (*(short *)(*(int *)(*(int *)(temp_v2 + 0xc) + temp_v0 * 4) + 6) == 6) {
              temp_v1 = param_1 + 0xa8;
              break;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < *(unsigned int *)(temp_v2 + 0x10));
        }
        FUN_0017f87c(temp_v2,param_1 + 0x10c,param_1 + 0x98,temp_v1);
        FUN_00178150(*(unsigned int *)(param_1 + 0x90),param_1 + 0x10c,param_1 + 0x98);
        trackAdvance(param_1 + 0x84);
      }
      temp_v2 = *(int *)(param_1 + 0xc0);
    }
    if (temp_v2 != 0) {
      FUN_001782c8(temp_v2,param_1 + 0x114,param_1 + 200);
      trackAdvance(param_1 + 0xb4);
    }
    temp_v2 = *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 0x30 + 0x30);
    if ((temp_v2 == 0) || (*(short *)(**(int **)(temp_v2 + 0xc) + 6) != 9)) {
      FUN_0017efa4(param_1 + 0xe4,param_1 + 0x120,0);
      *(unsigned char *)(param_1 + 0x200) = 0;
      nn_math_ARMv6_MTX34InvTransposeAsm(param_1 + 0x180,param_1 + 0x120);
      nn_math_ARMv6_MTX34MultAsm(param_1 + 0x180,param_1 + 0x150,param_1 + 0x180);
    }
    else {
      *(unsigned char *)(param_1 + 0x200) = 1;
      nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x180,param_1 + 0x150);
    }
    FUN_00199f84(temp_v3,param_2);
    if ((*(unsigned char *)(param_1 + 0xe4) & 1) != 0) {
      FUN_0017352c(param_1 + 0xe4,param_2,temp_v3);
    }
    nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x150,param_2);
    if (*(int *)(param_1 + 0x25c) != 0) {
      FUN_001881c8();
      return;
    }
  }
  return;
}

} /* extern "C" */
