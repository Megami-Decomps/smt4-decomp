/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001af748` (_code @ 0x1af748, 0x3ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_0028f460(int);
extern int FUN_0028f5a8(int);
extern int FUN_00290694(void);
extern int FUN_00299064(void);
extern int FUN_0029909c(int);
extern int FUN_002990bc(int);
extern int FUN_002990dc(int, int, int *);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_00333ce0(int);


unsigned int
FUN_001af748(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4 [3];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  if (param_5 == 0) {
    temp_v3 = 0xff;
  }
  else {
    temp_v3 = 0xffffffff;
  }
  temp_v5 = param_1;
  temp_v6 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (*(char *)(DAT_0043dd50 + 0x5c4) == '\0') {
    FUN_002b6700();
    if (param_1 == 0) {
      return temp_v3;
    }
    if (*(char *)(param_1 + 6) == '\0') {
      temp_v0 = 1;
      temp_v1 = 0;
      do {
        temp_v2 = FUN_002990dc(temp_v5,temp_v1,temp_v4);
        if ((temp_v2 != 0) &&
           (((temp_v2 = FUN_002990bc(temp_v5), temp_v2 != 0 &&
             (temp_v2 = FUN_0029909c(temp_v5), temp_v2 == 0)) || (0 < temp_v4[0])))) {
          temp_v0 = 0;
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      temp_v1 = FUN_0028f460(temp_v5);
      if (temp_v1 != 0) {
        if (temp_v0) {
          FUN_002bf558(2,0x29,0xe,temp_v6,param_3,param_4);
          return temp_v3;
        }
        temp_v1 = FUN_002990bc(temp_v5);
        if (temp_v1 == 0) {
          return temp_v3;
        }
        FUN_002bf460(2,0x29,0x93,temp_v6,param_3,param_4);
        temp_v1 = FUN_0029909c(temp_v5);
        if (temp_v1 != 0) {
          if (param_5 != 0) {
            return temp_v3;
          }
          return 0xff;
        }
        if (param_5 != 0) {
          return 0x787878ff;
        }
        return 0x5a5a5aff;
      }
      temp_v1 = FUN_0029909c(temp_v5);
      if ((temp_v1 != 0) || (temp_v1 = FUN_002990bc(temp_v5), temp_v1 == 0)) {
        FUN_002bf460(2,0x29,0xc2,temp_v6,param_3,param_4);
        return temp_v3;
      }
    }
    else {
      temp_v1 = FUN_0028f5a8(temp_v5);
      if (temp_v1 == 0) {
        temp_v1 = FUN_00333ce0(temp_v5);
        if (temp_v1 != 0) {
          FUN_002bf460(2,0x29,0x91,temp_v6,param_3,param_4);
        }
        else {
          temp_v1 = FUN_002990bc(temp_v5);
          if (temp_v1 != 0) {
            FUN_002bf460(2,0x29,0x93,temp_v6,param_3,param_4);
          }
          else {
            FUN_002bf460(2,0x29,0x91,temp_v6,param_3,param_4);
          }
        }
        if (param_5 != 0) {
          return 0x787878ff;
        }
        return 0x5a5a5aff;
      }
      temp_v1 = FUN_00290694();
      if (temp_v1 == temp_v5) {
        FUN_002bf558(2,0x29,0xd,temp_v6,param_3,param_4);
        if (param_5 != 0) {
          return 0x72e027ff;
        }
        return 0x8400ff;
      }
      temp_v1 = FUN_002990bc(temp_v5);
      if (temp_v1 == 0) {
        return temp_v3;
      }
    }
    FUN_002bf460(2,0x29,0x93,temp_v6,param_3,param_4);
    return temp_v3;
  }
  temp_v1 = FUN_00299064();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00290694();
    if (temp_v1 == 0) {
      FUN_002bf558(2,0x29,0xc,temp_v6,param_3,param_4);
      if (param_5 != 0) {
        return 0x72e027ff;
      }
      return 0x8400ff;
    }
    FUN_002bf460(2,0x29,0x92);
  }
  else {
    temp_v1 = FUN_002990bc(temp_v5);
    if (temp_v1 == 0) {
      return temp_v3;
    }
    FUN_002bf460(2,0x29,0x93,temp_v6,param_3,param_4);
  }
  if (param_5 != 0) {
    return 0x787878ff;
  }
  return 0x5a5a5aff;
}
