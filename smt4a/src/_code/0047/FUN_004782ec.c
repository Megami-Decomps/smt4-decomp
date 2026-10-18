/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004782ec` (_code @ 0x4782ec, 0x2bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_00570260; /* 0x570260 */
extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00169548. */
/* Supplied declaration required: FUN_0016ccb4. */
/* Supplied declaration required: FUN_001760cc. */
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001d0fcc. */
extern int FUN_001d10ac(unsigned int *);
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_0046c428. */
/* Supplied declaration required: FUN_0046e2d0. */
/* Supplied declaration required: FUN_0046f3ac. */
/* Supplied declaration required: FUN_0047314c. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: FUN_0047b1e4. */
/* Supplied declaration required: FUN_0047bcdc. */
extern int FUN_0047dae0(unsigned int *);
/* Supplied declaration required: FUN_0047daf4. */


void FUN_004782ec(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  int temp_v4;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  FUN_0047daf4(&temp_v3);
  temp_v0 = *(unsigned int *)(DAT_00570260 + 0x754);
  *(unsigned int *)(DAT_00570260 + 0x754) = temp_v0 & 0xffffff8f;
  if ((temp_v0 & 0x10) != 0) {
    FUN_00477d10(param_1,0xffffffff,0);
    FUN_0047314c(param_1 + 0x46c);
    FUN_0047b1e4(param_1);
    param_1[1] = 0x12;
    param_1[2] = 0;
    if ((int *)param_1[0x82] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
      param_1[0x82] = 0;
    }
    FUN_0016ccb4(DAT_00570260 + 0x80);
    FUN_0046c428(DAT_00570280);
    FUN_001760cc(DAT_00570280);
    temp_v1 = FUN_001af210(DAT_00570260 + 0x98);
    if (temp_v1 != 0) {
      *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
    }
  }
  else {
    temp_v2 = param_1[2];
    if (temp_v2 != 2) {
      if ((int)temp_v2 < 2) {
        if (temp_v2 != 0) {
          if (temp_v2 != 1) {
            return;
          }
          temp_v1 = FUN_002e19f8();
          if (temp_v1 == 0) {
            return;
          }
          FUN_0047bcdc(param_1,1);
          FUN_0046e2d0(DAT_00570280);
          temp_v0 = 2;
        }
        else {
          FUN_00169548(0);
          FUN_00477d10(param_1,0xffffffff,0);
          temp_v0 = 1;
        }
        param_1[2] = temp_v0;
        return;
      }
      if (temp_v2 != 3) {
        if ((temp_v2 == 9999 && (temp_v0 & 4) == 0) && ((temp_v0 & 8) == 0)) {
          FUN_0046c428(DAT_00570280);
          FUN_001760cc(DAT_00570280);
          temp_v1 = FUN_001af210(DAT_00570260 + 0x98);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
          }
          piVar3 = (int *)param_1[0x82];
          param_1[1] = 3;
          param_1[2] = 0;
          if (piVar3 != (int *)0x0) {
            (**(romwright_code **)(*piVar3 + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
      else {
        temp_v1 = FUN_002e19f8();
        if (temp_v1 != 0) {
          FUN_0046c428(DAT_00570280);
          FUN_001d0fcc(&temp_v4,DAT_00570280);
          param_1[1] = 5;
          param_1[2] = 0;
          piVar3 = (int *)param_1[0x82];
          if (piVar3 == (int *)0x0) {
            return;
          }
          (**(romwright_code **)(*piVar3 + 4))();
          param_1[0x82] = 0;
          return;
        }
      }
    }
    else if ((*param_1 & 0x200) != 0) {
      FUN_0046f3ac(&temp_v4,DAT_00570280);
      temp_v3 = temp_v4;
      uStack_3c = uStack_28;
      uStack_38 = uStack_24;
      uStack_34 = uStack_20;
      uStack_30 = uStack_1c;
      temp_v1 = FUN_0047dae0((unsigned int *)&temp_v3);
      if (temp_v1 != 0) {
        param_1[2] = 3;
      }
      else {
        temp_v1 = FUN_001d10ac((unsigned int *)&temp_v3);
        if (temp_v1 != 0) {
          param_1[2] = 9999;
          temp_v1 = FUN_001af210(DAT_00570260 + 0x98);
          if (temp_v1 != 0) {
            *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
          }
          FUN_0047b1e4(param_1);
          return;
        }
      }
    }
  }
  return;
}
