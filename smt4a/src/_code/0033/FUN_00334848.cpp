/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334848` (_code @ 0x334848, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobIsValid(...);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_00281428(unsigned int);
int FUN_002a2194(...);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: jobIsValid. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00281428. */
/* Supplied declaration required: FUN_002a2194. */
extern int FUN_00387580(unsigned int);


unsigned int FUN_00334848(void)

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
    if ((*(int *)(temp_v6 + 0x60c) != 0) && (temp_v2 = jobIsValid(), temp_v2 == 0)) {
      *(unsigned int *)(temp_v6 + 0x60c) = 0;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 10);
  do {
    temp_v0 = 0;
    temp_v5 = 0;
    do {
      temp_v6 = temp_v1 + temp_v5 * 4;
      if (*(int *)(temp_v6 + 0x60c) != 0) {
        if (*(int *)(temp_v6 + 0x610) != 0) {
          FUN_002a2194();
          temp_v7 = in_s0;
          FUN_002a2194(*(unsigned int *)(temp_v6 + 0x610));
          if (in_s0 < temp_v7) {
            temp_v0 = 1;
            temp_v3 = *(unsigned int *)(temp_v6 + 0x60c);
            *(unsigned int *)(temp_v6 + 0x60c) = *(unsigned int *)(temp_v6 + 0x610);
            *(unsigned int *)(temp_v6 + 0x610) = temp_v3;
          }
        }
      }
      else if (*(int *)(temp_v6 + 0x610) != 0) {
        *(int *)(temp_v6 + 0x60c) = *(int *)(temp_v6 + 0x610);
        temp_v0 = 1;
        *(unsigned int *)(temp_v6 + 0x610) = 0;
      }
      temp_v6 = g_renderCtx;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 9);
  } while (temp_v0);
  temp_v5 = FUN_00387580(6);
  piVar7 = (int *)(temp_v6 + 0x1278);
  temp_v2 = *piVar7;
  temp_v4 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 + 1;
  piVar7[temp_v2 + 3] = temp_v5;
  if (*(char *)(temp_v6 + 0x1290) != '\0' || temp_v4 != temp_v5) {
    (**(romwright_code **)(temp_v6 + 0x1294))();
    *(unsigned char *)(temp_v6 + 0x1290) = 0;
  }
  if (*(char *)(temp_v1 + 0x5f6) != '\0') {
    temp_v5 = 0;
    do {
      temp_v2 = temp_v1 + temp_v5 * 4;
      temp_v6 = jobIsValid(*(unsigned int *)(temp_v2 + 0x60c));
      if (temp_v6 != 0) {
        FUN_00281428(*(unsigned int *)(temp_v2 + 0x60c));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 10);
  }
  else {
    temp_v5 = jobIsValid(*(unsigned int *)(temp_v1 + 0x634));
    if (temp_v5 != 0) {
      FUN_00281428(*(unsigned int *)(temp_v1 + 0x634));
    }
  }
  temp_v1 = g_renderCtx;
  piVar7 = (int *)(g_renderCtx + 0x1278);
  temp_v5 = *piVar7;
  temp_v6 = piVar7[temp_v5 + 2];
  *piVar7 = temp_v5 - 1;
  if (*(char *)(temp_v1 + 0x1290) != '\0' || temp_v6 != piVar7[temp_v5 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1294))();
    *(unsigned char *)(temp_v1 + 0x1290) = 0;
  }
  FUN_0016c560(g_renderCtx);
  FUN_0016c410(g_renderCtx);
  return 0;
}

} /* extern "C" */
