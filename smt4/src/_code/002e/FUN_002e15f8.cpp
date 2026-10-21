/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e15f8` (_code @ 0x2e15f8, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, unsigned int, int);
int FUN_002bf380(int, int, int, int, unsigned int, int);
int efctSetSpeed(void);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_002e15f8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_002bed3c();
  FUN_002bf380(2,0x39,0xb,param_2,param_3,0x74);
  efctSetSpeed();
  temp_v0 = g_titleScene;
  temp_v1 = packNibblesAndByte(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002bf380(2,0x39,0xc,param_2,param_3,0x75);
  temp_v0 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))(piVar5[temp_v1 + 1]);
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002bed3c();
  efctSetSpeed();
  FUN_002bf288(2,0x39,0x92,*(int *)(param_1 + 4) + param_2,param_3,0x76);
  return;
}

} /* extern "C" */
