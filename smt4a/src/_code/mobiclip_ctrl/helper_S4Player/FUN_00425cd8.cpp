/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00425cd8` (_code @ 0x425cd8, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001469a8(int);
int asdMemFree(unsigned int);
int FUN_001a08d8(int);
int FUN_001a0d08(int);
int FUN_002e3140(void);
int FUN_002e3328(int);
int deblockerHandleRelease(int);
int FUN_00424b54(int);
int software_interrupt(int);

typedef int romwright_code(...);
extern unsigned int DAT_00588100; /* 0x588100 */
extern int DAT_00588104; /* 0x588104 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: deblockerHandleRelease. */
/* Supplied declaration required: FUN_00424b54. */


void FUN_00425cd8(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(unsigned char *)(param_1 + 0x10) = 1;
    FUN_001a08d8(param_1 + 0x20);
    software_interrupt(0x24);
    if (*(int *)(param_1 + 0x28) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(param_1 + 0x2c) = 1;
    FUN_001a0d08(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(param_1 + 0x28) = 0;
    }
    FUN_001469a8(DAT_00588104);
    temp_v0 = DAT_00588104;
    if (DAT_00588104 != 0) {
      FUN_001469a8(DAT_00588104);
      FUN_002e3328(temp_v0);
    }
    DAT_00588104 = 0;
    asdMemFree(DAT_00588100);
    DAT_00588100 = 0;
    *(unsigned int *)(param_1 + 8) = 0xffffffff;
    FUN_00424b54(param_1);
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x2e8)) {
      do {
        temp_v1 = param_1 + temp_v0 * 4;
        (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 4))
                  (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                   *(unsigned int *)(temp_v1 + 0x2ec));
        *(unsigned int *)(temp_v1 + 0x2ec) = 0;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x2e8));
    }
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x484)) {
      do {
        temp_v1 = param_1 + temp_v0 * 4;
        (**(romwright_code **)(**(int **)(param_1 + 0x1b8) + 0xc))
                  (*(int **)(param_1 + 0x1b8),*(unsigned int *)(param_1 + 0x14),
                   *(unsigned int *)(temp_v1 + 0x488));
        *(unsigned int *)(temp_v1 + 0x488) = 0;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x484));
    }
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x1c4)) {
      do {
        temp_v1 = param_1 + temp_v0 * 0x18;
        if (*(int *)(temp_v1 + 0x1d8) != 0) {
          (**(romwright_code **)(**(int **)(param_1 + 0x14) + 4))();
          *(unsigned int *)(temp_v1 + 0x1d8) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 0x1c4));
    }
    deblockerHandleRelease(param_1 + 0x158);
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
    *(unsigned int *)(param_1 + 0x1bc) = 0;
    *(unsigned int *)(param_1 + 0x1c0) = 0;
  }
  return;
}

} /* extern "C" */
