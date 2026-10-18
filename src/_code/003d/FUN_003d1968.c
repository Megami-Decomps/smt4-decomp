/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1968` (_code @ 0x3d1968, 0x4b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_004398d4; /* 0x4398d4 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002278e4. */
/* Supplied declaration required: FUN_00229c68. */
/* Supplied declaration required: FUN_0024095c. */
/* Supplied declaration required: FUN_0024511c. */
extern int FUN_00245198(int, unsigned int);
/* Supplied declaration required: FUN_00245394. */
extern int FUN_002453e4(int, unsigned int);
/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_00267f68. */
/* Supplied declaration required: FUN_0026ca8c. */
/* Supplied declaration required: FUN_00282a90. */
/* Supplied declaration required: FUN_002940ac. */
extern int FUN_00294174(int);
/* Supplied declaration required: FUN_00295fcc. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c1830(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033858c. */
/* Supplied declaration required: FUN_00338638. */
/* Supplied declaration required: FUN_00338988. */
/* Supplied declaration required: FUN_003391e4. */
/* Supplied declaration required: FUN_00339350. */
/* Supplied declaration required: FUN_00339488. */
/* Supplied declaration required: FUN_00339988. */
/* Supplied declaration required: FUN_00339a5c. */
/* Supplied declaration required: FUN_00339ff4. */
/* Supplied declaration required: FUN_0033a498. */
/* Supplied declaration required: FUN_003402c4. */
/* Supplied declaration required: FUN_003d6120. */
/* Supplied declaration required: FUN_003d6634. */
/* Supplied declaration required: FUN_003d6838. */
/* Supplied declaration required: FUN_003dc258. */
/* Supplied declaration required: FUN_003ddd7c. */
/* Supplied declaration required: FUN_003deaf0. */
/* Supplied declaration required: FUN_003dec10. */
/* Supplied declaration required: FUN_003deca4. */


unsigned int FUN_003d1968(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 32 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int in_s0;
  
  temp_v5 = 0;
  FUN_0033858c(*param_1);
  FUN_00339988(*param_1);
  temp_v0 = FUN_00294174(*param_1);
  temp_v4 = 0;
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_2 + 0xc);
    FUN_00338638(*param_1);
    if (in_s0 == 0x42200000) {
      FUN_00250800(0,param_2,0x10001ee,0,0,0,0);
    }
    temp_v1 = FUN_002c1830(9,1);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = temp_v0;
    }
    if ((((temp_v1 != 0 && temp_v0 != 0) && -1 < temp_v2) &&
        (temp_v2 = FUN_002453e4(*param_1,0), temp_v2 != 0)) &&
       (temp_v2 = FUN_00245198(*param_1,0), temp_v2 != 0)) {
      if (-1 < *(int *)(*param_1 + 0x49e8)) {
        FUN_00295fcc();
      }
      temp_v0 = 0x122;
    }
    temp_v4 = temp_v5;
    if (temp_v0 == 0xd4) {
      temp_v0 = 0x43;
      do {
        temp_v2 = *(int *)(*param_1 + 0x1e98) + temp_v0 * 0x114;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 0x8000) != 0) {
          *(unsigned short *)(temp_v2 + 0x58) = *(unsigned short *)(temp_v2 + 0x58) | 0x1000;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x6d);
    }
    else if (temp_v0 < 0xd4) {
      if (temp_v0 == 0x94) {
        temp_v0 = 0x43;
        do {
          temp_v2 = *(int *)(*param_1 + 0x1e98) + temp_v0 * 0x114;
          temp_v3 = *(unsigned int *)(temp_v2 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x8000) != 0) {
            *(unsigned int *)(temp_v2 + 0x50) = temp_v3 | 0x80000;
            *(unsigned short *)(temp_v2 + 0x58) = *(unsigned short *)(temp_v2 + 0x58) & 0xefff;
            FUN_003deaf0(*(unsigned int *)(temp_v2 + 0x5c),param_2,temp_v2);
            FUN_00250800(*(unsigned int *)(temp_v2 + 0x5c),param_2,0x10001e9,0,0,0,0);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 0x6d);
      }
      else if (temp_v0 < 0x94) {
        if (temp_v0 != 0) {
          if (temp_v0 != 0x5a) {
            if ((temp_v0 == 100) && (*(int *)(*param_1 + 0x4394) != 0)) {
              FUN_002940ac();
            }
          }
          else {
            FUN_003ddd7c(0,param_2,5);
          }
        }
        else {
          FUN_00339350(*param_1);
          FUN_0033a498(*param_1);
          FUN_003d6634(DAT_004342c8);
          FUN_003d6120(DAT_004342c8);
          FUN_00267f68(DAT_00439ca8);
          FUN_00245394(*param_1,0,10);
          FUN_00250800(0,param_2,0x100010a,0,0,0,1);
        }
      }
    }
    else if (temp_v0 != 0x108) {
      if (temp_v0 < 0x109) {
        if (temp_v0 != 0xda) {
          if (temp_v0 != 0xe4) {
            if (temp_v0 == 0xe5) {
              FUN_002278e4(0,param_2,10);
            }
          }
          else {
            FUN_003dec10(0,param_2);
            FUN_003deca4(1,param_2);
          }
        }
        else {
          FUN_00282a90(0,0,0,0,5,0,6,0);
        }
      }
      else if (temp_v0 != 0x10a) {
        if (temp_v0 == 0x122) {
          *(unsigned int *)(*param_1 + 0x49e8) = 0xffffffff;
          FUN_00339488(*param_1);
          FUN_003402c4(DAT_004398d4);
          FUN_002278e4(0,param_2,1);
          FUN_003d6838(DAT_004342c8);
          FUN_0024095c(DAT_004342c8,0);
          FUN_003dc258(DAT_00435d18);
          FUN_00339ff4(*param_1);
          FUN_003391e4(*param_1);
          FUN_00338988(*param_1);
          FUN_00339a5c(*param_1);
          FUN_0026ca8c(DAT_00439ca8);
          FUN_002a0f50();
          FUN_002b8b78();
          FUN_00229c68(param_1);
          temp_v4 = 1;
        }
      }
      else {
        FUN_0024511c(*param_1,0,1,0xf,0xff);
      }
    }
    else {
      FUN_00282a90(0,0,0,0,5,1,6,0);
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  return temp_v4;
}
