/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2690` (_code @ 0x3c2690, 0x6c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(...);
int pairSetHalves(...);
int jobGetScalarValue(void);
int fadeObjectResetIfActive(...);

typedef int romwright_code(...);
/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: fadeObjectResetIfActive. */


void FUN_003c2690(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  char *pcVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  unsigned int temp_v7;
  
  temp_v6 = 0;
  do {
    temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfa2);
    if (temp_v6 >= 6) {
      temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfbd);
    }
    FUN_001835b4(2,0xd,0xfa1,*(short *)(temp_v2 + 8) + param_2,
                 (*(short *)(temp_v2 + 10) + param_3) - param_4,0x42);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  pcVar4 = (char *)(param_1 + 0x4ba0);
  if (*pcVar4 != '\x04') {
    temp_v6 = 0;
    temp_v7 = (unsigned int)*(unsigned short *)(param_1 + 0x4b9c);
    if (temp_v7 != 0) {
      do {
        temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfb0);
        if (temp_v6 >= 6) {
          temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfbf);
        }
        if ((temp_v6 == temp_v7 - 1) && (*(char *)(param_1 + 0x1b76) == '\0')) {
          efctSetSpeed();
        }
        FUN_001835b4(2,0xd,0xfaf,*(short *)(temp_v2 + 8) + param_2,
                     (*(short *)(temp_v2 + 10) + param_3) - param_4,0x42);
        efctSetSpeed();
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < (int)temp_v7);
    }
    if (*pcVar4 == '\x02' || *pcVar4 == '\x03') {
      temp_v6 = param_1 + 0x1c90;
      efctSetSpeed();
      temp_v2 = 0;
      do {
        temp_v3 = FUN_001834a4(0xd,temp_v2 + 0xfb7);
        if (temp_v2 >= 6) {
          temp_v3 = FUN_001834a4(0xd,temp_v2 + 0xfc1);
        }
        FUN_001835b4(2,0xd,0xfb6,*(short *)(temp_v3 + 8) + param_2,
                     (*(short *)(temp_v3 + 10) + param_3) - param_4,0x42);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
      efctSetSpeed();
      temp_v2 = param_1 + 0x1d1c;
      temp_v0 = (short)param_3;
      temp_v1 = (short)param_2;
      if (*pcVar4 != '\x02') {
        if (*pcVar4 == '\x03') {
          if (*(int *)(param_1 + 0x387c) != 0x27) {
            temp_v3 = FUN_001834a4(0xd,0xfc1);
            temp_v4 = FUN_001834a4(0xd,0xfbf);
            pairSetHalves(temp_v6,(int)(short)(*(short *)(temp_v3 + 8) + temp_v1),
                         (int)(short)((*(short *)(temp_v3 + 10) + temp_v0) - (short)param_4));
            pairSetHalves(temp_v2,(int)(short)((*(short *)(temp_v3 + 8) + temp_v1) - *(short *)(temp_v4 + 8))
                         ,(int)(short)(((*(short *)(temp_v3 + 10) + temp_v0) - (short)param_4) -
                                      *(short *)(temp_v4 + 10)));
            temp_v6 = g_renderCtx;
            temp_v3 = packNibblesAndByte(6,1,0);
            piVar9 = (int *)(temp_v6 + 0x12b8);
            temp_v4 = piVar9[*piVar9 + 2];
            piVar9[*piVar9 + 2] = temp_v3;
            if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
              (**(romwright_code **)(temp_v6 + 0x12d4))();
              *(unsigned char *)(temp_v6 + 0x12d0) = 0;
            }
            fadeObjectResetIfActive(temp_v2);
            temp_v6 = g_renderCtx;
            temp_v2 = packNibblesAndByte(6,7,0);
            piVar9 = (int *)(temp_v6 + 0x12b8);
            temp_v3 = piVar9[*piVar9 + 2];
            piVar9[*piVar9 + 2] = temp_v2;
            if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
              (**(romwright_code **)(temp_v6 + 0x12d4))();
              *(unsigned char *)(temp_v6 + 0x12d0) = 0;
            }
          }
          temp_v6 = FUN_001834a4(0xd,0xfc0);
          FUN_001835b4(2,0xd,0xfbd,*(short *)(temp_v6 + 8) + param_2,
                       (*(short *)(temp_v6 + 10) + param_3) - param_4,0x47);
        }
      }
      else {
        temp_v3 = FUN_001834a4(0xd,0xfc1);
        pairSetHalves(temp_v6,(int)(short)(*(short *)(temp_v3 + 8) + temp_v1),
                     (int)(short)(*(short *)(temp_v3 + 10) + temp_v0));
        temp_v3 = g_renderCtx;
        temp_v4 = packNibblesAndByte(6,1,0);
        piVar9 = (int *)(temp_v3 + 0x12b8);
        temp_v5 = piVar9[*piVar9 + 2];
        piVar9[*piVar9 + 2] = temp_v4;
        if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v3 + 0x12d4))();
          *(unsigned char *)(temp_v3 + 0x12d0) = 0;
        }
        fadeObjectResetIfActive(temp_v6);
        temp_v6 = g_renderCtx;
        temp_v3 = packNibblesAndByte(6,7,0);
        piVar9 = (int *)(temp_v6 + 0x12b8);
        temp_v4 = piVar9[*piVar9 + 2];
        piVar9[*piVar9 + 2] = temp_v3;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v6 + 0x12d4))(temp_v3);
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        temp_v6 = FUN_001834a4(0xd,0xfc2);
        temp_v3 = FUN_001834a4(0xd,0xfbf);
        pairSetHalves(temp_v2,(int)(short)((*(short *)(temp_v6 + 8) + temp_v1) - *(short *)(temp_v3 + 8)),
                     (int)(short)((*(short *)(temp_v6 + 10) + temp_v0) - *(short *)(temp_v3 + 10)));
        temp_v6 = g_renderCtx;
        temp_v3 = packNibblesAndByte(6,1,0);
        piVar9 = (int *)(temp_v6 + 0x12b8);
        temp_v4 = piVar9[*piVar9 + 2];
        piVar9[*piVar9 + 2] = temp_v3;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v6 + 0x12d4))();
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        fadeObjectResetIfActive(temp_v2);
        temp_v6 = g_renderCtx;
        temp_v2 = packNibblesAndByte(6,7,0);
        piVar9 = (int *)(temp_v6 + 0x12b8);
        temp_v3 = piVar9[*piVar9 + 2];
        piVar9[*piVar9 + 2] = temp_v2;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
          (**(romwright_code **)(temp_v6 + 0x12d4))();
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        temp_v6 = FUN_001834a4(0xd,0xfc0);
        pairSetHalves(param_1 + 0x1c04,(int)(short)(*(short *)(temp_v6 + 8) + temp_v1),
                     (int)(short)(*(short *)(temp_v6 + 10) + temp_v0));
        fadeObjectResetIfActive(param_1 + 0x1c04);
      }
    }
  }
  else {
    jobGetScalarValue();
    efctSetSpeed();
    temp_v6 = FUN_001834a4(0xd,0xfc0);
    FUN_001835b4(2,0xd,0xfbd,*(short *)(temp_v6 + 8) + param_2,
                 (*(short *)(temp_v6 + 10) + param_3) - param_4,0x47);
    efctSetSpeed();
    temp_v6 = 0;
    do {
      temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfb0);
      if (temp_v6 >= 6) {
        temp_v2 = FUN_001834a4(0xd,temp_v6 + 0xfbf);
      }
      efctSetSpeed();
      FUN_001835b4(2,0xd,0xfaf,*(short *)(temp_v2 + 8) + param_2,
                   (*(short *)(temp_v2 + 10) + param_3) - param_4,0x42);
      efctSetSpeed();
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 8);
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
