/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021f354` (_code @ 0x21f358, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(int, unsigned int, char *);

typedef int romwright_code(...);
extern char s_Mikado_00432cfe[7]; /* 0x432cfe */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002be5a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_0021f354(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v1 = *(int *)(*param_1 + 0x10);
  if (temp_v1 - 1U < 0x62) {
    if (temp_v1 == 1) {
      FUN_002be5a4(3,0xffffffff,s_Mikado_00432cfe + (unsigned int)*(unsigned char *)(*param_1 + 9) * 0x24);
    }
    temp_v1 = g_titleScene;
    temp_v0 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v1 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v3 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar5;
    temp_v2 = piVar5[temp_v0 + 2];
    *piVar5 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
