/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019fe8c` (_code @ 0x19fe8c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


void FUN_0019fe8c(int param_1,float *param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  unsigned int temp_v5 [4];
  
  if (param_1 == 0 || param_2 == (float *)0x0) {
    return;
  }
  if (*param_2 == 0.0f) {
    return;
  }
  FUN_002c3ba8(DAT_0044ea00);
  FUN_002bef14();
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5f7c(1,0);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002bf710();
  temp_v4 = 0.35f;
  temp_v5[0] = 0;
  temp_v5[1] = 6;
  temp_v5[2] = 1;
  temp_v5[3] = 7;
  FUN_002ba46c(DAT_0044ea00);
  FUN_002bf558(2,0x39,temp_v5[(unsigned int)*(unsigned char *)(param_1 + 0x37) * 2],(int)temp_v4,0,0xb);
  temp_v4 = 0.33f;
  FUN_002ba46c(DAT_0044ea00);
  FUN_002bf460(2,0x39,temp_v5[(unsigned int)*(unsigned char *)(param_1 + 0x37) * 2 + 1],(int)temp_v4,0,0xc);
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return;
}
