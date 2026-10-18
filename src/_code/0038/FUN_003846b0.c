/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003846b0` (_code @ 0x3846b0, 0x238 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c0b1c. */
extern unsigned int FUN_002c1784(unsigned int);
extern unsigned int FUN_002c17ac(unsigned int);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c1d3c. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0038389c. */


void FUN_003846b0(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  
  if ((int)param_1[1] >= 3) {
    FUN_002c3ba8(DAT_0044ea00);
    FUN_002bef14();
    FUN_002bf710();
    temp_v0 = DAT_0044ea00;
    temp_v1 = FUN_002c5f7c(1,0);
    piVar6 = (int *)(temp_v0 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v0 = DAT_0044ea00;
    if ((*param_1 & 0x80) != 0) {
      temp_v5 = VectorFloatToUnsigned((float)param_1[0x82] * 192.0f,3);
      temp_v1 = FUN_002c5f7c(1,0);
      piVar6 = (int *)(temp_v0 + 0x124c);
      temp_v3 = *piVar6;
      temp_v4 = piVar6[temp_v3 + 2];
      *piVar6 = temp_v3 + 1;
      piVar6[temp_v3 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
      FUN_002c1d3c(DAT_0044ea00,0);
      temp_v2 = FUN_002c17ac(*(unsigned int *)(DAT_0044ea00 + 0x528));
      VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = FUN_002c1784(*(unsigned int *)(DAT_0044ea00 + 0x528));
      VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002c0b1c(temp_v5 & 0xff);
      temp_v0 = DAT_0044ea00;
      piVar6 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar6;
      temp_v3 = piVar6[temp_v1 + 2];
      *piVar6 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1268))(piVar6[temp_v1 + 1]);
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
    }
    FUN_0038389c(param_1);
    temp_v0 = DAT_0044ea00;
    piVar6 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bef14();
    FUN_002bf710();
    FUN_002c1b64(DAT_0044ea00);
    FUN_002c1abc(DAT_0044ea00);
    return;
  }
  return;
}
