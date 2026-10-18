/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4644` (_code @ 0x1e4644, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c23f8. */
extern int *FUN_003a8a44(void);
extern int *FUN_003aa9f4(void);
extern int *FUN_003aaa40(void);
extern int *FUN_003ac484(void);


unsigned int FUN_001e4644(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_1;
  temp_v0 = *(char *)(temp_v3 + 0xd);
  if (temp_v0 != '\0') {
    if (temp_v0 == '\x01') {
      if (*(int **)(temp_v3 + 0x18) == (int *)0x0) {
        return 0;
      }
      temp_v1 = (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 0x1c))();
      if (temp_v1 == 0) {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xd) = 2;
      return 0;
    }
    if (temp_v0 == '\x02') {
      if (*(int *)(temp_v3 + 0x18) == 0) {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xd) = 3;
      *(unsigned char *)(temp_v3 + 0xc) = 1;
      param_1[1] = -1;
      (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 0x10))();
      if (*(int **)(temp_v3 + 0x18) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 4))();
      }
      *(unsigned int *)(temp_v3 + 0x18) = 0;
      return 0;
    }
    if (temp_v0 != '\x03') {
      return 0;
    }
    return 0xffffffff;
  }
  temp_v1 = 0xa708;
  temp_v2 = 0xa798;
  switch(param_1[1]) {
  case 0:
    FUN_002c23f8();
    piVar2 = (int *)0x0;
    if (temp_v1 != 0) {
      piVar2 = (int *)FUN_003a8a44();
    }
    break;
  case 1:
    FUN_002c23f8();
    piVar2 = (int *)0x0;
    if (temp_v1 != 0) {
      piVar2 = (int *)FUN_003a8a44();
    }
    break;
  case 2:
    FUN_002c23f8();
    piVar2 = (int *)0x0;
    if (temp_v2 != 0) {
      piVar2 = (int *)FUN_003aaa40();
    }
    break;
  case 3:
    temp_v1 = 0xa6f0;
    FUN_002c23f8();
    piVar2 = (int *)0x0;
    if (temp_v1 != 0) {
      piVar2 = (int *)FUN_003ac484();
    }
    break;
  case 4:
    FUN_002c23f8();
    piVar2 = (int *)0x0;
    if (temp_v2 != 0) {
      piVar2 = (int *)FUN_003aa9f4();
    }
    break;
  default:
    piVar2 = *(int **)(temp_v3 + 0x18);
    (**(romwright_code **)(*piVar2 + 8))();
    *(unsigned char *)(temp_v3 + 0xd) = 1;
    return 0;
  }
  *(int **)(temp_v3 + 0x18) = piVar2;
  (**(romwright_code **)(*piVar2 + 8))();
  *(unsigned char *)(temp_v3 + 0xd) = 1;
  return 0;
}
