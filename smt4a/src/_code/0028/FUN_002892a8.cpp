/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002892a8` (_code @ 0x2892a8, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_002892a8(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  temp_v0 = FUN_001834a4(0x11,param_1 + 0x57);
  if (param_5 != 0) {
    efctSetSpeed();
    temp_v2 = g_renderCtx;
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar5 = (int *)(temp_v2 + 0x12b8);
    temp_v3 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    FUN_001835b4(2,0x11,0x4f,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,
                 param_4);
    temp_v0 = g_renderCtx;
    temp_v2 = packNibblesAndByte(6,7,0);
    piVar5 = (int *)(temp_v0 + 0x12b8);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v2;
    if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v1 != temp_v2) {
      (**(romwright_code **)(temp_v0 + 0x12d4))();
      *(unsigned char *)(temp_v0 + 0x12d0) = 0;
    }
    efctSetSpeed();
    return;
  }
  efctSetSpeed();
  FUN_001835b4(2,0x11,0x4e,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,param_4)
  ;
  efctSetSpeed();
  return;
}

} /* extern "C" */
