/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e590` (_code @ 0x33e590, 0x57c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16cc; /* 0x5f16cc */
extern unsigned char DAT_005f185a; /* 0x5f185a */

/* Supplied declaration required: FUN_0013c1ec. */
extern unsigned int FUN_00145868(void);
/* Supplied declaration required: FUN_0014af98. */
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_0022368c. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
extern int FUN_00294a24(void);
/* Supplied declaration required: FUN_00294a44. */
/* Supplied declaration required: FUN_002b8070. */
/* Supplied declaration required: FUN_002dae68. */
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
/* Supplied declaration required: FUN_0033abd4. */
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);


void FUN_0033e590(void)

{
/* irregular: 20 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  
  temp_v0 = FUN_00145868();
  if (*(int *)(DAT_00581288 + 4) < 10) {
    FUN_002dae68();
    temp_v1 = DAT_00581288;
    *(float *)(DAT_00581288 + 0x1c) =
         *(float *)(DAT_00581288 + 0x1c) +
         (*(float *)(DAT_00581288 + 0x28) - *(float *)(DAT_00581288 + 0x1c)) * 0.33333334f;
    *(float *)(temp_v1 + 0x20) =
         *(float *)(temp_v1 + 0x20) +
         (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f;
    *(float *)(temp_v1 + 0x24) =
         *(float *)(temp_v1 + 0x24) +
         (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f;
  }
  temp_v1 = DAT_00581288;
  temp_v5 = 0x40a00000;
  temp_v2 = *(int *)(DAT_00581288 + 4);
  if (temp_v2 != 0xd) {
    if (0xd >= temp_v2) {
      temp_v4 = 0.017453292f;
      if (temp_v2 != 10) {
        if (temp_v2 < 0xb) {
          if (temp_v2 != 0) {
            if (temp_v2 != 1) {
              if (temp_v2 == 2) {
                *(int *)(DAT_00581288 + 8) = *(int *)(DAT_00581288 + 8) + 1;
                FUN_00233e10(1,DAT_005f16ac);
                temp_v2 = FUN_004d0584();
                temp_v1 = DAT_00581288;
                if (temp_v2 != 0) {
                  *(unsigned int *)(DAT_00581288 + 4) = 10;
                  *(unsigned int *)(temp_v1 + 8) = 0;
                }
                else {
                  temp_v1 = FUN_001656a0(6);
                  if ((temp_v1 != 0) || (temp_v1 = FUN_004d0554(), temp_v1 != 0)) {
                    temp_v1 = DAT_005806a4;
                    *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_00581288 + 0x50);
                    *(unsigned int *)(temp_v1 + 0xb0) = 0;
                    FUN_00303460(0);
                    temp_v1 = DAT_00581288;
                    *(unsigned int *)(DAT_00581288 + 0x54) = 0;
                    *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
                    FUN_00233e10(0,DAT_005f16ac);
                    FUN_002b8070();
                    temp_v1 = DAT_00581288;
                    *(unsigned int *)(DAT_00581288 + 4) = 0x5a;
                    *(unsigned int *)(temp_v1 + 8) = 0;
                  }
                }
              }
            }
            else {
              *(int *)(DAT_00581288 + 8) = *(int *)(DAT_00581288 + 8) + 1;
              FUN_00233e10(1,DAT_005f16ac);
              temp_v1 = DAT_00581288;
              if (*(int *)(DAT_00581288 + 8) >= 3) {
                temp_v2 = *(int *)(DAT_00581288 + 4);
                *(unsigned int *)(DAT_00581288 + 0x54) = 0x1c;
                *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
                *(int *)(temp_v1 + 4) = temp_v2 + 1;
                *(unsigned int *)(temp_v1 + 8) = 0;
              }
            }
            FUN_002e364c(DAT_00581288 + 0x28);
            FUN_00327ee8();
            return;
          }
          *(unsigned int *)(DAT_00581288 + 0x54) = 0;
          *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
          *(unsigned char *)(temp_v1 + 0x6c) = 0;
          temp_v5 = DAT_005f16b8;
          temp_v0 = DAT_005f16b4;
          *(unsigned int *)(temp_v1 + 0x28) = DAT_005f16b0;
          *(unsigned int *)(temp_v1 + 0x2c) = temp_v0;
          *(unsigned int *)(temp_v1 + 0x30) = temp_v5;
          temp_v3 = DAT_005f16cc * 0.017453292f;
          FUN_001bc124();
          temp_v6 = 25.0f;
          *(float *)(DAT_00581288 + 0x28) = *(float *)(DAT_00581288 + 0x28) + temp_v3 * 25.0f;
          temp_v4 = DAT_005f16cc * temp_v4;
          FUN_001bbf0c();
          temp_v1 = DAT_00581288;
          *(float *)(DAT_00581288 + 0x30) = *(float *)(DAT_00581288 + 0x30) + temp_v4 * temp_v6;
          *(unsigned int *)(temp_v1 + 0x50) = DAT_005f16bc;
          FUN_00303460(0xd);
          *(unsigned int *)(DAT_005806a4 + 0xb0) = 1;
          FUN_001681cc(0xdc);
          FUN_00233e10(1,DAT_005f16ac);
          FUN_0022368c();
          temp_v1 = DAT_00581288;
          temp_v2 = *(int *)(temp_v1 + 4);
          *(int *)(temp_v1 + 4) = temp_v2 + 1;
          *(unsigned int *)(temp_v1 + 8) = 0;
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        if (temp_v2 != 0xb) {
          if ((temp_v2 != 0xc) || (temp_v1 = FUN_00294a24(), temp_v1 != 0)) {
            FUN_002e364c(DAT_00581288 + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_002b8070();
          temp_v1 = DAT_005806a4;
          *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_00581288 + 0x50);
          *(unsigned int *)(temp_v1 + 0xb0) = 0;
          FUN_00303460(0);
          temp_v2 = *(int *)(DAT_00581288 + 4);
          temp_v1 = DAT_00581288;
        }
        else {
          temp_v1 = *(int *)(DAT_00581288 + 8) + 1;
          *(int *)(DAT_00581288 + 8) = temp_v1;
          if (temp_v1 != 10) {
            FUN_002e364c(DAT_00581288 + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_0033abd4();
          switch(DAT_005f162e) {
          case 0:
            temp_v5 = 0x10002c4;
            FUN_003d4ed8(temp_v5);
            break;
          case 1:
            temp_v5 = 0x10002c6;
            FUN_003d4ed8(temp_v5);
            break;
          case 2:
            temp_v5 = 0x10002c8;
            FUN_003d4ed8(temp_v5);
            break;
          case 3:
            temp_v5 = 0x10002ca;
            FUN_003d4ed8(temp_v5);
            break;
          case 4:
            temp_v5 = 0x10002cc;
            FUN_003d4ed8(temp_v5);
            break;
          case 5:
            temp_v5 = 0x10002d9;
            FUN_003d4ed8(temp_v5);
            break;
          default:
          }
LAB_0033e908:
          FUN_00324e38(0xffffffff);
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_0014af98();
          FUN_0013c1ec();
          FUN_003d2150(0x10002e5);
          FUN_0013c1ec(temp_v0);
          FUN_002342b8();
          temp_v2 = *(int *)(DAT_00581288 + 4);
          temp_v1 = DAT_00581288;
        }
      }
      else {
        DAT_005f185a = 0;
        *(unsigned int *)(DAT_005806a4 + 0xc) = 1;
        *(unsigned int *)(temp_v1 + 0x54) = 0x15;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        temp_v2 = *(int *)(temp_v1 + 4);
      }
    }
    else if (temp_v2 != 100) {
      if (temp_v2 < 0x65) {
        if (temp_v2 != 0x5a) {
          if (temp_v2 != 0x5b) {
            if ((temp_v2 == 0x5c) &&
               (temp_v1 = *(int *)(DAT_00581288 + 8) + 1, *(int *)(DAT_00581288 + 8) = temp_v1,
               temp_v1 >= 4)) {
              FUN_00313648(1);
            }
            FUN_002e364c(DAT_00581288 + 0x28);
            FUN_00327ee8();
            return;
          }
          FUN_00294a44();
          temp_v2 = *(int *)(DAT_00581288 + 4);
          temp_v1 = DAT_00581288;
        }
      }
      else if (temp_v2 != 0x65) {
        if (temp_v2 != 0x66) {
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        FUN_00294a44();
        FUN_00313648(0x14);
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
      else {
        temp_v2 = FUN_002e07f4();
        temp_v1 = DAT_005806a4;
        if (temp_v2 == 0) {
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_00581288 + 0x50);
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
        FUN_00303460(0);
        temp_v1 = DAT_00581288;
        *(unsigned int *)(DAT_00581288 + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = temp_v5;
        FUN_00233e10(0,DAT_005f16ac);
        FUN_002b8070();
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
    }
    else {
      FUN_001f4908(0,10,0xff);
      temp_v2 = *(int *)(DAT_00581288 + 4);
      temp_v1 = DAT_00581288;
    }
  }
  else {
    FUN_00294a44();
    FUN_00313648(0x14);
    temp_v2 = *(int *)(DAT_00581288 + 4);
    temp_v1 = DAT_00581288;
  }
  *(int *)(temp_v1 + 4) = temp_v2 + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_002e364c(DAT_00581288 + 0x28);
  FUN_00327ee8();
  return;
}
