/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c2c8` (_code @ 0x13c2cc, 0x344 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiPointerHitsRect(int, int, int, int, int);
int FUN_00167c14(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_8_DEFINED
#define ROMWRIGHT_SQRT_8_DEFINED
double sqrt(double);
static double romwright_sqrt_8(double value)
{
    return (double)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: uiPointerHitsRect. */
/* Supplied declaration required: FUN_00167c14. */


unsigned int FUN_0013c2c8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  double temp_v6;
  
  temp_v4 = *(int *)(param_1 + 4);
  piVar5 = (int *)(temp_v4 + 0x664);
  temp_v1 = temp_v4 + 0x658;
  switch(*(unsigned char *)(temp_v4 + 8)) {
  case 0:
    FUN_00167c14(temp_v1,temp_v4 + 0x65c,1,param_4,param_4);
    if ((temp_v1 != 0) && (temp_v1 = 0, 0 < *(short *)(temp_v4 + 0x64a))) {
      do {
        if (*(short *)(temp_v4 + 0x64c) <= temp_v1) goto LAB_0013c394;
        do {
          temp_v2 = temp_v4 + temp_v1 * 8;
          temp_v3 = (int)*(short *)(temp_v2 + 10);
          uiPointerHitsRect(temp_v3,(int)*(short *)(temp_v2 + 0xc),(int)*(short *)(temp_v2 + 0xe),
                       (int)*(short *)(temp_v2 + 0x10),0);
          if (temp_v3 != 0) {
            *(unsigned char *)(temp_v4 + 8) = 1;
            *(short *)(temp_v4 + 0x64e) = (short)temp_v1;
            *(unsigned short *)(temp_v4 + 0x650) = 0;
            *(unsigned short *)(temp_v4 + 0x652) = 0;
          }
LAB_0013c394:
          temp_v1 = (int)(short)((short)temp_v1 + 1);
          if (*(short *)(temp_v4 + 0x64a) <= temp_v1) goto LAB_0013c3b4;
        } while (temp_v1 >= 10);
      } while( 1 );
    }
LAB_0013c3b4:
    *(unsigned int *)(temp_v4 + 0x668) = *(unsigned int *)(temp_v4 + 0x658);
    *(unsigned int *)(temp_v4 + 0x66c) = *(unsigned int *)(temp_v4 + 0x65c);
    *(unsigned int *)(temp_v4 + 0x678) = 0;
    *(unsigned int *)(temp_v4 + 0x660) = *(unsigned int *)(temp_v4 + 0x658);
    *(unsigned int *)(temp_v4 + 0x664) = *(unsigned int *)(temp_v4 + 0x65c);
    break;
  case 1:
    temp_v0 = *(short *)(temp_v4 + 0x650) + 1;
    *(short *)(temp_v4 + 0x650) = temp_v0;
    if (temp_v0 < 10) {
      temp_v1 = temp_v4 + 0x660;
      FUN_00167c14(temp_v1,piVar5,0,param_4,param_4);
      if (temp_v1 != 0) {
        temp_v1 = *(int *)(temp_v4 + 0x660) - *(int *)(temp_v4 + 0x658);
        temp_v2 = *(int *)(temp_v4 + 0x664) - *(int *)(temp_v4 + 0x65c);
        temp_v6 = (double)VectorSignedToFloat(temp_v2 * temp_v2 + temp_v1 * temp_v1,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = VectorFloatToUnsigned(romwright_sqrt_8(temp_v6),3);
        if (temp_v5 >= 9) {
          *(unsigned char *)(temp_v4 + 8) = 2;
        }
      }
    }
    else {
      *(unsigned char *)(temp_v4 + 8) = 2;
    }
    temp_v1 = 0;
    FUN_00167c14(0,0,3);
    if (temp_v1 == 0) {
      return 0;
    }
    *(unsigned char *)(temp_v4 + 8) = 6;
    *(unsigned short *)(temp_v4 + 0x650) = 0;
    break;
  case 2:
    *(short *)(temp_v4 + 0x650) = *(short *)(temp_v4 + 0x650) + 1;
    temp_v1 = temp_v4 + 0x660;
    FUN_00167c14(temp_v1,piVar5,0,param_4,param_4);
    if (temp_v1 != 0) {
      temp_v1 = 0;
      if (*(short *)(temp_v4 + 0x64a) < 1) {
        return 0;
      }
      do {
        if (*(short *)(temp_v4 + 0x64c) <= temp_v1) goto LAB_0013c4e8;
        do {
          temp_v2 = temp_v4 + temp_v1 * 8;
          temp_v3 = (int)*(short *)(temp_v2 + 10);
          uiPointerHitsRect(temp_v3,(int)*(short *)(temp_v2 + 0xc),(int)*(short *)(temp_v2 + 0xe),
                       (int)*(short *)(temp_v2 + 0x10),0);
          if (temp_v3 != 0) {
            *(unsigned char *)(temp_v4 + 8) = 2;
            *(short *)(temp_v4 + 0x64e) = (short)temp_v1;
          }
LAB_0013c4e8:
          temp_v1 = (int)(short)((short)temp_v1 + 1);
          if (*(short *)(temp_v4 + 0x64a) <= temp_v1) {
            return 0;
          }
        } while (temp_v1 >= 10);
      } while( 1 );
    }
    *(unsigned char *)(temp_v4 + 8) = 0;
    *(unsigned short *)(temp_v4 + 0x650) = 0;
    break;
  case 4:
    temp_v1 = *(int *)(temp_v4 + 0x670);
    *(int *)(temp_v4 + 0x660) = *(int *)(temp_v4 + 0x660) + temp_v1;
    if (temp_v1 < 0) {
      if ((*(unsigned short *)(temp_v4 + 0x654) & 1) == 0) {
        *(int *)(temp_v4 + 0x670) = temp_v1 + 1;
      }
      temp_v1 = *(int *)(temp_v4 + 0x670);
      if (-5 < temp_v1) {
        temp_v1 = -5;
      }
      *(int *)(temp_v4 + 0x670) = temp_v1;
      if ((short)((short)*(unsigned int *)(temp_v4 + 0x660) - (short)*(unsigned int *)(temp_v4 + 0x658)) <
          -0x140) {
        *(unsigned char *)(temp_v4 + 8) = 0;
      }
    }
    if (0 < *(int *)(temp_v4 + 0x670)) {
      if ((*(unsigned short *)(temp_v4 + 0x654) & 1) == 0) {
        *(int *)(temp_v4 + 0x670) = *(int *)(temp_v4 + 0x670) - 1;
      }
      temp_v1 = *(int *)(temp_v4 + 0x670);
      if (temp_v1 < 6) {
        temp_v1 = 5;
      }
      *(int *)(temp_v4 + 0x670) = temp_v1;
      if ((short)((short)*(unsigned int *)(temp_v4 + 0x660) -
                         (short)*(unsigned int *)(temp_v4 + 0x658)) >= 0x141) {
        *(unsigned char *)(temp_v4 + 8) = 0;
      }
    }
    *(short *)(temp_v4 + 0x654) = *(short *)(temp_v4 + 0x654) + 1;
    break;
  case 5:
    *piVar5 = *(int *)(temp_v4 + 0x664) + *(int *)(temp_v4 + 0x674);
    if (*(int *)(temp_v4 + 0x674) < 0) {
      temp_v1 = *(int *)(temp_v4 + 0x674) + 1;
      *(int *)(temp_v4 + 0x674) = temp_v1;
      if (temp_v1 < 0) {
        *(short *)(temp_v4 + 0x654) = *(short *)(temp_v4 + 0x654) + 1;
        break;
      }
      *(unsigned char *)(temp_v4 + 8) = 0;
    }
    if ((0 < *(int *)(temp_v4 + 0x674)) &&
       (temp_v1 = *(int *)(temp_v4 + 0x674) - 1, *(int *)(temp_v4 + 0x674) = temp_v1, temp_v1 < 1)) {
      *(unsigned char *)(temp_v4 + 8) = 0;
    }
    *(short *)(temp_v4 + 0x654) = *(short *)(temp_v4 + 0x654) + 1;
    break;
  case 6:
    *(unsigned char *)(temp_v4 + 8) = 0;
  }
  return 0;
}

} /* extern "C" */
