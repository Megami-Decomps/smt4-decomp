/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00349e60` (_code @ 0x349e60, 0x2f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001386b4(void);
int FUN_00275f44(unsigned int, int);
int FUN_00280ad4(int, int, int, int);
int FUN_003cc97c(...);
int SBORROW4(...);
int nn_fs_DeleteExtSaveData(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0057f6c9; /* 0x57f6c9 */
extern unsigned char DAT_0057f6ca; /* 0x57f6ca */
extern unsigned int DAT_005e2110; /* 0x5e2110 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001386b4. */
extern int FUN_00138cb4(void);
extern unsigned int FUN_0025cb5c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00280ad4. */
/* Supplied declaration required: FUN_003cc97c. */
/* Supplied declaration required: nn_fs_DeleteExtSaveData. */


void FUN_00349e60(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  DAT_0057f6c9 = 1;
  DAT_0057f6ca = 0;
  temp_v2 = FUN_00138cb4();
  if (temp_v2 != 0) {
    FUN_001386b4();
  }
  temp_v6 = 0x19a2;
  temp_v3 = FUN_0025cb5c(0x19a2,0);
  if ((int)temp_v3 < 0) {
    DAT_0057f6c9 = 0;
    temp_v0 = (temp_v3 & 0x3fc00) >> 10;
    if (((temp_v0 == 0x11) && (temp_v4 = temp_v3 & 0x3ff, temp_v4 >= 100)) && (temp_v4 < 0xb4)) {
      if (temp_v4 >= 0x82) {
        if (*param_1 == '\x05') {
          DAT_0057f6c9 = 0;
          return;
        }
        FUN_003cc97c(param_1,8,temp_v4,param_4);
        return;
      }
      if (*param_1 == '\x03') {
        FUN_003cc97c(param_1,0x17,temp_v4,param_4);
        return;
      }
      FUN_003cc97c(param_1,0xf);
    }
    else {
      temp_v4 = temp_v6;
      if (((temp_v0 == 0x11) && ((temp_v3 & 0x3ff) >= 0x154)) && ((temp_v3 & 0x3ff) < 0x168)) {
        FUN_003cc97c(param_1,9);
        nn_fs_DeleteExtSaveData(0x19a2,0);
      }
      else {
        if (((temp_v0 == 0x11) && (temp_v1 = temp_v3 & 0x3ff, temp_v1 >= 0x168)) && (temp_v1 < 0x186)) {
          FUN_003cc97c(param_1,10,temp_v1,param_4);
          return;
        }
        if (((temp_v0 != 0x11) || ((temp_v3 & 0x3ff) < 0x186)) || ((temp_v3 & 0x3ff) >= 400)) {
          if (((temp_v0 == 0x11) && (temp_v3 = temp_v3 & 0x3ff, temp_v3 >= 0xe6)) && (temp_v3 < 0x154)) {
            if ((temp_v3 < 0x104) || (temp_v3 >= 0x118)) {
              temp_v7 = SBORROW4(temp_v3,0x118);
              temp_v2 = temp_v3 - 0x118;
              if (temp_v3 >= 0x118) {
                temp_v7 = SBORROW4(0x14e,temp_v3);
                temp_v2 = 0x14e - temp_v3;
              }
              if (temp_v2 < 0 == temp_v7) {
                FUN_003cc97c(param_1,0xc);
                return;
              }
            }
            FUN_003cc97c(param_1,0xd);
            return;
          }
          FUN_003cc97c(param_1,0xe);
          return;
        }
        FUN_003cc97c(param_1,0xb);
        nn_fs_DeleteExtSaveData(0x19a2,0);
      }
      if ((int)temp_v4 < 0) {
        FUN_003cc97c(param_1,0xe);
        return;
      }
    }
    param_1[0x54] = '\x01';
    FUN_00275f44(DAT_005e2110,0x10);
    FUN_00280ad4(0x19a2,0,0x100,2);
    if ((int)temp_v6 < 0) {
      temp_v3 = (temp_v6 & 0x3fc00) >> 10;
      if (((temp_v3 == 0x11) && ((temp_v6 & 0x3ff) >= 200)) && ((temp_v6 & 0x3ff) < 0xdc)) {
        temp_v5 = 0x12;
      }
      else if (((temp_v3 == 0x11) && ((temp_v6 & 0x3ff) >= 0x154)) && ((temp_v6 & 0x3ff) < 0x168)) {
        temp_v5 = 0x13;
      }
      else if (((temp_v3 == 0x11) && (temp_v6 = temp_v6 & 0x3ff, temp_v6 >= 0xe6)) && (temp_v6 < 0x154)) {
        if ((temp_v6 >= 0x104) && (0x117 >= temp_v6)) {
          temp_v5 = 0x14;
        }
        else {
          temp_v7 = SBORROW4(temp_v6,0x118);
          temp_v2 = temp_v6 - 0x118;
          if (temp_v6 >= 0x118) {
            temp_v7 = SBORROW4(0x14e,temp_v6);
            temp_v2 = 0x14e - temp_v6;
          }
          if (temp_v2 < 0 == temp_v7) {
            temp_v5 = 0x15;
          }
          else {
            temp_v5 = 0x16;
          }
        }
      }
      else {
        temp_v5 = 0x18;
      }
      FUN_003cc97c(param_1,temp_v5);
      return;
    }
    FUN_003cc97c(param_1,0x11);
    DAT_0057f6c9 = 1;
    DAT_0057f6ca = 1;
  }
  return;
}

} /* extern "C" */
