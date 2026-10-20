/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4250` (_code @ 0x3c4250, 0x398 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00185dd4(...);
int FUN_0019d880(void);

typedef int romwright_code(...);
/* stack frame of param_6: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_6_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_0019d880. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_003c4250(int param_1,int param_2,unsigned int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  short *psVar9;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v6 = 0;
  FUN_0019d880();
  if (param_5 >= 200) {
    param_5 = 199;
  }
  temp_v8 = 200;
  temp_v0 = (short)param_5;
  temp_v2 = FUN_001834a4(0x12,0x6e);
  psVar9 = *(short **)(temp_v2 + 0xc);
  temp_v2 = __aeabi_idivmod((int)*psVar9 << 0xc,temp_v8);
  temp_v2 = temp_v2 * temp_v0 >> 0xc;
  if ((0 < temp_v0) && (temp_v2 < 1)) {
    temp_v2 = 1;
  }
  temp_v9 = (int)psVar9[1];
  if ((0 < param_6) && (*(char *)(param_1 + 0x2018) != '\x03')) {
    temp_v1 = (short)param_6;
    temp_v6 = FUN_001834a4(0x12,0x6e);
    psVar9 = *(short **)(temp_v6 + 0xc);
    temp_v6 = __aeabi_idivmod((int)*psVar9 << 0xc,200);
    temp_v2 = temp_v6 * (short)(temp_v0 - temp_v1) >> 0xc;
    if ((0 < (short)(temp_v0 - temp_v1)) && (temp_v2 < 1)) {
      temp_v2 = 1;
    }
    temp_v9 = (int)psVar9[1];
    temp_v6 = FUN_001834a4(0x12,0x76);
    psVar9 = *(short **)(temp_v6 + 0xc);
    temp_v6 = __aeabi_idivmod((int)*psVar9 << 0xc,200);
    temp_v6 = temp_v6 * temp_v1 >> 0xc;
    if ((0 < temp_v1) && (temp_v6 < 1)) {
      temp_v6 = 1;
    }
    temp_v7 = (int)psVar9[1];
    FUN_00185dd4(2,0x12,0x76,param_2 + temp_v2,param_3,temp_v6,temp_v7,0xdd);
    efctSetSpeed();
    temp_v4 = g_renderCtx;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar8 = (int *)(temp_v4 + 0x12b8);
    temp_v5 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v3;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v5 != temp_v3) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    FUN_00185dd4(2,0x12,0x77,param_2 + temp_v2,param_3,temp_v6,temp_v7,0xde);
    temp_v4 = g_renderCtx;
    temp_v3 = packNibblesAndByte(6,7,0);
    piVar8 = (int *)(temp_v4 + 0x12b8);
    temp_v5 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v3;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v5 != temp_v3) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    efctSetSpeed();
  }
  FUN_00185dd4(2,0x12,0x6e,param_2,param_3,temp_v2,temp_v9,0xdd);
  if (param_5 < param_4) {
    temp_v3 = (int)(short)((short)param_4 - temp_v0);
    temp_v4 = FUN_001834a4(0x12,0x6f);
    psVar9 = *(short **)(temp_v4 + 0xc);
    temp_v4 = __aeabi_idivmod((int)*psVar9 << 0xc,200);
    temp_v4 = temp_v4 * temp_v3 >> 0xc;
    if ((0 < temp_v3) && (temp_v4 < 1)) {
      temp_v4 = 1;
    }
    FUN_00185dd4(2,0x12,0x6f,param_2 + temp_v2 + temp_v6,param_3,temp_v4,(int)psVar9[1],0xdd);
  }
  else if (param_4 < param_5) {
    temp_v3 = (int)(short)(temp_v0 - (short)param_4);
    temp_v4 = FUN_001834a4(0x12,0x71);
    psVar9 = *(short **)(temp_v4 + 0xc);
    temp_v4 = __aeabi_idivmod((int)*psVar9 << 0xc,200);
    temp_v4 = temp_v4 * temp_v3 >> 0xc;
    if ((0 < temp_v3) && (temp_v4 < 1)) {
      temp_v4 = 1;
    }
    temp_v0 = psVar9[1];
    temp_v3 = FUN_001834a4(0x12,0x6e);
    temp_v5 = FUN_001834a4(0x12,0x71);
    FUN_00185dd4(2,0x12,0x71,
                 (temp_v2 - temp_v4) + temp_v6 + param_2 +
                 ((int)*(short *)(temp_v3 + 8) - (int)*(short *)(temp_v5 + 8)),param_3,temp_v4,(int)temp_v0,
                 0xdd);
  }
  return;
}

} /* extern "C" */
