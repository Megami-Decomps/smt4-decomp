/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00180070` (_code @ 0x180070, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd84(...);
int FUN_0017fe8c(...);
int FUN_0018003c(...);
int FUN_0019a300(...);
int FUN_0019a5a0(...);
int FUN_001a089c(...);
int FUN_001a1204(...);
int FUN_001ab838(...);
int FUN_001af148(...);
int FUN_001bcd48(...);
int FUN_00212500(...);
int FUN_00387368(...);
int software_interrupt(...);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

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
extern int *DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */
extern unsigned int DAT_0062d280; /* 0x62d280 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd84. */
/* Supplied declaration required: FUN_0017fe8c. */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a1204. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_00212500. */
extern int FUN_0025cc50(int *);
extern int *FUN_0037a7f4(void);
/* Supplied declaration required: FUN_00387368. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int * FUN_00180070(int param_1,int *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 14 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  unsigned int temp_v1;
  unsigned int in_lr;
  unsigned char temp_v2;
  int aiStack_20 [4];
  
  temp_v0 = FUN_0025cc50(param_2);
  if (temp_v0 != 0) {
    FUN_00387368();
  }
  else {
    param_2 = (int *)FUN_0037a7f4();
  }
  *(int **)(param_1 + 0x14) = param_2;
  FUN_00212500();
  temp_v0 = *param_2;
  *param_2 = temp_v0 - 1;
  if (temp_v0 - 1 != 0) {
    return param_2;
  }
  if ((param_2[9] != 0) && ((param_2[0xb] & 0x10U) == 0)) {
    FUN_0019a5a0();
    param_2[9] = 0;
  }
  if (param_2[0x11] != 0) {
    FUN_0019a5a0();
    param_2[0x11] = 0;
  }
  FUN_0018003c();
  if ((((unsigned int)param_2 >= DAT_005b4050) && ((int *)(DAT_005b4060 + (int)DAT_005b4050) >= param_2)) ||
     (((unsigned int)param_2 >= DAT_005b4054 && ((int *)((int)DAT_005b4054 + DAT_005b4064) >= param_2)))) {
    FUN_0017fd84(param_2);
    piVar5 = (int *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(param_2);
    FUN_0017fd84();
    piVar5 = (int *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < (int)piVar5) {
    return piVar5;
  }
  temp_v1 = (unsigned int)piVar5 >> 0x1b;
  if (((unsigned int)piVar5 & 0x80000000) != 0) {
    temp_v1 = temp_v1 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (temp_v1 == 0xffffffff) {
      FUN_001a1204(piVar5,0,in_lr);
    }
    pcVar1 = DAT_00589280;
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (int *)0x0;
  }
  if (temp_v1 == 0xfffffff9 || temp_v1 == 1) {
    return piVar5;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  piVar4 = aiStack_20;
  DAT_0062d204 = piVar5;
  DAT_0062d208 = in_lr;
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar3 = (unsigned int *)&DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar3) {
        puVar3 = (unsigned int *)0x0;
      }
    }
    else {
      puVar3 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar3) {
      FUN_001ab838(0x62d20c,0xffff8001);
      aiStack_20[0] = DAT_0058936c;
      nn_err_CTR_FatalErr_Throw((unsigned int)aiStack_20,(unsigned int)&DAT_0062d200);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
LAB_00189b20:
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      piVar5 = (int *)(unsigned int)DAT_0062d200;
      if (piVar5 != (int *)0x2 && piVar5 != (int *)0x5) {
        aiStack_20[0] = 0;
        aiStack_20[1] = 0;
        FUN_001a089c(aiStack_20,1);
        FUN_001af148(aiStack_20);
        piVar5 = piVar4;
      }
      return piVar5;
    }
    temp_v2 = puVar3 == (unsigned int *)0xd0401834;
    if (temp_v2) {
      puVar3 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v2 || puVar3 != (unsigned int *)0x2) goto LAB_00189b20;
    FUN_001bcd48(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
