/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365dcc` (_code @ 0x365dcc, 0x3fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00223670(void);
int FUN_00233e10(int, unsigned int);
int FUN_002342b8(void);
int FUN_00245e38(void);
int FUN_002d88a0(void);
int FUN_002dae68(void);
int FUN_002e364c(int);
int FUN_00303460(int);
int FUN_00312a30(void);
int FUN_00313648(unsigned int);
int FUN_00324e38(int);
int FUN_00327ee8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f16ac; /* 0x5f16ac */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16cc; /* 0x5f16cc */
extern unsigned char DAT_005f185a; /* 0x5f185a */

extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00223670. */
/* Supplied declaration required: FUN_00233e10. */
/* Supplied declaration required: FUN_002342b8. */
/* Supplied declaration required: FUN_00245e38. */
extern int FUN_00294a24(void);
/* Supplied declaration required: FUN_002d88a0. */
/* Supplied declaration required: FUN_002dae68. */
/* Supplied declaration required: FUN_002e364c. */
/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00312a30. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_00324e38. */
/* Supplied declaration required: FUN_00327ee8. */
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);


void FUN_00365dcc(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
  FUN_002dae68();
  temp_v1 = DAT_00581288;
  *(float *)(DAT_00581288 + 0x1c) =
       *(float *)(DAT_00581288 + 0x1c) +
       (*(float *)(DAT_00581288 + 0x28) - *(float *)(DAT_00581288 + 0x1c)) * 0.33333334f;
  *(float *)(temp_v1 + 0x20) =
       *(float *)(temp_v1 + 0x20) + (*(float *)(temp_v1 + 0x2c) - *(float *)(temp_v1 + 0x20)) * 0.16666667f
  ;
  *(float *)(temp_v1 + 0x24) =
       *(float *)(temp_v1 + 0x24) + (*(float *)(temp_v1 + 0x30) - *(float *)(temp_v1 + 0x24)) * 0.33333334f
  ;
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 0xc) {
    if (temp_v2 < 0xc) {
      temp_v4 = 0x40a00000;
      if (temp_v2 == 2) {
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        FUN_00233e10(1,DAT_005f16ac);
        temp_v2 = FUN_004d0584();
        temp_v1 = DAT_00581288;
        if (temp_v2 != 0) {
          *(unsigned int *)(DAT_00581288 + 4) = 10;
          *(unsigned int *)(temp_v1 + 8) = 0;
        }
        else {
          temp_v1 = FUN_001656a0(5);
          if ((temp_v1 != 0) || (temp_v1 = FUN_004d0554(), temp_v1 != 0)) {
            temp_v1 = DAT_005806a4;
            *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_00581288 + 0x50);
            *(unsigned int *)(temp_v1 + 0xb0) = 0;
            FUN_00303460(0);
            temp_v1 = DAT_00581288;
            *(unsigned int *)(DAT_00581288 + 0x54) = 0;
            *(unsigned int *)(temp_v1 + 0x58) = temp_v4;
            FUN_00233e10(0,DAT_005f16ac);
            FUN_00312a30();
            temp_v1 = DAT_00581288;
            *(unsigned int *)(DAT_00581288 + 4) = 0x5a;
            *(unsigned int *)(temp_v1 + 8) = 0;
          }
        }
        FUN_002e364c(DAT_00581288 + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 < 2) {
        if (temp_v2 != 0) {
          if (temp_v2 == 1) {
            *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
            FUN_00233e10(1,DAT_005f16ac);
            temp_v1 = DAT_00581288;
            if (*(int *)(DAT_00581288 + 8) >= 3) {
              temp_v2 = *(int *)(DAT_00581288 + 4);
              *(unsigned int *)(DAT_00581288 + 0x54) = 0x1d;
              *(unsigned int *)(temp_v1 + 0x58) = 0x40000000;
              *(int *)(temp_v1 + 4) = temp_v2 + 1;
              *(unsigned int *)(temp_v1 + 8) = 0;
            }
          }
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        *(unsigned int *)(temp_v1 + 0x54) = 0;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40400000;
        *(unsigned char *)(temp_v1 + 0x6c) = 0;
        temp_v0 = DAT_005f16b8;
        temp_v4 = DAT_005f16b4;
        temp_v5 = 0.017453292f;
        *(unsigned int *)(temp_v1 + 0x28) = DAT_005f16b0;
        *(unsigned int *)(temp_v1 + 0x2c) = temp_v4;
        *(unsigned int *)(temp_v1 + 0x30) = temp_v0;
        temp_v3 = DAT_005f16cc * 0.017453292f;
        FUN_001bc124();
        temp_v6 = 40.0f;
        *(float *)(DAT_00581288 + 0x28) = *(float *)(DAT_00581288 + 0x28) + temp_v3 * 40.0f;
        temp_v5 = DAT_005f16cc * temp_v5;
        FUN_001bbf0c();
        temp_v1 = DAT_00581288;
        *(float *)(DAT_00581288 + 0x30) = *(float *)(DAT_00581288 + 0x30) + temp_v5 * temp_v6;
        *(unsigned int *)(temp_v1 + 0x50) = DAT_005f16bc;
        FUN_00303460(0xb);
        *(unsigned int *)(DAT_005806a4 + 0xb0) = 0xfffffffe;
        FUN_001681cc(0xdd);
        FUN_00233e10(1,DAT_005f16ac);
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00245e38();
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
      else if (temp_v2 != 10) {
        if ((temp_v2 != 0xb) ||
           (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 != 0x14)) {
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        FUN_002342b8();
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
      else {
        DAT_005f185a = 0;
        *(unsigned int *)(temp_v1 + 0x54) = 8;
        *(unsigned int *)(temp_v1 + 0x58) = 0x40a00000;
        FUN_00324e38(1);
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
    }
    else {
      if (temp_v2 == 0xd) {
        temp_v2 = *(int *)(temp_v1 + 8) + 1;
        *(int *)(temp_v1 + 8) = temp_v2;
        if (temp_v2 != 0x14) {
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        FUN_002d88a0();
        FUN_00223670();
        temp_v4 = 10;
        FUN_00313648(temp_v4);
        FUN_002e364c(DAT_00581288 + 0x28);
        FUN_00327ee8();
        return;
      }
      if (temp_v2 != 0x5a) {
        if (temp_v2 != 0x5b) {
          if ((temp_v2 != 0x5c) ||
             (temp_v2 = *(int *)(temp_v1 + 8) + 1, *(int *)(temp_v1 + 8) = temp_v2, temp_v2 < 4)) {
            FUN_002e364c(DAT_00581288 + 0x28);
            FUN_00327ee8();
            return;
          }
          temp_v4 = 1;
          FUN_00313648(temp_v4);
          FUN_002e364c(DAT_00581288 + 0x28);
          FUN_00327ee8();
          return;
        }
        FUN_002d88a0();
        temp_v2 = *(int *)(DAT_00581288 + 4);
        temp_v1 = DAT_00581288;
      }
    }
  }
  else {
    temp_v1 = FUN_00294a24();
    if (temp_v1 != 0) {
      FUN_002e364c(DAT_00581288 + 0x28);
      FUN_00327ee8();
      return;
    }
    FUN_00312a30();
    temp_v1 = DAT_005806a4;
    *(unsigned int *)(DAT_005806a4 + 0x18) = *(unsigned int *)(DAT_00581288 + 0x50);
    *(unsigned int *)(temp_v1 + 0xb0) = 0;
    FUN_00303460(0);
    temp_v2 = *(int *)(DAT_00581288 + 4);
    temp_v1 = DAT_00581288;
  }
  *(int *)(temp_v1 + 4) = temp_v2 + 1;
  *(unsigned int *)(temp_v1 + 8) = 0;
  FUN_002e364c(DAT_00581288 + 0x28);
  FUN_00327ee8();
  return;
}

} /* extern "C" */
