/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ec120` (_code @ 0x4ec120, 0x7fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(void);
int bufProcRelease(void);
int FUN_004aa380(unsigned int);
int FUN_004ddd10(...);
int FUN_004de37c(int *, unsigned int *, int, unsigned int);
int btlUnitSetParam(int *, int, int);
int FUN_004e0314(...);
int FUN_004e05d4(...);
int FUN_004e1354(...);
int FUN_004e15fc(int *, unsigned int *, int, unsigned int);
int FUN_004e6018(...);
int FUN_004e7418(...);
int FUN_004e7e08(...);
int FUN_004eb740(...);
int FUN_004eb838(...);
int FUN_004ec950(int *, unsigned int *, int, unsigned int);
int FUN_004ed14c(int *, unsigned int *, int, unsigned int);
int FUN_004ed5b4(int *, unsigned int *, int, unsigned int);
int FUN_004f8f08(...);
int FUN_004f94b8(...);
int FUN_004f9b54(void);
int FUN_004fd508(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571248; /* 0x571248 */
extern unsigned int DAT_0057124c; /* 0x57124c */
extern unsigned int DAT_00571258; /* 0x571258 */
extern unsigned int DAT_0057125c; /* 0x57125c */
extern unsigned int DAT_00571288; /* 0x571288 */
extern unsigned int DAT_0057128c; /* 0x57128c */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int g_btlEvent; /* 0x573898 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002e3328. */
extern int FUN_003e69ac(unsigned int);
/* Supplied declaration required: bufProcRelease. */
extern int FUN_003e7adc(int);
extern int chainCountIdUnflagged(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_004aa380. */
extern int FUN_004aa768(unsigned int, int);
extern int FUN_004aaf80(unsigned int);
extern int FUN_004ab784(unsigned int);
extern int FUN_004abac8(unsigned int);
extern int FUN_004abe14(unsigned int);
extern int FUN_004c8a9c(void);
extern int isEntryUsable(unsigned int);
extern int *FUN_004dc72c(int *, unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_004ddd10. */
/* Supplied declaration required: FUN_004de37c. */
/* Supplied declaration required: btlUnitSetParam. */
extern int *FUN_004e0170(int *, unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_004e0314. */
/* Supplied declaration required: FUN_004e05d4. */
/* Supplied declaration required: FUN_004e1354. */
/* Supplied declaration required: FUN_004e15fc. */
/* Supplied declaration required: FUN_004e6018. */
/* Supplied declaration required: FUN_004e7418. */
/* Supplied declaration required: FUN_004e7e08. */
/* Supplied declaration required: FUN_004eb740. */
/* Supplied declaration required: FUN_004eb838. */
/* Supplied declaration required: FUN_004ec950. */
/* Supplied declaration required: FUN_004ed14c. */
/* Supplied declaration required: FUN_004ed5b4. */
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004f94b8. */
/* Supplied declaration required: FUN_004f9b54. */
extern int FUN_004fa0c4(int);
/* Supplied declaration required: FUN_004fd508. */


int * FUN_004ec120(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 22 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  
  temp_v6 = *param_1;
  temp_v4 = g_btlScriptUnit + *(int *)(temp_v6 + 0xa4) * 0x1254;
  puVar9 = (unsigned int *)(temp_v4 + 4);
  switch(param_2) {
  case 0:
    FUN_004ed5b4(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 1:
    piVar3 = (int *)FUN_004dc72c(param_1,puVar9,temp_v6,param_4);
    return piVar3;
  case 2:
    FUN_004ec950(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 3:
    temp_v6 = jobIsValid(*(unsigned int *)(temp_v6 + 0x80));
    if (temp_v6 != 0) {
      return (int *)0x0;
    }
    temp_v4 = *(int *)(temp_v4 + 0x2c);
    *(unsigned short *)(temp_v4 + 0x1be) = 2;
    *(short *)(temp_v4 + 0x1c0) = (short)*(unsigned int *)(*param_1 + 0x4cd4);
    btlUnitSetParam(param_1,1,0);
    FUN_004eb838(param_1,puVar9);
    break;
  case 4:
    temp_v4 = FUN_004abe14(DAT_0057a9c8);
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    FUN_004f8f08(DAT_00573808);
    FUN_004eb838(param_1,puVar9);
    break;
  case 5:
    FUN_004ed14c(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 6:
    FUN_004e15fc(param_1,puVar9,temp_v6,param_4);
    return param_1;
  default:
    return (int *)0x0;
  case 8:
    FUN_004de37c(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 9:
    *(unsigned char *)(temp_v4 + 9) = 10;
    break;
  case 10:
    temp_v6 = chainCountIdUnflagged(DAT_005712f0,puVar9);
    if (0 < temp_v6) {
      return (int *)0x0;
    }
    FUN_004aa380(DAT_0057a9c8);
    *(unsigned short *)(*(int *)(temp_v4 + 0x2c) + 0x1be) = 10;
    temp_v4 = *(int *)(*param_1 + 0xa4);
    temp_v3 = 0xb;
    temp_v4 = g_btlScriptUnit + temp_v4 * 0x1254;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0xb:
    FUN_004ddd10(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0xc:
  case 0x10:
  case 0x12:
  case 0x17:
    temp_v3 = 0x1d;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0xd:
    temp_v4 = jobIsValid(*(unsigned int *)(temp_v6 + 0x40));
    if (temp_v4 != 0) {
      return (int *)0x0;
    }
    temp_v4 = FUN_004abac8(DAT_0057a9c8);
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    temp_v3 = 0xe;
    temp_v4 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0xe:
    temp_v4 = FUN_004aaf80(DAT_0057a9c8);
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    temp_v4 = *param_1;
    if (*(int *)(temp_v4 + 0x2358) != 3) {
      temp_v4 = *(int *)(temp_v4 + 0xa4);
      temp_v3 = 0x1d;
    }
    else {
      temp_v4 = *(int *)(temp_v4 + 0xa4);
      temp_v3 = 0xb;
    }
    temp_v4 = g_btlScriptUnit + temp_v4 * 0x1254;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0xf:
    FUN_004e6018(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x11:
    temp_v4 = chainCountIdUnflagged(DAT_005712f0,puVar9);
    if (0 < temp_v4) {
      return (int *)0x0;
    }
    FUN_004eb838(param_1,puVar9);
    break;
  case 0x13:
    if ((((((DAT_00571154 | DAT_00571164) & (*(unsigned int **)(temp_v4 + 0x24))[1]) != 0 ||
           ((DAT_00571150 | DAT_00571160) & **(unsigned int **)(temp_v4 + 0x24)) != 0) &&
         (temp_v6 = FUN_003e7adc(temp_v6), temp_v6 == 0)) && ((*puVar9 & 0x200000) != 0)) &&
       (temp_v1 = *(short *)(*(int *)(temp_v4 + 0x2c) + 0x1be),
       (temp_v1 == 9 || temp_v1 == 10) || temp_v1 == 0xd)) {
      temp_v6 = chainCountIdUnflagged(DAT_005712f0,puVar9);
      if (temp_v6 != 0) {
        return (int *)0x0;
      }
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
      FUN_004f8f08(DAT_00573808);
      *puVar9 = *puVar9 & 0xffdfffff;
      *(unsigned short *)(*(int *)(temp_v4 + 0x2c) + 0x1be) = 0;
      return (int *)0x1;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    break;
  case 0x14:
    FUN_004e1354(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x16:
    FUN_004e7e08(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x18:
    temp_v4 = FUN_003e69ac(*(unsigned int *)(temp_v6 + 0x4e54));
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    if (*(int *)(*param_1 + 0x4e54) != 0) {
      bufProcRelease();
      FUN_002e3328();
      *(unsigned int *)(*param_1 + 0x4e54) = 0;
    }
    FUN_004eb740(param_1,puVar9);
    break;
  case 0x1a:
    temp_v4 = isEntryUsable(g_btlEvent);
    if (temp_v4 != 0) {
      return (int *)0x0;
    }
    temp_v3 = 0xb;
    temp_v4 = g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0x1d:
    piVar3 = (int *)FUN_004e0170(param_1,puVar9,temp_v6,param_4);
    return piVar3;
  case 0x1e:
    FUN_004e7418(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x1f:
    FUN_004e0314(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x20:
    FUN_004e05d4(param_1,puVar9,temp_v6,param_4);
    return param_1;
  case 0x21:
    temp_v4 = chainCountIdUnflagged(DAT_005712f0,puVar9);
    if (0 < temp_v4) {
      return (int *)0x0;
    }
    temp_v4 = 0;
    do {
      temp_v6 = FUN_004aa768(DAT_0057a9c8,temp_v4);
      if (temp_v6 == 0) {
        return (int *)0x0;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = FUN_004ab784(DAT_0057a9c8);
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    if (((*puVar9 & 0x1080) == 0) && (temp_v4 = FUN_004c8a9c(), temp_v4 != 0)) {
      return (int *)0x0;
    }
    FUN_004eb740(param_1,puVar9);
    break;
  case 0x22:
    if (*(int *)(temp_v4 + 0xc) == 0) {
      temp_v6 = DAT_00573808;
      FUN_004f9b54();
      if (temp_v6 == 0) {
        return (int *)0x0;
      }
      FUN_004f94b8(DAT_00573808);
      *(int *)(temp_v4 + 0xc) = *(int *)(temp_v4 + 0xc) + 1;
      return (int *)0x0;
    }
    if (*(int *)(temp_v4 + 0xc) != 1) {
      return (int *)0x0;
    }
    temp_v4 = FUN_004fa0c4(DAT_00573808);
    if (temp_v4 == 0) {
      return (int *)0x0;
    }
    temp_v4 = *(int *)(*param_1 + 0xa4);
    temp_v3 = 0x23;
    temp_v4 = g_btlScriptUnit + temp_v4 * 0x1254;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0x23:
    temp_v4 = chainCountIdUnflagged(DAT_005712f0,puVar9);
    if (0 < temp_v4) {
      return (int *)0x0;
    }
    if (((*puVar9 & 0x1080) == 0) && (temp_v4 = FUN_004c8a9c(), temp_v4 != 0)) {
      return (int *)0x0;
    }
    FUN_004eb740(param_1,puVar9);
    break;
  case 0x24:
    temp_v6 = isEntryUsable(g_btlEvent);
    if (temp_v6 != 0) {
      return (int *)0x0;
    }
    if ((DAT_0057125c & *(unsigned int *)(*param_1 + 0x45a4)) != 0 ||
        (DAT_00571258 & *(unsigned int *)(*param_1 + 0x45a0)) != 0) {
      temp_v6 = FUN_004abac8(DAT_0057a9c8);
      if (temp_v6 == 0) {
        return (int *)0x0;
      }
      FUN_004fd508(0,puVar9,0xf,*(unsigned int *)(temp_v4 + 0x28),1);
      temp_v4 = *param_1;
      temp_v5 = *(unsigned int *)(temp_v4 + 0x45a0) | DAT_00571248;
      temp_v2 = *(unsigned int *)(temp_v4 + 0x45a4) | DAT_0057124c;
      *(unsigned int *)(temp_v4 + 0x45a4) = temp_v2;
      *(unsigned int *)(temp_v4 + 0x45a0) = temp_v5;
      temp_v5 = temp_v5 | DAT_00571288;
      temp_v4 = *param_1;
      temp_v2 = temp_v2 | DAT_0057128c;
      *(unsigned int *)(temp_v4 + 0x45a4) = temp_v2;
      *(unsigned int *)(temp_v4 + 0x45a0) = temp_v5;
      temp_v4 = *param_1;
      temp_v0 = ~DAT_00571258;
      *(unsigned int *)(temp_v4 + 0x45a4) = temp_v2 & ~DAT_0057125c;
      *(unsigned int *)(temp_v4 + 0x45a0) = temp_v5 & temp_v0;
    }
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
    return (int *)0x1;
  case 0x25:
    temp_v3 = 0x26;
    *(unsigned char *)(temp_v4 + 9) = temp_v3;
    break;
  case 0x26:
    if (*(short *)(*(int *)(temp_v4 + 0x2c) + 0x1be) == 7) {
      *(unsigned short *)(*(int *)(temp_v4 + 0x2c) + 0x1be) = 0;
      *(unsigned short *)(*(int *)(temp_v4 + 0x2c) + 0x1c0) = 0;
      *(unsigned int *)(*(int *)(temp_v4 + 0x24) + 0x150) = 0;
      *(unsigned int *)(temp_v4 + 0x1250) = 0;
    }
  }
  return (int *)0x1;
}

} /* extern "C" */
