/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aaabc` (_code @ 0x4aaabc, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(char *, int);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_001689e8(int, int, int, int, int);
int FUN_001834a4(int, int);
int FUN_00185e84(unsigned int, int, int, int, int, int);
int FUN_001879d0(unsigned int);
int FUN_004abc68(int, int, int, int);
int VectorSignedToFloat(...);

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern float DAT_00630730; /* 0x630730 */
extern float DAT_00630740; /* 0x630740 */
extern float DAT_00630750; /* 0x630750 */
extern float DAT_00630760; /* 0x630760 */
extern unsigned char DAT_00630775; /* 0x630775 */
extern float DAT_0063077c; /* 0x63077c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern char *FUN_0014bd84(unsigned int);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
extern int vec2GetXInt(void);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001689e8. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_004abc68. */


void FUN_004aaabc(int param_1,int param_2,short *param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  if (param_3 == (short *)0x0) {
    return;
  }
  if (*param_3 != 0 && 0 < param_4) {
    temp_v6 = 1.0f;
    temp_v1 = FUN_001834a4(0xc,0x82);
    temp_v0 = *(unsigned short *)(temp_v1 + 6);
    temp_v1 = FUN_001834a4(0xc,param_4 + 0x87);
    temp_v5 = 0.26f;
    FUN_001879d0(g_renderCtx);
    temp_v2 = param_1 + param_2 * 0x8c + 0x128ac;
    temp_v3 = vec2GetXInt();
    temp_v2 = vec2GetYInt(temp_v2);
    temp_v3 = (int)*(short *)(temp_v1 + 8) + temp_v3 + (int)temp_v5;
    temp_v2 = (temp_v0 & 0xffff7fff) * param_2 + (int)*(short *)(temp_v1 + 10) + temp_v2;
    FUN_004abc68(param_1,temp_v3,temp_v2,(int)*param_3);
    if (*(int *)(param_3 + 2) != 0) {
      temp_v4 = (unsigned int)(short)*(int *)(param_3 + 2);
      efctSetSpeed();
      temp_v1 = FUN_001834a4(0xc,0x86);
      FUN_00185e84(temp_v4,*(short *)(temp_v1 + 8) + temp_v3,*(short *)(temp_v1 + 10) + temp_v2,0x1a,0,0);
      if (temp_v4 >= 0xfffffffe) {
        pcVar6 = "悂钂钂膂莂讂";
      }
      else if (temp_v4 == 0xffffff9d) {
        pcVar6 = (char *)0x52b4c4;
      }
      else {
        pcVar6 = (char *)FUN_0014bd84(temp_v4);
      }
    }
    else {
      pcVar6 = *(char **)(param_3 + 4);
      if (pcVar6 == (char *)0x0) {
        return;
      }
      efctSetSpeed();
      temp_v1 = FUN_001834a4(0xc,0x86);
      FUN_001689e8((int)(short)(int)pcVar6,*(short *)(temp_v1 + 8) + temp_v3,*(short *)(temp_v1 + 10) + temp_v2,
                   0x1a,0);
      FUN_0015f858(pcVar6,0);
    }
    temp_v1 = FUN_001834a4(0xc,0x87);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xff,pcVar6);
    if ((int)temp_v6 >= 0x3f800001) {
      temp_v6 = 1.0f;
    }
    if (temp_v6 < 0.0f) {
      temp_v6 = 0.0f;
    }
    DAT_0063077c = temp_v6;
    DAT_00630730 = temp_v6;
    DAT_00630740 = temp_v6;
    DAT_00630750 = temp_v6;
    DAT_00630760 = temp_v6;
    DAT_00630775 = 1;
    return;
  }
  return;
}

} /* extern "C" */
