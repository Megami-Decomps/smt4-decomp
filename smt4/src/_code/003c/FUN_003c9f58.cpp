/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c9f58` (_code @ 0x3c9f58, 0x3c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int battleSetActionKind(int *);
int FUN_00229b10(int *, unsigned int *);
int FUN_00229c5c(unsigned int, int, int);
int dataTable40FindById(...);
int dataTable08Sub1GetRecord(void);
int FUN_003adc20(unsigned int);
int btlUiGetAcceptedSelection(unsigned int, unsigned int, unsigned int);
int btlUiAdvanceFadeInTransition(unsigned int);

extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int g_btlActionReflect; /* 0x434290 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: battleSetActionKind. */
/* Supplied declaration required: FUN_00229b10. */
/* Supplied declaration required: FUN_00229c5c. */
extern int FUN_0023dcb8(void);
extern int battleUiIsFadeAndFieldReady(unsigned int);
extern int nodeListCountActiveById(unsigned int, unsigned int);
/* Supplied declaration required: dataTable40FindById. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
extern int FUN_002cf124(void);
/* Supplied declaration required: FUN_003adc20. */
/* Supplied declaration required: btlUiGetAcceptedSelection. */
extern int btlUiAcceptSelection(unsigned int);
/* Supplied declaration required: btlUiAdvanceFadeInTransition. */


unsigned int FUN_003c9f58(int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x8000) != 0) {
    temp_v1 = nodeListCountActiveById(g_btlActionReflect,0);
    if (0 < temp_v1) {
      return 0;
    }
    *(unsigned int *)(*param_1 + 0x44a0) = *(unsigned int *)(*param_1 + 0x44a0) & 0xffff7fff;
    FUN_003adc20(g_btlUiBlock);
  }
  temp_v1 = battleUiIsFadeAndFieldReady(g_btlUiBlock);
  if (temp_v1 != 0) {
    if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x40) != 0) {
      if ((*param_2 & 0x80) == 0) {
        *param_2 = *param_2 | 0x80;
        btlUiAdvanceFadeInTransition(g_btlUiBlock);
        FUN_00229c5c(g_btlUiBlock,(short)param_2[0xb],1);
      }
    }
    else if (((*(unsigned int *)(*param_1 + 0x44a0) & 0x100) != 0) && ((*param_2 & 0x1000) == 0)) {
      *param_2 = *param_2 | 0x1000;
      btlUiAdvanceFadeInTransition(g_btlUiBlock);
      FUN_00229c5c(g_btlUiBlock,(short)param_2[0xb],1);
    }
  }
  temp_v1 = btlUiAcceptSelection(g_btlUiBlock);
  if (temp_v1 == 0) {
    return 0;
  }
  btlUiGetAcceptedSelection(g_btlUiBlock,param_2[10] + 0x14c,param_2[10] + 0x14e);
  if ((*param_2 & 0x80) != 0) {
    if ((*(unsigned int *)param_2[8] & 2) != 0) {
      temp_v1 = FUN_0023dcb8();
joined_r0x003ca0e4:
      if (temp_v1 != 0) {
        *(unsigned short *)(param_2[10] + 0x14c) = 6;
        *(unsigned short *)(param_2[10] + 0x14e) = 0;
      }
      else {
        *(unsigned short *)(param_2[10] + 0x14c) = 1;
        *(unsigned short *)(param_2[10] + 0x14e) = 1;
      }
    }
    else {
      *(unsigned short *)(param_2[10] + 0x14c) = 1;
      *(unsigned short *)(param_2[10] + 0x14e) = 1;
    }
  }
  else if ((*param_2 & 0x1000) != 0) {
    if ((*(unsigned int *)param_2[8] & 2) != 0) {
      temp_v1 = FUN_0023dcb8();
      goto joined_r0x003ca0e4;
    }
    *(unsigned short *)(param_2[10] + 0x14c) = 1;
    *(unsigned short *)(param_2[10] + 0x14e) = 1;
  }
  switch(*(unsigned short *)(param_2[10] + 0x14c)) {
  default:
    return 1;
  case 1:
    temp_v2 = 5;
    temp_v1 = *(int *)(*param_1 + 0x84);
    temp_v1 = g_btlScriptUnit + temp_v1 * 0xf1c;
    break;
  case 2:
  case 3:
    dataTable40FindById((int)*(short *)(param_2[10] + 0x14e));
    temp_v1 = FUN_002cf124();
    if (temp_v1 == 0) {
      temp_v2 = 7;
      temp_v1 = *(int *)(*param_1 + 0x84);
      temp_v1 = g_btlScriptUnit + temp_v1 * 0xf1c;
      break;
    }
    temp_v2 = 5;
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 4:
  case 0xb:
    battleSetActionKind(param_1);
    return 1;
  case 6:
  case 0xf:
    FUN_00229b10(param_1,param_2);
    return 1;
  case 7:
    temp_v0 = *(short *)(param_2[10] + 0x14e);
    param_2[0x168] = (int)temp_v0;
    if ((int)temp_v0 != 7) {
      temp_v2 = 5;
      temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
      break;
    }
    temp_v2 = 0xb;
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 8:
    temp_v1 = (int)*(short *)(param_2[10] + 0x14e);
    dataTable08Sub1GetRecord();
    if (*(short *)(temp_v1 + 0x62) != 0) {
      dataTable40FindById();
      temp_v1 = FUN_002cf124();
      if (temp_v1 != 0) {
        temp_v2 = 5;
        temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
        break;
      }
    }
    temp_v2 = 7;
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 9:
  case 10:
  case 0xd:
    temp_v2 = 7;
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    break;
  case 0xe:
    temp_v2 = 5;
    temp_v1 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
  }
  *(unsigned char *)(temp_v1 + 9) = temp_v2;
  return 1;
}

} /* extern "C" */
