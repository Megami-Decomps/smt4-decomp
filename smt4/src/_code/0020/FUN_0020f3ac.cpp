/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f3ac` (_code @ 0x20f3ac, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025b750(void);
int FUN_002c0944(unsigned int);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_0020f3ac(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  temp_v0 = g_titleScene;
  temp_v4 = *(unsigned int *)(*param_1 + 0x4a10);
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
  FUN_002c39a4(g_titleScene);
  FUN_002c1b64(g_titleScene,0);
  FUN_002c0944(temp_v4);
  FUN_0025b750();
  temp_v0 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  return 0;
}

} /* extern "C" */
