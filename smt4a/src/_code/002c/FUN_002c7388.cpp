/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7388` (_code @ 0x2c7388, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001386b4(void);
int FUN_0032ca54(unsigned int);
int FUN_00359974(int, int, unsigned int);
int FUN_0037aaec(int, int);
int FUN_003cc97c(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001386b4. */
extern unsigned int FUN_00280bc0(void);
/* Supplied declaration required: FUN_0032ca54. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0037aaec. */
/* Supplied declaration required: FUN_003cc97c. */


unsigned int FUN_002c7388(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = FUN_00280bc0();
  if ((temp_v2 & 0x80000000) == 0) {
    temp_v3 = 0;
  }
  else {
    FUN_0032ca54(temp_v2);
    temp_v3 = 4;
    temp_v0 = (temp_v2 & 0x3fc00) >> 10;
    temp_v4 = 0x1c;
    if (((temp_v0 == 0x11) && (temp_v1 = temp_v2 & 0x3ff, temp_v1 >= 100)) && (temp_v1 < 0xb4)) {
      if (temp_v1 < 0x82) {
        return 3;
      }
      temp_v4 = 0x1e;
    }
    else if (((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 0xb4)) || ((temp_v2 & 0x3ff) >= 200)) {
      if (((temp_v0 == 0x11) && ((temp_v2 & 0x3ff) >= 0x186)) && ((temp_v2 & 0x3ff) < 400)) {
        if (param_3 != 1) {
          if (param_3 != 3) {
            if (param_3 != 0) {
              if (param_3 == 2) {
                temp_v3 = 6;
              }
              else {
                temp_v4 = 0x20;
              }
            }
            else {
              if (param_2 != 0) {
                FUN_0037aaec(1,param_2);
              }
              temp_v3 = 1;
              temp_v4 = 0x21;
            }
          }
          else {
            if (param_2 != 0) {
              FUN_0037aaec(1,param_2);
            }
            temp_v3 = 1;
            FUN_00359974(0,param_4 + 1,0xffffffff);
            temp_v4 = 0x22;
          }
        }
        else {
          if (param_2 != 0) {
            FUN_0037aaec(1,param_2);
          }
          temp_v3 = 1;
          temp_v4 = 0x19;
        }
      }
      else if (((temp_v0 == 0x11) && ((temp_v2 & 0x3ff) >= 0xdc)) && ((temp_v2 & 0x3ff) < 0xe6)) {
        FUN_001386b4();
        temp_v3 = 5;
      }
      else if (((temp_v0 == 0x11) && (temp_v1 = temp_v2 & 0x3ff, temp_v1 >= 0xe6)) && (temp_v1 < 0x154)) {
        if ((((temp_v1 >= 0x104) && (temp_v1 < 0x118)) || (temp_v1 < 0x118)) || (temp_v1 >= 0x14f)) {
          temp_v4 = 0x1b;
        }
      }
      else if (((temp_v0 == 0x11) && ((temp_v2 & 0x3ff) >= 200)) &&
              (((temp_v2 & 0x3ff) < 0xdc && (param_3 == 1)))) {
        if (param_2 != 0) {
          FUN_0037aaec(1,param_2);
        }
        temp_v4 = 0x1d;
      }
    }
    FUN_003cc97c(param_1,temp_v4);
  }
  return temp_v3;
}

} /* extern "C" */
