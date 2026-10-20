/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240210` (_code @ 0x240210, 0x418 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021b390(...);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0021b390. */
extern int FUN_0026140c(void);
extern int FUN_004bd340(int, unsigned int);


unsigned char FUN_00240210(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
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
  temp_v1 = FUN_0026140c();
  temp_v9 = 0;
  temp_v2 = param_1 + param_4 * 2;
  temp_v7 = param_4 - 1;
  if (param_2 != 0) {
    if (param_2 != 0xe) goto LAB_002402b4;
    if (param_4 == 0) {
      FUN_0021b390(param_1,0xe,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x22);
      if (temp_v0 < 0) {
        return 1;
      }
      return temp_v9;
    }
    temp_v8 = 0;
    temp_v5 = temp_v8;
    do {
      temp_v3 = FUN_001ab888();
      if (-1 < *(char *)(temp_v3 + temp_v8 + 0x1c88)) {
        temp_v3 = FUN_001ab888();
        temp_v3 = FUN_001ab854((int)*(char *)(temp_v3 + temp_v8 + 0x1c88));
        temp_v4 = FUN_004bd340(temp_v3,10);
        if (temp_v4 == 0) {
          if (temp_v5 == temp_v7) {
            FUN_0021b390(param_1,0xe,*(unsigned short *)(temp_v3 + 0x62),param_3);
            temp_v5 = FUN_001ab888();
            temp_v9 = (int)*(char *)(temp_v5 + temp_v8 + 0x1c88) == (int)*(short *)(temp_v1 + 0x22);
            break;
          }
          temp_v5 = temp_v5 + 1;
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x18);
LAB_00240390:
    if (param_2 != 2) {
      temp_v5 = param_1 + param_4 * 2;
      if (param_2 != 3) {
        if (param_2 != 4) {
          if (param_2 != 5) {
            if (param_2 != 6) {
              return temp_v9;
            }
            if (param_4 == 0) {
              FUN_0021b390(param_1,6,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
              temp_v0 = *(short *)(temp_v1 + 0x2e);
              if (temp_v0 < 0) {
                return 1;
              }
              return temp_v9;
            }
            FUN_0021b390(param_1,6,param_4 - 1,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
            temp_v6 = (int)*(short *)(temp_v1 + 0x2e);
          }
          else {
            if (param_4 == 0) {
              FUN_0021b390(param_1,5,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
              if (*(char *)(temp_v1 + 0x35) < '\0') {
                return 1;
              }
              return temp_v9;
            }
            FUN_0021b390(param_1,5,param_4 - 1,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
            temp_v6 = (int)*(char *)(temp_v1 + 0x35);
          }
          if (temp_v6 == temp_v7) {
            return 1;
          }
          return temp_v9;
        }
        if (param_4 != 0) {
          FUN_0021b390(param_1,4,*(unsigned short *)(temp_v5 + 0xfb6),param_3,temp_v2,param_1,temp_v6,param_3,
                       temp_v10);
          if (*(short *)(temp_v1 + 0x2c) == *(short *)(temp_v5 + 0xfb6)) {
            return 1;
          }
          return temp_v9;
        }
        FUN_0021b390(param_1,4,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
        temp_v0 = *(short *)(temp_v1 + 0x2c);
        goto joined_r0x00240488;
      }
      if (param_4 != 0) {
        FUN_0021b390(param_1,3,*(unsigned short *)(temp_v5 + 0xf34),param_3,temp_v2,param_1,temp_v6,param_3,
                     temp_v10);
        if ((int)*(short *)(temp_v1 + 0x28) == (unsigned int)*(unsigned short *)(temp_v5 + 0xf34)) {
          return 1;
        }
        return temp_v9;
      }
      FUN_0021b390(param_1,3,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x28);
    }
    else {
      if (param_4 != 0) {
        FUN_0021b390(param_1,2,param_4,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
        if (*(short *)(temp_v1 + 0x28) == param_4) {
          return 1;
        }
        return temp_v9;
      }
      FUN_0021b390(param_1,2,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x28);
    }
    if (0 < temp_v0) {
      return temp_v9;
    }
  }
  else {
    if (param_4 == 0) {
      FUN_0021b390(param_1,0,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
      temp_v0 = *(short *)(temp_v1 + 0x20);
      if (temp_v0 < 0) {
        return 1;
      }
      return temp_v9;
    }
    temp_v8 = 0;
    temp_v5 = temp_v8;
    do {
      temp_v3 = FUN_001ab888();
      if (-1 < *(char *)(temp_v3 + temp_v8 + 0x1c88)) {
        temp_v3 = FUN_001ab888();
        temp_v3 = FUN_001ab854((int)*(char *)(temp_v3 + temp_v8 + 0x1c88));
        temp_v4 = FUN_004bd340(temp_v3,10);
        if (temp_v4 == 0) {
          if (temp_v5 == temp_v7) {
            FUN_0021b390(param_1,0,*(unsigned short *)(temp_v3 + 0x62),param_3);
            temp_v5 = FUN_001ab888();
            temp_v9 = (int)*(char *)(temp_v5 + temp_v8 + 0x1c88) == (int)*(short *)(temp_v1 + 0x20);
            break;
          }
          temp_v5 = temp_v5 + 1;
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x18);
LAB_002402b4:
    if (param_2 != 1) goto LAB_00240390;
    if (param_4 != 0) {
      FUN_0021b390(param_1,1,*(unsigned short *)(temp_v2 + 0x5d2),param_3,temp_v2,param_1,temp_v6,param_3,
                   temp_v10);
      if (*(short *)(temp_v1 + 0x2a) == *(short *)(temp_v2 + 0x5d2)) {
        return 1;
      }
      return temp_v9;
    }
    FUN_0021b390(param_1,1,0xffffffff,param_3,temp_v2,param_1,temp_v6,param_3,temp_v10);
    temp_v0 = *(short *)(temp_v1 + 0x2a);
joined_r0x00240488:
    if (temp_v0 != 0) {
      return temp_v9;
    }
  }
  return 1;
}

} /* extern "C" */
