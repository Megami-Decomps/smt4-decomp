/* NON_MATCHING: romwright 0.5.0 decompilation of `scrFloatOp` (_code @ 0x2e2b50, 0x368 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrPopFloat(int);

extern int g_scrContext; /* 0x588e3c */
extern int DAT_00588e40; /* 0x588e40 */
extern int DAT_00588e44; /* 0x588e44 */
extern float DAT_00588e48; /* 0x588e48 */
extern float DAT_00588e4c; /* 0x588e4c */
extern float DAT_00588e50; /* 0x588e50 */
extern unsigned int DAT_00588e54; /* 0x588e54 */
extern unsigned int DAT_00588e58; /* 0x588e58 */

extern int FUN_003d2004(int);
/* Supplied declaration required: scrPopFloat. */
extern int __aeabi_idivmod(int, int);


void scrFloatOp(int param_1,unsigned int param_2)

{
/* irregular: 14 goto(s); irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  int temp_v2;
  int temp_v3;
  float in_s0;
  
  DAT_00588e54 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1f);
  temp_v3 = param_1 + 0x20;
  DAT_00588e58 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + param_1 + 0x1e);
  if ((DAT_00588e54 != 0 && DAT_00588e54 != 2) || (DAT_00588e58 != 0 && DAT_00588e58 != 2)) {
    scrPopFloat(param_1);
    DAT_00588e48 = in_s0;
    scrPopFloat(param_1);
    DAT_00588e4c = in_s0;
    switch(param_2) {
    case 0:
      DAT_00588e50 = DAT_00588e48 + in_s0;
    default:
      temp_v1 = DAT_00588e50;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 1:
      DAT_00588e50 = DAT_00588e48 - in_s0;
      temp_v1 = DAT_00588e50;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 2:
      DAT_00588e50 = DAT_00588e48 * in_s0;
      temp_v1 = DAT_00588e50;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 3:
      DAT_00588e50 = DAT_00588e48 / in_s0;
      temp_v1 = DAT_00588e50;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 1;
      *(float *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    case 4:
      if (DAT_00588e48 != 0.0f || in_s0 != 0.0f) {
LAB_002e2ea8:
        temp_v2 = 1;
        DAT_00588e44 = temp_v2;
        *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v2;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return;
      }
      break;
    case 5:
      if (DAT_00588e48 != 0.0f && in_s0 != 0.0f) goto LAB_002e2ea8;
      break;
    case 6:
      if (DAT_00588e48 == in_s0) goto LAB_002e2ea8;
      break;
    case 7:
      if (DAT_00588e48 != in_s0) goto LAB_002e2ea8;
      break;
    case 8:
      if (DAT_00588e48 < in_s0) goto LAB_002e2ea8;
      break;
    case 9:
      if (in_s0 < DAT_00588e48) goto LAB_002e2ea8;
      break;
    case 10:
      if (DAT_00588e48 <= in_s0) goto LAB_002e2ea8;
      break;
    case 0xb:
      if (in_s0 <= DAT_00588e48) goto LAB_002e2ea8;
    }
    temp_v2 = 0;
    DAT_00588e44 = temp_v2;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  g_scrContext = FUN_003d2004(param_1);
  DAT_00588e40 = FUN_003d2004(param_1);
  switch(param_2) {
  case 0:
    DAT_00588e44 = g_scrContext + DAT_00588e40;
    temp_v0 = DAT_00588e44;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 1:
    DAT_00588e44 = g_scrContext - DAT_00588e40;
    temp_v0 = DAT_00588e44;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 2:
    DAT_00588e44 = g_scrContext * DAT_00588e40;
    temp_v0 = DAT_00588e44;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 3:
    DAT_00588e44 = __aeabi_idivmod(g_scrContext,DAT_00588e40);
    temp_v0 = DAT_00588e44;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  case 4:
    if (g_scrContext != 0 || DAT_00588e40 != 0) {
LAB_002e2cc4:
      DAT_00588e44 = 1;
      temp_v0 = DAT_00588e44;
      *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
      *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
    break;
  case 5:
    temp_v0 = 0;
    if (g_scrContext != 0) {
      temp_v0 = DAT_00588e40;
    }
    if (g_scrContext != 0 && temp_v0 != 0) goto LAB_002e2cc4;
    break;
  case 6:
    if (g_scrContext == DAT_00588e40) goto LAB_002e2cc4;
    break;
  case 7:
    if (g_scrContext != DAT_00588e40) goto LAB_002e2cc4;
    break;
  case 8:
    if (g_scrContext < DAT_00588e40) goto LAB_002e2cc4;
    break;
  case 9:
    if (DAT_00588e40 < g_scrContext) goto LAB_002e2cc4;
    break;
  case 10:
    if (g_scrContext <= DAT_00588e40) goto LAB_002e2cc4;
    break;
  case 0xb:
    if (DAT_00588e40 <= g_scrContext) goto LAB_002e2cc4;
    break;
  default:
    temp_v0 = DAT_00588e44;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
    *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
  DAT_00588e44 = 0;
  temp_v0 = DAT_00588e44;
  *(unsigned char *)(*(int *)(param_1 + 0x1c) + temp_v3) = 0;
  *(int *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0x3c) = temp_v0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

} /* extern "C" */
