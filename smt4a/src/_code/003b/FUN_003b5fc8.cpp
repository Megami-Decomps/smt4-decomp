/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5fc8` (_code @ 0x3b5fc8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd84(...);
int FUN_0017fe8c(...);
int FUN_0018003c(...);
int FUN_0019a300(...);
int FUN_0019a7f4(...);
int FUN_001a089c(...);
int FUN_001a1204(...);
int FUN_001ab838(...);
int FUN_001af148(...);
int FUN_001bcd48(...);
int FUN_00237210(...);
int FUN_0038b3f8(...);
int software_interrupt(...);

typedef int romwright_code(...);
extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern romwright_code *DAT_00589280; /* 0x589280 */
extern int DAT_0058936c; /* 0x58936c */
extern signed char DAT_005894cc; /* 0x5894cc */
extern unsigned int *DAT_005b402c; /* 0x5b402c */
extern unsigned int DAT_005b4050; /* 0x5b4050 */
extern unsigned int DAT_005b4054; /* 0x5b4054 */
extern int DAT_005b4060; /* 0x5b4060 */
extern int DAT_005b4064; /* 0x5b4064 */
extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned char *DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */
extern unsigned int DAT_0062d280; /* 0x62d280 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd84. */
/* Supplied declaration required: FUN_0017fe8c. */
/* Supplied declaration required: FUN_0018003c. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a1204. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_00237210. */
extern unsigned int FUN_002adba8(int);
/* Supplied declaration required: FUN_0038b3f8. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned char * FUN_003b5fc8(unsigned int *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 14 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned char *puVar4;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_lr;
  unsigned char temp_v4;
  int aiStack_20 [4];
  
  if (param_1 == (unsigned int *)0x0) {
    return (unsigned char *)0x0;
  }
  temp_v3 = 0;
  do {
    FUN_00237210(param_1[temp_v3 + 2]);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 7);
  FUN_00237210(param_1[1]);
  FUN_00237210(*param_1);
  FUN_00237210(param_1[0xd]);
  temp_v3 = 0;
  do {
    FUN_00237210(param_1[temp_v3 + 0x14]);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  FUN_00237210(param_1[0xe]);
  FUN_00237210(param_1[0x10]);
  FUN_00237210(param_1[0x12]);
  FUN_0038b3f8((int)*(short *)(param_1 + 0x24),1);
  if (param_1 != (unsigned int *)0x0) {
    temp_v3 = 0;
    do {
      temp_v0 = FUN_002adba8(temp_v3);
      temp_v1 = FUN_0018206c(0x2e,temp_v0);
      if (temp_v1 != 0) {
        temp_v0 = FUN_002adba8(temp_v3);
        FUN_0019a7f4(0x2e,temp_v0);
        param_1[temp_v3 + 0x25] = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 9);
  }
  FUN_0018003c();
  if ((((unsigned int)param_1 >= DAT_005b4050) && ((unsigned int *)(DAT_005b4060 + (int)DAT_005b4050) >= param_1))
     || (((unsigned int)param_1 >= DAT_005b4054 && ((unsigned int *)((int)DAT_005b4054 + DAT_005b4064) >= param_1)))
     ) {
    FUN_0017fd84(param_1);
    puVar4 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(param_1);
    FUN_0017fd84();
    puVar4 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < (int)puVar4) {
    return puVar4;
  }
  temp_v2 = (unsigned int)puVar4 >> 0x1b;
  if (((unsigned int)puVar4 & 0x80000000) != 0) {
    temp_v2 = temp_v2 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (temp_v2 == 0xffffffff) {
      FUN_001a1204(puVar4,0,in_lr);
    }
    pcVar1 = DAT_00589280;
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (unsigned char *)0x0;
  }
  if (temp_v2 == 0xfffffff9 || temp_v2 == 1) {
    return puVar4;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  piVar3 = aiStack_20;
  DAT_0062d204 = puVar4;
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
      puVar4 = (unsigned char *)(unsigned int)DAT_0062d200;
      if (puVar4 != (unsigned char *)0x2 && puVar4 != (unsigned char *)0x5) {
        aiStack_20[0] = 0;
        aiStack_20[1] = 0;
        FUN_001a089c(aiStack_20,1);
        FUN_001af148(aiStack_20);
        puVar4 = (unsigned char *)piVar3;
      }
      return puVar4;
    }
    temp_v4 = puVar2 == (unsigned int *)0xd0401834;
    if (temp_v4) {
      puVar2 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v4 || puVar2 != (unsigned int *)0x2) goto LAB_00189b20;
    FUN_001bcd48(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
