/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b70e0` (_code @ 0x3b70e0, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_00184310. */
extern unsigned short *FUN_002c7e24(void);
extern int FUN_002c7e3c(void);
extern int FUN_002c7e54(void);
extern int FUN_00334044(void);
extern int fieldStateAllowsAction(void);


unsigned int FUN_003b70e0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v2 = DAT_00588fe8;
  temp_v3 = 0;
  if (DAT_00588fe8 != 0) {
    temp_v0 = FUN_002c7e3c();
    temp_v4 = temp_v0 != 0xe;
    temp_v5 = temp_v0 != 7;
    if (param_1 != 1) {
      if (param_1 == 2) {
        temp_v3 = 0x20;
      }
      else if (param_1 != 3) {
        if (param_1 != 4) {
          if (param_1 != 5) {
            if (param_1 == 6) {
              temp_v3 = 0x108;
            }
          }
          else if (!(temp_v4 && temp_v5)) {
            temp_v3 = 0x33;
          }
          else {
            temp_v2 = FUN_002c7e3c();
            if (((temp_v2 != 9) && (temp_v2 = FUN_002c7e3c(), temp_v2 != 10)) &&
               ((temp_v2 = FUN_002c7e3c(), temp_v2 != 0xc && (temp_v2 = FUN_002c7e3c(), temp_v2 != 8)))) {
              temp_v2 = FUN_002c7e54();
              if (temp_v2 == 0xd) {
                temp_v3 = 0x11a;
              }
              else {
                temp_v3 = 0x2d;
              }
            }
            else {
              temp_v3 = 0x62;
            }
          }
        }
        else {
          temp_v2 = FUN_002c7e3c();
          if (((temp_v2 == 9) || (temp_v2 = FUN_002c7e3c(), temp_v2 == 10)) ||
             ((temp_v2 = FUN_002c7e3c(), temp_v2 == 0xc || (temp_v2 = FUN_002c7e3c(), temp_v2 == 8)))) {
            temp_v3 = 0x61;
          }
          else {
            temp_v3 = 0x2c;
          }
        }
      }
      else if (!(temp_v4 && temp_v5)) {
        temp_v3 = 0x32;
      }
      else {
        temp_v2 = FUN_002c7e3c();
        if ((((temp_v2 == 9) || (temp_v2 = FUN_002c7e3c(), temp_v2 == 10)) ||
            (temp_v2 = FUN_002c7e3c(), temp_v2 == 0xc)) || (temp_v2 = FUN_002c7e3c(), temp_v2 == 8)) {
          temp_v3 = 0x60;
        }
        else {
          temp_v3 = 0x2b;
        }
      }
    }
    else {
      if (!(temp_v4 && temp_v5)) {
        puVar2 = (unsigned short *)FUN_002c7e24();
        temp_v1 = (unsigned int)*puVar2;
        FUN_00184310();
        if ((*(unsigned char *)(temp_v1 + 0xb3) & 2) == 0) {
          return 0x31;
        }
      }
      else {
        temp_v0 = FUN_002c7e3c();
        if (temp_v0 != 4) {
          temp_v0 = FUN_002c7e54();
          if (temp_v0 == 0xd) {
            return 0x119;
          }
          temp_v0 = FUN_00334044();
          if (temp_v0 == 2) {
            temp_v2 = fieldStateAllowsAction();
            if (temp_v2 == 0) {
              return 0x2a;
            }
            return 0xfb;
          }
          if (-1 < *(short *)(temp_v2 + 0x598)) {
            temp_v2 = fieldStateAllowsAction();
            if (temp_v2 == 0) {
              return 0x29;
            }
            return 0xfa;
          }
          temp_v2 = fieldStateAllowsAction();
          if (temp_v2 == 0) {
            return 0x1f;
          }
          return 0xf9;
        }
      }
      temp_v3 = 0xf1;
    }
  }
  return temp_v3;
}

} /* extern "C" */
