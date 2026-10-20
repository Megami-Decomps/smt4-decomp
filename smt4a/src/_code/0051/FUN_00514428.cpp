/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514428` (_code @ 0x514428, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a300(...);
int nn_os_LightEvent_Initialize(...);
int FUN_001ab838(...);
int nn_os_LightEvent_Wait(...);
int svcSleepThread(...);
int software_interrupt(...);

typedef int romwright_code(...);
extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern romwright_code *DAT_00589280; /* 0x589280 */
extern int DAT_0058936c; /* 0x58936c */
extern signed char DAT_005894cc; /* 0x5894cc */
extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */
extern unsigned int DAT_0062d280; /* 0x62d280 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
extern int FUN_0042d2ec(void);
extern unsigned char *FUN_0042d30c(unsigned int *, unsigned int);
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Removing unreachable block (ram,0x002e31a4) */
/* WARNING: Removing unreachable block (ram,0x002e3190) */

unsigned char * FUN_00514428(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 9 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v0;
  unsigned char *puVar5;
  unsigned int in_lr;
  unsigned char temp_v1;
  int aiStack_20 [4];
  
  if (param_1 == (unsigned int *)0x0) {
    return (unsigned char *)0x0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  temp_v0 = FUN_0042d2ec();
  puVar5 = (unsigned char *)0x0;
  if (((temp_v0 == 0) || (puVar5 = (unsigned char *)param_1[2], puVar5 != (unsigned char *)0x0)) ||
     (puVar5 = (unsigned char *)FUN_0042d30c(param_1,(param_2 + 0xfffU) & 0xfffff000),
     pcVar1 = DAT_00589280, puVar5 != (unsigned char *)0x0)) {
    return puVar5;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (unsigned char *)0x0;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  DAT_0062d204 = 0xd8601837;
  piVar3 = aiStack_20;
  DAT_0062d208 = in_lr;
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar2 = (unsigned int *)&DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar2) {
        puVar2 = (unsigned int *)0x0;
      }
    }
    else {
      puVar2 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar2) {
      FUN_001ab838(0x62d20c,0xffff8001);
      aiStack_20[0] = DAT_0058936c;
      nn_err_CTR_FatalErr_Throw((unsigned int)aiStack_20,(unsigned int)&DAT_0062d200);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
LAB_00189b20:
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      puVar5 = (unsigned char *)(unsigned int)DAT_0062d200;
      if (puVar5 != (unsigned char *)0x2 && puVar5 != (unsigned char *)0x5) {
        aiStack_20[0] = 0;
        aiStack_20[1] = 0;
        nn_os_LightEvent_Initialize(aiStack_20,1);
        nn_os_LightEvent_Wait(aiStack_20);
        puVar5 = (unsigned char *)piVar3;
      }
      return puVar5;
    }
    temp_v1 = puVar2 == (unsigned int *)0xd0401834;
    if (temp_v1) {
      puVar2 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v1 || puVar2 != (unsigned int *)0x2) goto LAB_00189b20;
    svcSleepThread(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
