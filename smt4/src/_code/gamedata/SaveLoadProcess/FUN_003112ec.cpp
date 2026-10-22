/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003112ec` (_code @ 0x3112ec, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int renderCtxCalculateStereoParallax(int);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_byteSettings; /* 0x43e2f0 */
extern int g_titleScene; /* 0x44ea00 */

extern int saveLoadGetThreadStatus(void);
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_003112ec(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  
  temp_v0 = saveLoadGetThreadStatus();
  if (temp_v0 != 0) {
    FUN_002c39a4(g_titleScene);
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
    efctSetSpeed();
    FUN_002bed3c();
    temp_v4 = 0.27f;
    renderCtxCalculateStereoParallax(g_titleScene);
    FUN_002bf288(2,0xe,(*(unsigned short *)((unsigned char *)&g_byteSettings + 0x6)) + 0x185,(int)temp_v4,0,6);
    temp_v0 = g_titleScene;
    piVar5 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    efctSetSpeed();
    FUN_002bed3c();
  }
  return 0;
}

} /* extern "C" */
