/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b079c` (_code @ 0x1b079c, 0x3fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028850c(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_0028850c. */
extern int flagWordTestBit(int, unsigned int);
extern int FUN_002a0d0c(void);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);


unsigned char FUN_001b079c(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 goto(s); 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  
  temp_v6 = param_2;
  temp_v10 = param_4;
  temp_v1 = FUN_002a0d0c();
  temp_v9 = 0;
  temp_v2 = param_1 + param_4 * 2;
  temp_v7 = param_4 - 1;
  if (param_2 != 0) {
    if (param_2 != 0xd) {
LAB_001b0880:
      if (param_2 != 1) goto LAB_001b0978;
      if (param_4 != 0) {
        FUN_0028850c(param_1,1,*(unsigned short *)(temp_v2 + 0x5be),param_3,temp_v2,param_1,temp_v6,param_3,
                     temp_v10);
        if (*(short *)(temp_v1 + 0x26) == *(short *)(temp_v2 + 0x5be)) {
          return 1;
        }
        return temp_v9;
      }
      FUN_0028850c(param_1,1,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x26);
    }
    else {
      if (param_4 == 0) {
        FUN_0028850c(param_1,0xd,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
        temp_v0 = *(short *)(temp_v1 + 0x1e);
        goto joined_r0x001b0854;
      }
      temp_v8 = 0;
      temp_v5 = temp_v8;
      do {
        temp_v3 = FUN_002a8764();
        if (-1 < *(char *)(temp_v3 + temp_v8 + 0x90f0)) {
          temp_v3 = FUN_002a8764();
          temp_v3 = FUN_002a8740((int)*(char *)(temp_v3 + temp_v8 + 0x90f0));
          temp_v4 = flagWordTestBit(temp_v3,10);
          if ((temp_v4 == 0) && (temp_v4 = flagWordTestBit(temp_v3,2), temp_v4 == 0)) {
            if (temp_v5 == temp_v7) {
              FUN_0028850c(param_1,0xd,*(unsigned short *)(temp_v3 + 0x46),param_3);
              temp_v5 = FUN_002a8764();
              temp_v9 = (int)*(char *)(temp_v5 + temp_v8 + 0x90f0) == (int)*(short *)(temp_v1 + 0x1e);
              break;
            }
            temp_v5 = temp_v5 + 1;
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x18);
LAB_001b0978:
      temp_v5 = param_1 + param_4 * 2;
      if (param_2 == 2) {
        if (param_4 == 0) {
          FUN_0028850c(param_1,2,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
          if (*(short *)(temp_v1 + 0x24) < 1) {
            return 1;
          }
          return temp_v9;
        }
        FUN_0028850c(param_1,2,*(unsigned short *)(temp_v5 + 0xf20),param_3,temp_v2,param_1,temp_v6,param_3,
                     temp_v10);
        if ((int)*(short *)(temp_v1 + 0x24) == (unsigned int)*(unsigned short *)(temp_v5 + 0xf20)) {
          return 1;
        }
        return temp_v9;
      }
      if (param_2 != 3) {
        if (param_2 == 4) {
          if (param_4 == 0) {
            FUN_0028850c(param_1,4,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
            if (*(char *)(temp_v1 + 0x31) < '\0') {
              return 1;
            }
            return temp_v9;
          }
          FUN_0028850c(param_1,4,param_4 - 1,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
          temp_v6 = (int)*(char *)(temp_v1 + 0x31);
          if (temp_v6 == temp_v7) {
            return 1;
          }
          return temp_v9;
        }
        if (param_2 != 5) {
          return temp_v9;
        }
        if (param_4 != 0) {
          FUN_0028850c(param_1,5,param_4 - 1,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
          temp_v6 = (int)*(short *)(temp_v1 + 0x2a);
          if (temp_v6 == temp_v7) {
            return 1;
          }
          return temp_v9;
        }
        FUN_0028850c(param_1,5,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
        temp_v0 = *(short *)(temp_v1 + 0x2a);
        goto joined_r0x001b0854;
      }
      if (param_4 != 0) {
        FUN_0028850c(param_1,3,*(unsigned short *)(temp_v5 + 0xf90),param_3,temp_v2,param_1,temp_v6,param_3,
                     temp_v10);
        if (*(short *)(temp_v1 + 0x28) == *(short *)(temp_v5 + 0xf90)) {
          return 1;
        }
        return temp_v9;
      }
      FUN_0028850c(param_1,3,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x28);
    }
    if (temp_v0 != 0) {
      return temp_v9;
    }
  }
  else {
    if (param_4 != 0) {
      temp_v8 = 0;
      temp_v5 = temp_v8;
      do {
        temp_v3 = FUN_002a8764();
        if (-1 < *(char *)(temp_v3 + temp_v8 + 0x90f0)) {
          temp_v3 = FUN_002a8764();
          temp_v3 = FUN_002a8740((int)*(char *)(temp_v3 + temp_v8 + 0x90f0));
          temp_v4 = flagWordTestBit(temp_v3,10);
          if ((temp_v4 == 0) && (temp_v4 = flagWordTestBit(temp_v3,2), temp_v4 == 0)) {
            if (temp_v5 == temp_v7) {
              FUN_0028850c(param_1,0,*(unsigned short *)(temp_v3 + 0x46),param_3);
              temp_v5 = FUN_002a8764();
              temp_v9 = (int)*(char *)(temp_v5 + temp_v8 + 0x90f0) == (int)*(short *)(temp_v1 + 0x1c);
              break;
            }
            temp_v5 = temp_v5 + 1;
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x18);
      goto LAB_001b0880;
    }
    FUN_0028850c(param_1,0,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
    temp_v0 = *(short *)(temp_v1 + 0x1c);
joined_r0x001b0854:
    if (-1 < temp_v0) {
      return temp_v9;
    }
  }
  return 1;
}

} /* extern "C" */
