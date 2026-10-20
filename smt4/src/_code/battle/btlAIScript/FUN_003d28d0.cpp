/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d28d0` (_code @ 0x3d28d0, 0x5a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229754(...);
int FUN_00229ad4(int *);
int FUN_00229b10(int *, unsigned int *);
int btlUnitSetParam(int *, int, int);
int FUN_002ae164(void);
int memClear(int, int);
int FUN_003ae7bc(unsigned int);
int FUN_003cae6c(int *, unsigned int *);
int FUN_003cb3e4(int *, unsigned int *);
int FUN_003cbce4(int *, unsigned int *);
int FUN_003cbf40(int *, unsigned int *);
int FUN_003cf228(int *, unsigned int *);
int FUN_003cfb60(int *, unsigned int *);
int FUN_003d173c(int *, unsigned int *);
int FUN_003d2ea0(int *, unsigned int *);
int FUN_003d317c(int *, unsigned int *);
int FUN_003dc4b0(...);
int FUN_003dcbf4(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int g_btlAiScript; /* 0x434260 */
extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int g_btlActionReflect; /* 0x434290 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlEvent; /* 0x435d48 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_00229754. */
extern int btlNodeListAnyReady(void);
/* Supplied declaration required: FUN_00229ad4. */
/* Supplied declaration required: FUN_00229b10. */
/* Supplied declaration required: btlUnitSetParam. */
extern int FUN_0027e350(unsigned int);
extern int FUN_0027e3b8(unsigned int);
extern int nodeListCountActiveById(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002ae164. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: memClear. */
extern int btlAiScriptIsFinished(unsigned int);
/* Supplied declaration required: FUN_003ae7bc. */
extern int FUN_003aeaf4(unsigned int);
extern int *FUN_003c9f58(int *, unsigned int *);
extern int *FUN_003cab9c(int *, unsigned int *);
/* Supplied declaration required: FUN_003cae6c. */
extern int *FUN_003cb244(int *, unsigned int *);
/* Supplied declaration required: FUN_003cb3e4. */
extern int *FUN_003cbb78(int *, unsigned int *);
/* Supplied declaration required: FUN_003cbce4. */
/* Supplied declaration required: FUN_003cbf40. */
/* Supplied declaration required: FUN_003cf228. */
/* Supplied declaration required: FUN_003cfb60. */
/* Supplied declaration required: FUN_003d173c. */
extern int *FUN_003d1c1c(int *, unsigned int *);
/* Supplied declaration required: FUN_003d2ea0. */
/* Supplied declaration required: FUN_003d317c. */
/* Supplied declaration required: FUN_003dc4b0. */
/* Supplied declaration required: FUN_003dcbf4. */
extern int FUN_003dcfc8(int);


int * FUN_003d28d0(int *param_1,unsigned int param_2)

{
/* irregular: 18 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned char temp_v4;
  
  temp_v3 = *param_1;
  temp_v2 = g_btlScriptUnit + *(int *)(temp_v3 + 0x84) * 0xf1c;
  puVar6 = (unsigned int *)(temp_v2 + 4);
  switch(param_2) {
  case 0:
    FUN_003d317c(param_1,puVar6);
    return param_1;
  case 1:
    piVar2 = (int *)FUN_003c9f58(param_1,puVar6);
    return piVar2;
  case 2:
    temp_v3 = btlAiScriptIsFinished(g_btlAiScript);
    if (temp_v3 == 0) {
      return (int *)0x0;
    }
    temp_v3 = jobIsValid(*(unsigned int *)(*param_1 + 0x5c));
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    temp_v3 = *param_1;
    if ((((*(unsigned int *)(temp_v3 + 0x44a0) & 4) != 0) && (*(short *)(temp_v3 + 0x496c) == 0)) &&
       (*(short *)(temp_v3 + 0x496e) == 0)) {
      *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0x10;
      *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
      memClear(temp_v2 + 0x3c,0x85);
    }
    FUN_00229b10(param_1,puVar6);
    return (int *)0x1;
  case 3:
    temp_v3 = jobIsValid(*(unsigned int *)(temp_v3 + 0x5c));
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    temp_v2 = *(int *)(temp_v2 + 0x2c);
    *(unsigned short *)(temp_v2 + 0x14c) = 2;
    *(short *)(temp_v2 + 0x14e) = (short)*(unsigned int *)(*param_1 + 0x49c8);
    btlUnitSetParam(param_1,1,0);
    FUN_00229b10(param_1,puVar6);
    return (int *)0x1;
  case 4:
    FUN_003d2ea0(param_1,puVar6);
    return param_1;
  case 5:
    FUN_003cbf40(param_1,puVar6);
    return param_1;
  default:
    return (int *)0x0;
  case 7:
    FUN_003cae6c(param_1,puVar6);
    return param_1;
  case 8:
    temp_v1 = 9;
    break;
  case 9:
    temp_v3 = nodeListCountActiveById(g_btlActionReflect,puVar6);
    if (0 < temp_v3) {
      return (int *)0x0;
    }
    FUN_003ae7bc(g_btlUiBlock);
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 10;
    FUN_00229ad4(param_1);
    return (int *)0x1;
  case 10:
    if ((*(unsigned int *)(temp_v3 + 0x7c) & 1) != 0) {
      return (int *)0x0;
    }
    temp_v1 = 0xb;
    break;
  case 0xb:
    piVar2 = (int *)FUN_003cab9c(param_1,puVar6);
    return piVar2;
  case 0xc:
    piVar2 = (int *)FUN_003d1c1c(param_1,puVar6);
    return piVar2;
  case 0xd:
    FUN_003d173c(param_1,puVar6);
    return param_1;
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x16:
    temp_v1 = 0x1b;
    break;
  case 0xf:
    temp_v2 = jobIsValid(*(unsigned int *)(temp_v3 + 0x20));
    if (temp_v2 != 0) {
      return (int *)0x0;
    }
    temp_v2 = FUN_0027e350(g_btlUiBlock);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    temp_v1 = 0x10;
    temp_v2 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    *(unsigned char *)(temp_v2 + 9) = temp_v1;
    return (int *)0x1;
  case 0x10:
    temp_v2 = FUN_003aeaf4(g_btlUiBlock);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    temp_v4 = *(int *)(*param_1 + 0x225c) == 3;
    if (temp_v4) {
      temp_v1 = 0xb;
    }
    else {
      temp_v1 = 0x1b;
    }
    temp_v2 = g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c;
    if (temp_v4) {
      *(unsigned char *)(temp_v2 + 9) = temp_v1;
      return (int *)0x1;
    }
    *(unsigned char *)(temp_v2 + 9) = temp_v1;
    return (int *)0x1;
  case 0x11:
    FUN_003cf228(param_1,puVar6);
    return param_1;
  case 0x14:
    FUN_003cbce4(param_1,puVar6);
    return param_1;
  case 0x18:
    temp_v3 = FUN_0027e3b8(g_btlEvent);
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) == 3) {
      temp_v2 = (int)*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14e);
      FUN_002ae164();
      temp_v0 = '\0';
      if (temp_v2 != 0) {
        temp_v0 = *(char *)(temp_v2 + 0x4b);
      }
      if (((*(unsigned int *)(*param_1 + 0x44a8) & 0x800) == 0) && (temp_v2 != 0 && temp_v0 != '\0')) {
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xc;
        return (int *)0x1;
      }
    }
    FUN_00229ad4(param_1);
    return (int *)0x1;
  case 0x1b:
    piVar2 = (int *)FUN_003cb244(param_1,puVar6);
    return piVar2;
  case 0x1c:
    FUN_003cfb60(param_1,puVar6);
    return param_1;
  case 0x1d:
    FUN_003cb3e4(param_1,puVar6);
    return param_1;
  case 0x1e:
    piVar2 = (int *)FUN_003cbb78(param_1,puVar6);
    return piVar2;
  case 0x1f:
    if (*(int *)(temp_v2 + 0xc) == 0) {
      temp_v3 = DAT_00435d18;
      FUN_003dcbf4();
      if (temp_v3 == 0) {
        return (int *)0x0;
      }
      FUN_003dc4b0(DAT_00435d18);
      *(int *)(temp_v2 + 0xc) = *(int *)(temp_v2 + 0xc) + 1;
      return (int *)0x0;
    }
    if (*(int *)(temp_v2 + 0xc) != 1) {
      return (int *)0x0;
    }
    temp_v2 = FUN_003dcfc8(DAT_00435d18);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x20;
    return (int *)0x1;
  case 0x20:
    temp_v2 = nodeListCountActiveById(g_btlActionReflect,puVar6);
    if (0 < temp_v2) {
      return (int *)0x0;
    }
    if (((*puVar6 & 0x1080) == 0) && (temp_v2 = btlNodeListAnyReady(), temp_v2 != 0)) {
      return (int *)0x0;
    }
    FUN_00229754(param_1,puVar6);
    return (int *)0x1;
  case 0x21:
    temp_v2 = FUN_0027e3b8(g_btlEvent);
    if (temp_v2 != 0) {
      return (int *)0x0;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
    return (int *)0x1;
  case 0x22:
    temp_v1 = 0x23;
    break;
  case 0x23:
    if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) != 7) {
      return (int *)0x1;
    }
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
    *(unsigned int *)(*(int *)(temp_v2 + 0x24) + 0xc0) = 0;
    *(unsigned int *)(temp_v2 + 0xf1c) = 0;
    return (int *)0x1;
  }
  *(unsigned char *)(temp_v2 + 9) = temp_v1;
  return (int *)0x1;
}

} /* extern "C" */
