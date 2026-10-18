/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e0138` (_code @ 0x1e0138, 0x208 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a7898. */
extern int FUN_00286834(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0033e394. */


unsigned int FUN_001e0138(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_002c0ac8();
  if ((*(int *)(temp_v0 + 4) == 0) && (*(char *)(temp_v0 + 0x16) != '\0')) {
    if (*(char *)(temp_v0 + 0x15) == '\0') {
      FUN_001a7898(temp_v0);
      *(unsigned char *)(temp_v0 + 0x15) = 1;
    }
    temp_v5 = DAT_0044ea00;
    temp_v1 = FUN_002c5f7c(5,1);
    piVar5 = (int *)(temp_v5 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v5 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v5 + 0x1268))();
      *(unsigned char *)(temp_v5 + 0x1264) = 0;
    }
    temp_v5 = DAT_0044ea00;
    temp_v1 = FUN_00286834(6);
    piVar5 = (int *)(temp_v5 + 0x126c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v5 + 0x1284) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v5 + 0x1288))();
      *(unsigned char *)(temp_v5 + 0x1284) = 0;
    }
    temp_v4 = *(float *)(temp_v0 + 8);
    temp_v5 = VectorFloatToUnsigned(temp_v4 * 255.0f,3);
    temp_v1 = VectorFloatToUnsigned(temp_v4 * 255.0f,3);
    temp_v2 = VectorFloatToUnsigned(temp_v4 * 255.0f,3);
    temp_v3 = VectorFloatToUnsigned(*(float *)(temp_v0 + 0xc) * 255.0f,3);
    FUN_0033e394(*(unsigned int *)(temp_v0 + 0x34),0,(int)*(float *)(temp_v0 + 0x40),temp_v0 + 0x18,
                 temp_v3 + (temp_v2 + (temp_v1 + temp_v5 * 0x100) * 0x100) * 0x100,0);
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x126c);
    temp_v5 = *piVar5;
    temp_v1 = piVar5[temp_v5 + 2];
    *piVar5 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v1 != piVar5[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1288))();
      *(unsigned char *)(temp_v0 + 0x1284) = 0;
    }
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v5 = *piVar5;
    temp_v1 = piVar5[temp_v5 + 2];
    *piVar5 = temp_v5 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar5[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c1b64(DAT_0044ea00);
    FUN_002c1abc(DAT_0044ea00);
  }
  return 0;
}
