/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa1b0` (_code @ 0x2fa1b0, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int gfxSelectStatusIconPair(unsigned int, unsigned int [2], unsigned int [6], int);

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern int g_renderCtx; /* 0x59dbb4 */

extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: gfxSelectStatusIconPair. */


void FUN_002fa1b0(int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5 [2];
  unsigned int temp_v6 [6];
  
  temp_v5[0] = 0;
  temp_v6[0] = 0;
  gfxSelectStatusIconPair(param_2,temp_v5,temp_v6,param_5);
  efctSetSpeed();
  if (param_5 != 0) {
    temp_v4 = 0;
    temp_v1 = 0;
    if (*(int *)(param_1 + 0x387c) == 1) {
      temp_v4 = vec2GetXInt(param_1 + 0xac);
      temp_v1 = vec2GetYInt(param_1 + 0xac);
    }
    temp_v4 = temp_v4 + param_3;
    temp_v1 = param_4 + temp_v1;
    FUN_001835b4(2,0xd,0xaa,temp_v4,temp_v1,0x34);
    FUN_001835b4(2,0xd,0xab,temp_v4,temp_v1,0x34);
    FUN_001835b4(2,0xd,0xde,temp_v4,temp_v1,0x35);
    if (*(int *)(param_1 + 0x387c) == 1) {
      efctSetSpeed();
      temp_v0 = g_renderCtx;
      temp_v2 = packNibblesAndByte(6,1,0);
      piVar5 = (int *)(temp_v0 + 0x12b8);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v0 + 0x12d4))();
        *(unsigned char *)(temp_v0 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0xd,0xde,temp_v4,temp_v1,0x36);
      temp_v0 = g_renderCtx;
      temp_v2 = packNibblesAndByte(6,7,0);
      piVar5 = (int *)(temp_v0 + 0x12b8);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v0 + 0x12d4))();
        *(unsigned char *)(temp_v0 + 0x12d0) = 0;
      }
      efctSetSpeed();
    }
    FUN_001835b4(2,0xd,temp_v6[0],param_3,param_4,0x37);
    FUN_001835b4(2,0xd,temp_v5[0],temp_v4,temp_v1,0x38);
  }
  else {
    FUN_001835b4(2,0xd,0xdd,param_3,param_4,0x2c);
    FUN_001835b4(2,0xd,temp_v6[0],param_3,param_4,0x2d);
    FUN_001835b4(2,0xd,temp_v5[0],param_3,param_4,0x2e);
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
