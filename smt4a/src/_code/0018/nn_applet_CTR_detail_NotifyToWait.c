/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_NotifyToWait` (_code @ 0x18b940, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_004c4b40; /* 0x4c4b40 */
extern romwright_code *DAT_00589280; /* 0x589280 */
extern int DAT_0058936c; /* 0x58936c */
extern signed char DAT_005894cc; /* 0x5894cc */
extern unsigned int DAT_005b4470; /* 0x5b4470 */
extern int DAT_005b4480; /* 0x5b4480 */
extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */
extern unsigned int DAT_0062d280; /* 0x62d280 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b70c. */
/* Supplied declaration required: FUN_0018b868. */
extern int FUN_0018bab4(void);
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a1204. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_001bcd48. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_applet_CTR_detail_NotifyToWait(void)

{
/* irregular: 1 goto(s); irregular input(s): in_lr; 11 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_lr;
  unsigned char temp_v2;
  int aiStack_20 [4];
  
  FUN_0018b868();
  FUN_0018b70c();
  temp_v0 = FUN_0018bab4();
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x18b958);
  }
  temp_v0 = DAT_005b4480;
  if (DAT_005b4480 == 0) {
    temp_v0 = -0x1f5f3008;
  }
  else {
    software_interrupt(0x23);
    DAT_005b4480 = 0;
  }
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x18b994);
  }
  if ((DAT_005b4470 == 0) || (software_interrupt(0x14), -1 < (int)DAT_005b4470)) {
    return;
  }
  temp_v1 = DAT_005b4470 >> 0x1b;
  if ((DAT_005b4470 & 0x80000000) != 0) {
    temp_v1 = temp_v1 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (temp_v1 == 0xffffffff) {
      FUN_001a1204(DAT_005b4470,0,in_lr);
    }
    pcVar1 = DAT_00589280;
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return;
  }
  if (temp_v1 == 0xfffffff9 || temp_v1 == 1) {
    return;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  DAT_0062d204 = DAT_005b4470;
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
      if (DAT_0062d200 != 2 && DAT_0062d200 != 5) {
        aiStack_20[0] = 0;
        aiStack_20[1] = 0;
        FUN_001a089c(aiStack_20,1);
        FUN_001af148(aiStack_20);
      }
      return;
    }
    temp_v2 = puVar2 == (unsigned int *)0xd0401834;
    if (temp_v2) {
      puVar2 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v2 || puVar2 != (unsigned int *)0x2) goto LAB_00189b20;
    FUN_001bcd48(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}
