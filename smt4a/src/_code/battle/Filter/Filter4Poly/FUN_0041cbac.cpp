/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041cbac` (_code @ 0x41cbac, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016007c(...);
int FUN_001630d4(int, int, int, int, int);
int FUN_0019a0e8(int, unsigned int);
int FUN_00409e20(int *, unsigned int, unsigned int);
int FUN_0041cd5c(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char DAT_00557b40; /* 0x557b40 */
extern unsigned char DAT_00557d30; /* 0x557d30 */
extern unsigned char DAT_00557de4; /* 0x557de4 */

/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_001630d4. */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: FUN_0019a0e8. */
/* Supplied declaration required: FUN_00409e20. */
/* Supplied declaration required: FUN_0041cd5c. */


int * FUN_0041cbac(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_3 != 0) {
    piVar1 = (int *)0xc;
    FUN_0016007c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0x3f800000;
      *piVar1 = (int)&DAT_00557d30;
      piVar1[1] = 0;
    }
  }
  else {
    piVar1 = (int *)0x20;
    FUN_0016007c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      *piVar1 = (int)&DAT_00557b40;
      piVar1[1] = 0;
    }
  }
  piVar2 = (int *)0x20;
  FUN_0016007c(0x20,param_2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0x3c23d70a;
    *piVar2 = (int)&DAT_00557de4;
    piVar2[7] = 0;
    piVar2[5] = (int)piVar1;
  }
  piVar2[7] = param_1;
  FUN_00409e20(piVar2,param_2,*(unsigned int *)(param_1 + 0x1c));
  temp_v0 = 0x100;
  FUN_001630d4(0x100,0x100,0,0x50,1);
  piVar2[1] = temp_v0;
  temp_v0 = 0x100;
  FUN_001630d4(0x100,0x100,0,*(int *)(piVar2[7] + 0x2c) * 0x50,1);
  piVar2[6] = temp_v0;
  FUN_0041cd5c(piVar2);
  (**(romwright_code **)(*piVar2 + 0x10))(piVar2);
  temp_v0 = 0;
  if (temp_v0 < *(int *)(piVar2[7] + 0x2c)) {
    do {
      temp_v2 = piVar2[6];
      temp_v1 = FUN_0018aeb8();
      FUN_0019a0e8(temp_v2 + temp_v0 * 0x50,temp_v1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(piVar2[7] + 0x2c));
  }
  (**(romwright_code **)(*piVar1 + 0x14))
            (piVar1,*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x38),
             *(unsigned int *)(param_1 + 0x3c));
  return piVar2;
}

} /* extern "C" */
