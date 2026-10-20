/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002248b8` (_code @ 0x2248b8, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028186c(unsigned int);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0028186c. */
extern int FUN_002865c0(unsigned int);
extern int jobGetWork(void);
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002248b8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v1 = jobGetWork();
  temp_v0 = g_titleScene;
  if (*(char *)(temp_v1 + 0x10) != '\0') {
    temp_v2 = FUN_002865c0(6);
    piVar6 = (int *)(temp_v0 + 0x126c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x1288))();
      *(unsigned char *)(temp_v0 + 0x1284) = 0;
    }
    temp_v0 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v0 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v0 = g_titleScene;
    temp_v2 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v0 + 0x12ac);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v2;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    FUN_0028186c(*(unsigned int *)(temp_v1 + 0xc));
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x12ac);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x126c);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1288))();
      *(unsigned char *)(temp_v0 + 0x1284) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
