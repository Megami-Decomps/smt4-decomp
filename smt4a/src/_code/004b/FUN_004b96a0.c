/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b96a0` (_code @ 0x4b96a0, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00570260; /* 0x570260 */
extern int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1610; /* 0x5f1610 */
extern unsigned char DAT_005f1634; /* 0x5f1634 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */

extern int FUN_0013def0(unsigned int);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001b4aa0. */
extern int FUN_001bd118(void);
/* Supplied declaration required: FUN_00215978. */
/* Supplied declaration required: FUN_00239b10. */
/* Supplied declaration required: FUN_00270b00. */
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_0031d230(void);
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d54f8. */
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_004b6bc4. */


void FUN_004b96a0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v1 = *(int *)(param_1 + 0x1128);
  FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x112c));
  *(int *)(param_1 + 0x1130) = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  temp_v3 = (int)*(short *)(param_1 + 0x3c);
  temp_v0 = 0;
  temp_v1 = FUN_004186e0();
  if ((temp_v1 != 0) && (temp_v1 = FUN_001bd118(), temp_v1 == 6)) {
    temp_v0 = 1;
  }
  FUN_004b6bc4(param_1,temp_v3,0xffffffff);
  *(unsigned int *)(param_1 + 0x50) = 0x43c80000;
  *(unsigned int *)(param_1 + 0x54) = 0x43700000;
  temp_v1 = FUN_0013def0(0);
  if (temp_v1 == 3) {
    FUN_003d54f8(0,10);
  }
  temp_v1 = FUN_0013def0(1);
  if (temp_v1 == 3) {
    FUN_003d54f8(1,10);
  }
  *(unsigned int *)(param_1 + 0x116c) = 0;
  FUN_00270b00();
  if (DAT_005f1b70 != '\0') {
    if (temp_v0) {
      temp_v2 = FUN_001b4aa0();
      switch(temp_v2) {
      case 0:
      case 3:
        *(unsigned int *)(param_1 + 0x116c) = 1;
        *(unsigned char *)(param_1 + 0xa88) = 1;
        break;
      case 4:
        *(unsigned int *)(param_1 + 0x116c) = 2;
      }
    }
    else if ((*(char *)(DAT_00570260 + 0xc1) == '\0') && (temp_v1 = FUN_001b4aa0(), temp_v1 != 6)) {
      temp_v1 = FUN_001b4aa0();
      if (temp_v1 != 1) {
        temp_v1 = FUN_001b4aa0();
        if (temp_v1 == 5) {
          FUN_00239b10(1);
          FUN_00215978(0);
          *(unsigned int *)(param_1 + 0x116c) = 4;
        }
      }
      else {
        FUN_00239b10(1);
        FUN_00215978(0);
        temp_v1 = FUN_0031d230();
        if (temp_v1 != 0) {
          *(unsigned int *)(param_1 + 0x116c) = 3;
        }
        else {
          *(unsigned int *)(param_1 + 0x116c) = 4;
        }
      }
    }
    else {
      FUN_00239b10(2);
      FUN_00215978(0);
    }
  }
  DAT_005f15fc = temp_v3 + 200;
  DAT_005f1634 = 0;
  DAT_005f1610 = 3;
  DAT_005f1b70 = 0;
  FUN_00324bc8(0xffffffff,0xffffffff);
  if (temp_v3 == 3 || temp_v3 == 4) {
    temp_v1 = 0x100004a;
  }
  else {
    temp_v1 = 0x100003d;
  }
  temp_v3 = FUN_0018719c(0x12e);
  if ((temp_v3 != 0) && (temp_v3 = FUN_0018719c(0x135), temp_v3 == 0)) {
    temp_v1 = 0x100003f;
  }
  if (*(int *)(param_1 + 0x34) == temp_v1) {
    return;
  }
  *(int *)(param_1 + 0x34) = temp_v1;
  FUN_003d2d34(temp_v1,0,0x3c);
  return;
}
