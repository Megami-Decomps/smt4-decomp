/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba63c` (_code @ 0x3ba63c, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c39a4(int);
int FUN_003bb77c(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003bb77c. */


void FUN_003ba63c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x28) == 0x11) {
    return;
  }
  FUN_002c39a4(g_titleScene);
  FUN_002bed3c();
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
  if (*(int *)(param_1 + 0x28) >= 3) {
    FUN_003bb77c(param_1 + 0x9c);
  }
  temp_v0 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c198c(g_titleScene);
  FUN_002c18e4(g_titleScene);
  return;
}

} /* extern "C" */
