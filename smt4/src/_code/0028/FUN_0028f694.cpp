/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f694` (_code @ 0x28f694, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a17c(int, int, int, int, int);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int efctSetSpeed(void);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int g_camp; /* 0x43da90 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_0029a17c. */
extern int ifTouchGetSelectionModeForRegion(unsigned int);
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: efctSetSpeed. */


void FUN_0028f694(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = g_camp;
  efctSetSpeed();
  FUN_002bf380(2,0x1d,6,param_1,param_2,0x79);
  efctSetSpeed();
  FUN_002bf288(2,0x1d,0x429,param_1,param_2,0x7e);
  temp_v1 = ifTouchGetSelectionModeForRegion(param_3);
  if (!((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6)) {
    FUN_002bf288(2,0x1d,0x42a,param_1,param_2,0x83);
  }
  else {
    FUN_002bf288(2,0x1d,0x42b,param_1,param_2,0x83);
  }
  temp_v1 = FUN_002bf4f8(0x1d,0x42a);
  temp_v2 = vec2GetXInt(temp_v0 + 0x760);
  temp_v3 = vec2GetYInt(temp_v0 + 0x760);
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x130c);
  temp_v4 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = 3;
  if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v4 != 3) {
    (**(romwright_code **)(temp_v0 + 0x1328))();
    *(unsigned char *)(temp_v0 + 0x1324) = 0;
  }
  FUN_0029a17c(*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
               (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],1);
  FUN_002bf288(2,0x1d,0x42c,param_1 + temp_v2,param_2 + temp_v3,0x88);
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x130c);
  temp_v1 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = 0;
  if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v1 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1328))();
    *(unsigned char *)(temp_v0 + 0x1324) = 0;
  }
  return;
}

} /* extern "C" */
