/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f42d4` (_code @ 0x1f42d4, 0x288 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00285584(unsigned int, int, int);
int FUN_002c18e4(int);
int FUN_002c198c(int);

typedef int romwright_code(...);
extern int g_eventTex; /* 0x43ded0 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_00285584. */
extern int FUN_002865c0(unsigned int);
extern int FUN_002b722c(unsigned int);
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001f42d4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = jobGetWork();
  temp_v4 = g_titleScene;
  temp_v1 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v4 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = g_titleScene;
  temp_v1 = FUN_002865c0(6);
  piVar5 = (int *)(temp_v4 + 0x126c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1284) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1288))();
    *(unsigned char *)(temp_v4 + 0x1284) = 0;
  }
  temp_v4 = g_titleScene;
  temp_v1 = FUN_002c5da8(6,7,0);
  piVar5 = (int *)(temp_v4 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v4 = 0;
  if (temp_v4 < *(int *)(temp_v0 + 0x2c)) {
    do {
      temp_v1 = temp_v0 + temp_v4 * 4;
      if (*(char *)(g_eventTex + 0x5c) != '\0') {
        temp_v2 = jobIsValid(*(unsigned int *)(temp_v1 + 4));
        if (temp_v2 != 0) {
          FUN_00285584(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x60),
                       (int)*(float *)(temp_v0 + 100));
        }
      }
      else {
        temp_v2 = jobIsValid(*(unsigned int *)(temp_v1 + 4));
        if ((temp_v2 != 0) && (temp_v2 = FUN_002b722c(*(unsigned int *)(temp_v1 + 4)), temp_v2 == 4)) {
          FUN_00285584(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x60),
                       (int)*(float *)(temp_v0 + 100));
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v0 + 0x2c));
  }
  temp_v4 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x12ac);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v4 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x124c);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x126c);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1284) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1288))();
    *(unsigned char *)(temp_v4 + 0x1284) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
