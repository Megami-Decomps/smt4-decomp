/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e981c` (_code @ 0x1e981c, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_002c0944(int, int, int);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int g_jyoucyu; /* 0x446d78 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001e981c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = g_jyoucyu;
  if (*(int *)(g_jyoucyu + 8) < 100) {
    FUN_002c39a4(g_titleScene);
    temp_v2 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v2 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    efctSetSpeed();
    FUN_002bed3c();
    FUN_002c1b64(g_titleScene,0);
    FUN_002c0944(0xff,0xff,0xff);
    if (*(int *)(temp_v0 + 8) < 100) {
      FUN_002bf288(2,0xe,0x18a,0,0,0xb);
    }
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v2 = *piVar6;
    temp_v1 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    efctSetSpeed();
  }
  return 0;
}

} /* extern "C" */
