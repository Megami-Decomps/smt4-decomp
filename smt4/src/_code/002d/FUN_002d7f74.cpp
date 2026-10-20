/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7f74` (_code @ 0x2d7f74, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effMenuCallHandler(int);
int requestDispatch(void);
int FUN_0028186c(void);
int FUN_002880a8(int);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c4f8c(int, unsigned int);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */
extern signed char DAT_0044ea80; /* 0x44ea80 */
extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern int DAT_0044eaac; /* 0x44eaac */

/* Supplied declaration required: effMenuCallHandler. */
/* Supplied declaration required: requestDispatch. */
/* Supplied declaration required: FUN_0028186c. */
/* Supplied declaration required: FUN_002880a8. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c4f8c. */
extern unsigned int FUN_002c501c(void);
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_002d7f74(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x11ec);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1204) != '\0' || temp_v3 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1208))();
    *(unsigned char *)(temp_v0 + 0x1204) = 0;
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
  temp_v3 = *(int *)(g_titleScene + 0x12ac);
  piVar6 = (int *)(g_titleScene + 0x12ac);
  temp_v2 = *(int *)(g_titleScene + temp_v3 * 4 + 0x12b4);
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  if (DAT_0044ea80 != '\0') {
    FUN_002880a8(g_titleScene);
  }
  else {
    temp_v1 = FUN_002c501c();
    FUN_002c4f8c(g_titleScene,temp_v1);
  }
  effMenuCallHandler(1);
  if (DAT_0044eaa0 != 0) {
    requestDispatch();
  }
  if (DAT_0044ea90 != 0) {
    FUN_0028186c();
  }
  if (DAT_0044eaac != 0) {
    requestDispatch();
  }
  FUN_002c18e4(g_titleScene);
  FUN_002c198c(g_titleScene);
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x11ec);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1204) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1208))();
    *(unsigned char *)(temp_v0 + 0x1204) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x12ac);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  return;
}

} /* extern "C" */
