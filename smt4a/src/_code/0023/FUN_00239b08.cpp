/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239b08` (_code @ 0x239b08, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd84(...);
int FUN_0017fe8c(...);
int FUN_0018003c(...);
int FUN_0018719c(...);
int FUN_0019a300(...);
int FUN_001a089c(...);
int FUN_001a1204(...);
int FUN_001ab838(...);
int FUN_001af148(...);
int FUN_001bcd48(...);
int FUN_003fd478(...);
int FUN_003fd508(...);
int rt_memcpy_w(...);
int software_interrupt(...);

typedef int romwright_code(...);
extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern int DAT_0057f69c; /* 0x57f69c */
extern unsigned int DAT_0057f6a0; /* 0x57f6a0 */
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
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a1204. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_003fd478. */
/* Supplied declaration required: FUN_003fd508. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x00239ba0) */
/* WARNING: Removing unreachable block (ram,0x00239bb4) */
/* WARNING: Removing unreachable block (ram,0x00239bc4) */
/* WARNING: Removing unreachable block (ram,0x00239bcc) */
/* WARNING: Removing unreachable block (ram,0x00239bdc) */
/* WARNING: Removing unreachable block (ram,0x00239be8) */

unsigned char * FUN_00239b08(void)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 21 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_lr;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned char uStack_20;
  
  temp_v0 = DAT_0057f69c;
  temp_v2 = DAT_0057f69c + 0x88;
  FUN_0018719c(0x556);
  FUN_0018719c(0x557);
  FUN_0018719c(0x421);
  puVar5 = (unsigned int *)(temp_v0 + 0x21e14);
  temp_v4 = *puVar5;
  FUN_003fd478();
  rt_memcpy_w(temp_v2,DAT_0057f6a0,0x2a71c);
  *(unsigned int *)(temp_v0 + 0x21e14) = temp_v4;
  FUN_003fd508(puVar5);
  FUN_0018003c();
  if ((((unsigned int)puVar5 >= DAT_005b4050) && ((unsigned int *)(DAT_005b4060 + (int)DAT_005b4050) >= puVar5)) ||
     (((unsigned int)puVar5 >= DAT_005b4054 && ((unsigned int *)((int)DAT_005b4054 + DAT_005b4064) >= puVar5)))) {
    FUN_0017fd84(puVar5);
    puVar4 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(puVar5);
    FUN_0017fd84();
    puVar4 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < (int)puVar4) {
    return puVar4;
  }
  temp_v1 = (unsigned int)puVar4 >> 0x1b;
  if (((unsigned int)puVar4 & 0x80000000) != 0) {
    temp_v1 = temp_v1 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (temp_v1 == 0xffffffff) {
      FUN_001a1204(puVar4,0,in_lr);
    }
    pcVar2 = DAT_00589280;
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar2)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (unsigned char *)0x0;
  }
  if (temp_v1 == 0xfffffff9 || temp_v1 == 1) {
    return puVar4;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  puVar3 = &uStack_20;
  DAT_0062d204 = puVar4;
  DAT_0062d208 = in_lr;
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar5 = (unsigned int *)&DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar5) {
        puVar5 = (unsigned int *)0x0;
      }
    }
    else {
      puVar5 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar5) {
      FUN_001ab838(0x62d20c,0xffff8001);
      nn_err_CTR_FatalErr_Throw((unsigned int)&uStack_20,(unsigned int)&DAT_0062d200);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
LAB_00189b20:
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      puVar4 = (unsigned char *)(unsigned int)DAT_0062d200;
      if (puVar4 != (unsigned char *)0x2 && puVar4 != (unsigned char *)0x5) {
        FUN_001a089c(&uStack_20,1);
        FUN_001af148(&uStack_20);
        puVar4 = puVar3;
      }
      return puVar4;
    }
    temp_v3 = puVar5 == (unsigned int *)0xd0401834;
    if (temp_v3) {
      puVar5 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v3 || puVar5 != (unsigned int *)0x2) goto LAB_00189b20;
    FUN_001bcd48(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
