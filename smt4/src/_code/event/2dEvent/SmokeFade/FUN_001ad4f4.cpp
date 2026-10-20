/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad4f4` (_code @ 0x1ad4f8, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba12c(int);
int FUN_002bed3c(void);
int FUN_002bf288(int, unsigned int, int, int, int, int);
int FUN_002bf538(void);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0043df40; /* 0x43df40 */
extern int DAT_0043df44; /* 0x43df44 */
extern unsigned int DAT_0043df4c; /* 0x43df4c */
extern int DAT_0043df50; /* 0x43df50 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


unsigned char FUN_001ad4f4(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  
  if (*(char *)(*param_1 + 0x24) != '\0') {
    FUN_002bed3c();
    FUN_002c39a4(g_titleScene);
    temp_v3 = g_titleScene;
    temp_v0 = FUN_002c5d80(1,0);
    piVar4 = (int *)(temp_v3 + 0x124c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = DAT_0043df44 * 1000;
    FUN_002bf538();
    FUN_002bf288(2,DAT_0043df40,temp_v3,0,0,0xfa);
    temp_v3 = g_titleScene;
    temp_v0 = packNibblesAndByte(6,1,0);
    piVar4 = (int *)(temp_v3 + 0x12ac);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002ba12c(g_titleScene);
    temp_v3 = DAT_0043df50 * 1000;
    FUN_002bf538();
    FUN_002bf288(2,DAT_0043df4c,temp_v3,0,0,0xfb);
    temp_v3 = g_titleScene;
    piVar4 = (int *)(g_titleScene + 0x12ac);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002bed3c();
    FUN_002bf538();
    temp_v3 = g_titleScene;
    piVar4 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
