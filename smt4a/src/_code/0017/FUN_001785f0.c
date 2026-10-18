/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001785f0` (_code @ 0x1785f0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001907a4. */
extern unsigned int *FUN_00194834(unsigned char *);
/* Supplied declaration required: FUN_00194c68. */
extern unsigned int FUN_001a8e14(int);


unsigned int FUN_001785f0(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  
  temp_v0 = FUN_001a8e14(param_1[1]);
  temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
  if (((param_3 & 0xc) != 0) && (temp_v1 == 0)) {
    return 0;
  }
  if ((param_3 & 8) != 0) {
    FUN_001907a4(temp_v3);
    puVar3 = (unsigned int *)FUN_00194834(temp_v3);
    if (puVar3 == (unsigned int *)0x0) {
      return 0;
    }
    temp_v2 = 0;
    if (temp_v2 < *puVar3) {
      do {
        if (*puVar3 <= temp_v2) {
          return 0;
        }
        if (puVar3 + temp_v2 * 2 + 1 == (unsigned int *)0x0) {
          return 0;
        }
        piVar4 = param_1;
        FUN_00194c68(param_1,puVar3[temp_v2 * 2 + 1],puVar3[temp_v2 * 2 + 2]);
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *puVar3);
    }
  }
  return 1;
}
