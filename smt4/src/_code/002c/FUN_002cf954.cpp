/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf954` (_code @ 0x2cf954, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dbc5c(unsigned int);
int FUN_001eb7f8(...);
int jobIsValid(...);
int FUN_002c18e4(int);
int FUN_002c198c(int);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_001dbc5c. */
/* Supplied declaration required: FUN_001eb7f8. */
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: jobIsValid. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */


unsigned int FUN_002cf954(void)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  float in_s0;
  float temp_v7;
  
  temp_v1 = jobGetWork();
  temp_v5 = 0;
  do {
    temp_v6 = temp_v1 + temp_v5 * 4;
    if ((*(int *)(temp_v6 + 0x608) != 0) && (temp_v2 = jobIsValid(), temp_v2 == 0)) {
      *(unsigned int *)(temp_v6 + 0x608) = 0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 10);
  do {
    temp_v0 = 0;
    temp_v5 = 0;
    do {
      temp_v6 = temp_v1 + temp_v5 * 4;
      if (*(int *)(temp_v6 + 0x608) != 0) {
        if (*(int *)(temp_v6 + 0x60c) != 0) {
          FUN_001eb7f8();
          temp_v7 = in_s0;
          FUN_001eb7f8(*(unsigned int *)(temp_v6 + 0x60c));
          if (in_s0 < temp_v7) {
            temp_v0 = 1;
            temp_v3 = *(unsigned int *)(temp_v6 + 0x608);
            *(unsigned int *)(temp_v6 + 0x608) = *(unsigned int *)(temp_v6 + 0x60c);
            *(unsigned int *)(temp_v6 + 0x60c) = temp_v3;
          }
        }
      }
      else if (*(int *)(temp_v6 + 0x60c) != 0) {
        *(int *)(temp_v6 + 0x608) = *(int *)(temp_v6 + 0x60c);
        temp_v0 = 1;
        *(unsigned int *)(temp_v6 + 0x60c) = 0;
      }
      temp_v6 = g_titleScene;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 9);
  } while (temp_v0);
  temp_v5 = FUN_002865c0(6);
  piVar7 = (int *)(temp_v6 + 0x126c);
  temp_v2 = *piVar7;
  temp_v4 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = temp_v5;
  if (*(char *)(temp_v6 + 0x1284) != '\0' || temp_v4 != temp_v5) {
    (**(romwright_code **)(temp_v6 + 0x1288))();
    *(unsigned char *)(temp_v6 + 0x1284) = 0;
  }
  if (*(char *)(temp_v1 + 0x5f2) != '\0') {
    temp_v5 = 0;
    do {
      temp_v2 = temp_v1 + temp_v5 * 4;
      temp_v6 = jobIsValid(*(unsigned int *)(temp_v2 + 0x608));
      if (temp_v6 != 0) {
        FUN_001dbc5c(*(unsigned int *)(temp_v2 + 0x608));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 10);
  }
  else {
    temp_v5 = jobIsValid(*(unsigned int *)(temp_v1 + 0x630));
    if (temp_v5 != 0) {
      FUN_001dbc5c(*(unsigned int *)(temp_v1 + 0x630));
    }
  }
  temp_v1 = g_titleScene;
  piVar7 = (int *)(g_titleScene + 0x126c);
  temp_v5 = *piVar7;
  temp_v6 = piVar7[temp_v5 + 2];
  *piVar7 = temp_v5 - 1;
  if (*(char *)(temp_v1 + 0x1284) != '\0' || temp_v6 != piVar7[temp_v5 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1288))();
    *(unsigned char *)(temp_v1 + 0x1284) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return 0;
}

} /* extern "C" */
