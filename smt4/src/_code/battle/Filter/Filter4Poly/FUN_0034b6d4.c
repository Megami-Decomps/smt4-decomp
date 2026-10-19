/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034b6d4` (_code @ 0x34b6d4, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char DAT_00420710; /* 0x420710 */
extern unsigned char DAT_00420888; /* 0x420888 */
extern unsigned char DAT_00420950; /* 0x420950 */

/* Supplied declaration required: FUN_0023b49c. */
extern unsigned int FUN_002a7bc0(void);
/* Supplied declaration required: FUN_002bfe28. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_0034b884. */


int * FUN_0034b6d4(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_3 != 0) {
    piVar1 = (int *)0xc;
    FUN_002c222c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0x3f800000;
      *piVar1 = (int)&DAT_00420888;
      piVar1[1] = 0;
    }
  }
  else {
    piVar1 = (int *)0x20;
    FUN_002c222c();
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      *piVar1 = (int)&DAT_00420710;
      piVar1[1] = 0;
    }
  }
  piVar2 = (int *)0x20;
  FUN_002c222c(0x20,param_2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0x3c23d70a;
    *piVar2 = (int)&DAT_00420950;
    piVar2[7] = 0;
    piVar2[5] = (int)piVar1;
  }
  piVar2[7] = param_1;
  FUN_0023b49c(piVar2,param_2,*(unsigned int *)(param_1 + 0x1c));
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,0x50,1);
  piVar2[1] = temp_v0;
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,*(int *)(piVar2[7] + 0x2c) * 0x50,1);
  piVar2[6] = temp_v0;
  FUN_0034b884(piVar2);
  (**(romwright_code **)(*piVar2 + 0x10))(piVar2);
  temp_v0 = 0;
  if (temp_v0 < *(int *)(piVar2[7] + 0x2c)) {
    do {
      temp_v2 = piVar2[6];
      temp_v1 = FUN_002a7bc0();
      FUN_002bfe28(temp_v2 + temp_v0 * 0x50,temp_v1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(piVar2[7] + 0x2c));
  }
  (**(romwright_code **)(*piVar1 + 0x14))
            (piVar1,*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x38),
             *(unsigned int *)(param_1 + 0x3c));
  return piVar2;
}
