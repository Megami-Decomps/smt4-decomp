/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ff58` (_code @ 0x38ff58, 0x2c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00390224; /* 0x390224 */
extern unsigned char LAB_00390240; /* 0x390240 */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_0019dfbc. */
extern int FUN_002337a0(unsigned int *);
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_00233f0c. */
/* Supplied declaration required: FUN_00233f4c. */
/* Supplied declaration required: FUN_00234004. */
/* Supplied declaration required: FUN_00234160. */
/* Supplied declaration required: FUN_00234278. */
extern int FUN_0026b7cc(void);
extern int FUN_0026f0d8(unsigned int);
extern int FUN_0027ec84(unsigned int *);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
extern int FUN_0029111c(void);
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_002a0f88(void);
extern int FUN_002a17c0(unsigned int *);
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: FUN_002bc200. */


void FUN_0038ff58(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v5;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  FUN_00234278(&temp_v4);
  temp_v1 = DAT_00432fc8;
  temp_v0 = param_1[2];
  if (temp_v0 != 3) {
    if ((int)temp_v0 < 3) {
      if (temp_v0 == 0) {
        *param_1 = *param_1 | 0x10000;
        FUN_00233f4c(param_1,3);
        temp_v2 = FUN_00291018(param_1[0xd4],&LAB_00390224);
        FUN_002971e4(param_1[0xd6],temp_v2);
        param_1[2] = 1;
        FUN_00233ac0(param_1,0xffffffff,0);
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          FUN_0019dfbc(param_1[0xd6]);
          (**(romwright_code **)(*(int *)param_1[0x82] + 0xc))(&temp_v5);
          temp_v4 = temp_v5;
          uStack_34 = uStack_20;
          uStack_30 = uStack_1c;
          uStack_2c = uStack_18;
          uStack_28 = uStack_14;
          temp_v1 = FUN_0027ec84(&temp_v4);
          if (temp_v1 != 0) {
            FUN_00233f0c(param_1);
            FUN_00297128();
            param_1[2] = 3;
          }
          else {
            temp_v1 = FUN_002a17c0(&temp_v4);
            if (temp_v1 != 0) {
              FUN_00233f0c(param_1);
              FUN_00297128();
              param_1[2] = 9999;
              param_1[0x84] = temp_v4;
              param_1[0x85] = uStack_34;
              param_1[0x86] = uStack_30;
              param_1[0x87] = uStack_2c;
              param_1[0x88] = uStack_28;
              return;
            }
          }
        }
      }
      else {
        temp_v3 = FUN_0026b7cc();
        if ((temp_v3 != 0) && ((*param_1 & 0x200) != 0)) {
          FUN_0019dfbc(param_1[0xd6]);
          puVar5 = param_1 + 0x83;
          FUN_00234160(puVar5,3);
          param_1[0x82] = (unsigned int)puVar5;
          temp_v3 = FUN_002337a0(param_1 + 0x90);
          puVar5[5] = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x678) + temp_v3 * 0x9c8 + 0x9aa);
          param_1[2] = 2;
          return;
        }
      }
    }
    else if (temp_v0 != 4) {
      if (temp_v0 != 5) {
        if (temp_v0 == 9999) {
          FUN_00234004(param_1,5,3);
          return;
        }
      }
      else {
        temp_v1 = FUN_002a0f88();
        if ((temp_v1 != 0) && (temp_v1 = FUN_0029111c(), temp_v1 != 0)) {
          param_1[1] = 10;
          param_1[2] = 0;
          if ((int *)param_1[0x82] != (int *)0x0) {
            (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
            param_1[0x82] = 0;
            return;
          }
        }
      }
    }
    else {
      FUN_0019dfbc(param_1[0xd6]);
      temp_v1 = FUN_0026f0d8(0x10);
      if (temp_v1 != 0) {
        FUN_002bc200(0x100016d);
        FUN_00297128();
        temp_v0 = 5;
        param_1[2] = temp_v0;
        return;
      }
    }
  }
  else {
    temp_v1 = FUN_002a0f88();
    if (temp_v1 != 0) {
      temp_v2 = FUN_00291018(param_1[0xd4],&LAB_00390240);
      FUN_002971e4(param_1[0xd6],temp_v2);
      FUN_002b8584(0);
      FUN_00233ac0(param_1,3,1);
      temp_v0 = 4;
      param_1[2] = temp_v0;
      return;
    }
  }
  return;
}
