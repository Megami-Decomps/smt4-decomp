/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed134` (_code @ 0x1ed138, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001ed134(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = *(int *)(param_1 + 4);
  if (((temp_v0 != 0) && (*(int *)(temp_v0 + 8) != 0)) && (0.0f < *(float *)(temp_v0 + 0x10))) {
    FUN_002bf538();
    temp_v0 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v0 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bf288(2,0xe,0x10c,0,0,0xfb);
    temp_v0 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bf538();
  }
  return 0;
}

} /* extern "C" */
