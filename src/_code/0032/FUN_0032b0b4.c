/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032b0b4` (_code @ 0x32b0b4, 0x2e8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_0043dd90; /* 0x43dd90 */
extern int DAT_0044ea00; /* 0x44ea00 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00288424. */
/* Supplied declaration required: FUN_002885d4. */
/* Supplied declaration required: FUN_002a0de8. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5218(void);
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033e394. */


unsigned int FUN_0032b0b4(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v3 = DAT_0044ea00;
  temp_v1 = DAT_0043dd90;
  temp_v2 = FUN_002c5f7c(1,0);
  piVar7 = (int *)(temp_v3 + 0x124c);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v2;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v2) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v0 = *(short *)(temp_v1 + 0x1e);
  temp_v3 = 0;
  if (*(char *)(temp_v1 + 0x20) != '\0') {
    if (temp_v0 == 2) {
      temp_v3 = 800;
    }
    else {
      temp_v2 = 0x375;
      if (temp_v0 == 3 || temp_v0 == 4) {
        temp_v3 = temp_v2;
      }
    }
  }
  else if (temp_v0 == 2) {
    temp_v3 = 0x28e;
  }
  else {
    temp_v2 = 0x311;
    if (temp_v0 == 3 || temp_v0 == 4) {
      temp_v3 = temp_v2;
    }
  }
  temp_v2 = *(int *)(temp_v1 + 4);
  if (temp_v2 != 3) {
    if ((temp_v2 != 4 && temp_v2 != 5) && ((temp_v2 != 6 || (*(int *)(temp_v1 + 8) >= 0x14))))
    goto LAB_0032b334;
  }
  else if (*(int *)(temp_v1 + 8) <= temp_v3) goto LAB_0032b334;
  FUN_002a0de8();
  temp_v3 = FUN_002c5218();
  temp_v10 = 1.0f;
  temp_v11 = 0.0f;
  temp_v12 = 0.0f;
  temp_v13 = 0.0f;
  temp_v8 = *(float *)(temp_v3 + 0x10) - *(float *)(temp_v3 + 4);
  temp_v6 = *(float *)(temp_v3 + 0x18) - *(float *)(temp_v3 + 0xc);
  temp_v9 = 1.0f / romwright_sqrt_4(temp_v8 * temp_v8 + 0.0f + temp_v6 * temp_v6);
  temp_v8 = temp_v8 * temp_v9;
  temp_v6 = temp_v6 * temp_v9;
  temp_v9 = temp_v9 * 0.0f;
  temp_v7 = temp_v8 * 0.0f + temp_v9 * 0.0f + temp_v6 * -1.0f;
  if ((temp_v7 != 1.0f) && (temp_v7 != -1.0f)) {
    FUN_002885d4();
    in_fpscr = in_fpscr & 0xfffffff;
  }
  temp_v11 = *(float *)(temp_v3 + 0x10) + temp_v8 * 20.0f;
  temp_v12 = temp_v9 * 20.0f + -7.5f;
  temp_v13 = *(float *)(temp_v3 + 0x18) + temp_v6 * 20.0f;
  FUN_00288424();
  if (*(int *)(temp_v1 + 4) == 6) {
    temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = temp_v10 - temp_v6 * 0.05f;
  }
  temp_v3 = VectorFloatToUnsigned(temp_v10 * 255.0f,3);
  FUN_0033e394(*(unsigned int *)(temp_v1 + 0x80),0,*(unsigned int *)(temp_v1 + 0x7c),&temp_v11,temp_v3 - 0x100
               ,0);
LAB_0032b334:
  temp_v1 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v3 = *piVar7;
  temp_v2 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return 0;
}
