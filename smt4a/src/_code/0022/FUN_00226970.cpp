/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226970` (_code @ 0x226970, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(...);
int memAlloc(...);
int asdMemoryFreeRegion(...);
int FUN_0017fe8c(...);
int FUN_0018003c(...);
int FUN_0019a300(...);
int asdMemFree(...);
int nn_os_LightEvent_Initialize(...);
int FUN_001a1204(...);
int FUN_001ab838(...);
int nn_os_LightEvent_Wait(...);
int svcSleepThread(...);
int FUN_00418fe0(...);
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
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemoryFreeRegion. */
/* Supplied declaration required: FUN_0017fe8c. */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: FUN_001a1204. */
/* Supplied declaration required: FUN_001ab838. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_00418fe0. */
extern unsigned int nn_err_CTR_FatalErr_Throw(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned char * FUN_00226970(unsigned char *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 goto(s); irregular input(s): in_lr; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  romwright_code *pcVar3;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar9;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *pbVar14;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *puVar17;
  int unaff_r9;
  unsigned int temp_v10;
  unsigned int in_lr;
  unsigned char temp_v11;
  unsigned int *puStack_38;
  unsigned char uStack_20;
  
  if (param_1 == (unsigned char *)0x0 || param_2 == 0) {
    return param_1;
  }
  temp_v1 = *(unsigned short *)(param_2 + 0x12);
  temp_v8 = (unsigned int)temp_v1;
  temp_v9 = (unsigned int)*(unsigned short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x11) == '\0') {
    unaff_r9 = 4;
    *(unsigned int *)(param_1 + 0x28) = temp_v8 * temp_v9 * 4;
    puStack_38 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,*(unsigned int *)(param_1 + 0x28),1);
  }
  temp_v0 = *(unsigned char *)(param_2 + 0x16);
  param_2 = param_2 + 0x40;
  if (temp_v0 != 0x1b) {
    if (temp_v0 < 0x1c) {
      if (temp_v0 == 0x13) goto LAB_00226aa8;
      if (temp_v0 != 0x14) goto code_r0x0019a5a0;
    }
    else if (temp_v0 != 0x24 && temp_v0 != 0x2c) goto code_r0x0019a5a0;
    temp_v10 = 0;
    puVar17 = puStack_38;
    if (temp_v9 != 0) {
      do {
        if (temp_v8 != 0) {
          temp_v2 = 0;
          puVar9 = puVar17;
          temp_v7 = temp_v8;
          do {
            temp_v11 = (temp_v2 & 1) != 0;
            temp_v4 = ((temp_v9 - temp_v10) - 1) * temp_v8 + temp_v2;
            temp_v2 = temp_v2 + 1;
            temp_v0 = *(unsigned char *)(param_2 + unaff_r9 * 0x10 + (temp_v4 >> 1));
            if (temp_v11) {
              temp_v0 = temp_v0 >> 4;
            }
            temp_v5 = (unsigned int)temp_v0;
            if (!temp_v11) {
              temp_v5 = temp_v5 & 0xf;
            }
            temp_v6 = *(unsigned int *)(param_2 + temp_v5 * 4);
            temp_v5 = temp_v6 >> 0x18;
            temp_v11 = temp_v5 < 0x7f;
            if (temp_v11) {
              temp_v5 = temp_v5 << 0x19;
            }
            if (!temp_v11) {
              temp_v5 = 0xff;
            }
            else {
              temp_v5 = temp_v5 >> 0x18;
            }
            temp_v7 = (temp_v7 - 1) & 0xffff;
            *puVar9 = (temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) |
                      (((temp_v6 >> 0x10) & 0xff) << 8) | temp_v5;
            puVar9 = puVar9 + 1;
          } while (temp_v7 != 0);
          puVar17 = puVar17 + temp_v8;
        }
        temp_v10 = (temp_v10 + 1) & 0xffff;
      } while (temp_v10 < temp_v9);
    }
  }
  else {
LAB_00226aa8:
    temp_v4 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x400,1);
    temp_v10 = 0;
    do {
      temp_v2 = *(unsigned int *)(param_2 +
                       ((temp_v10 & 0xe7) | ((temp_v10 & 0x10) >> 1) | ((temp_v10 & 8) << 1)) * 4);
      temp_v7 = temp_v2 >> 0x18;
      temp_v11 = temp_v7 < 0x7f;
      if (temp_v11) {
        temp_v7 = temp_v7 << 0x19;
      }
      if (!temp_v11) {
        temp_v7 = 0xff;
      }
      else {
        temp_v7 = temp_v7 >> 0x18;
      }
      *(unsigned int *)(temp_v4 + temp_v10 * 4) =
           temp_v7 | (temp_v2 << 0x18) | (((temp_v2 & 0xff00) >> 8) << 0x10) |
                    (((temp_v2 & 0xff0000) >> 0x10) << 8);
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < 0x100);
    temp_v10 = 0;
    if (temp_v9 != 0) {
      puVar17 = puStack_38;
      do {
        if (temp_v8 != 0) {
          pbVar14 = (unsigned char *)(((temp_v9 - temp_v10) - 1) * temp_v8 + ((param_2 + unaff_r9 * 0x100) - 1));
          temp_v7 = (unsigned int)(temp_v1 >> 1);
          puVar9 = puVar17 + -1;
          if ((temp_v1 & 1) != 0) {
            pbVar14 = pbVar14 + 1;
            *puVar17 = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar14 * 4);
            puVar9 = puVar17;
          }
          for (; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
            puVar9[1] = *(unsigned int *)(temp_v4 + (unsigned int)pbVar14[1] * 4);
            pbVar14 = pbVar14 + 2;
            puVar9[2] = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar14 * 4);
            puVar9 = puVar9 + 2;
          }
          puVar17 = puVar17 + temp_v8;
        }
        temp_v10 = (temp_v10 + 1) & 0xffff;
      } while (temp_v10 < temp_v9);
    }
    asdMemFree(temp_v4);
  }
code_r0x0019a5a0:
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 0x1c) = 0x6752;
  *(unsigned int *)(param_1 + 0x20) = 0x1401;
  *(unsigned int *)(param_1 + 0x14) = temp_v8;
  *(unsigned int *)(param_1 + 0x18) = temp_v9;
  temp_v3 = 0x10000;
  memAlloc(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
  *(unsigned int *)(param_1 + 0x24) = temp_v3;
  FUN_00418fe0(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),puStack_38,temp_v3);
  FUN_0018003c();
  if ((((unsigned int)puStack_38 >= DAT_005b4050) && ((unsigned int *)(DAT_005b4060 + (int)DAT_005b4050) >= puStack_38))
     || (((unsigned int)puStack_38 >= DAT_005b4054 && ((unsigned int *)((int)DAT_005b4054 + DAT_005b4064) >= puStack_38)))
     ) {
    asdMemoryFreeRegion(puStack_38);
    puVar6 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  else {
    FUN_0017fe8c(puStack_38);
    asdMemoryFreeRegion();
    puVar6 = (unsigned char *)*DAT_005b402c;
    software_interrupt(0x14);
  }
  if (-1 < (int)puVar6) {
    return puVar6;
  }
  temp_v8 = (unsigned int)puVar6 >> 0x1b;
  if (((unsigned int)puVar6 & 0x80000000) != 0) {
    temp_v8 = temp_v8 - 0x20;
  }
  if ((bRam1ff80014 & 1) == 0 && DAT_005894cc == '\0') {
    if (temp_v8 == 0xffffffff) {
      FUN_001a1204(puVar6,0,in_lr);
    }
    pcVar3 = DAT_00589280;
    if (DAT_00589280 != (romwright_code *)0x0) {
      DAT_00589280 = (romwright_code *)0x0;
      (*pcVar3)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return (unsigned char *)0x0;
  }
  if (temp_v8 == 0xfffffff9 || temp_v8 == 1) {
    return puVar6;
  }
  DAT_0062d201 = 0;
  DAT_0062d200 = 0;
  DAT_0062d202 = 0xedac;
  puVar5 = &uStack_20;
  DAT_0062d204 = puVar6;
  DAT_0062d208 = in_lr;
  do {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0062d280);
    if (DAT_0058936c == 0) {
      puVar4 = (unsigned int *)&DAT_0058936c;
      FUN_0019a300(&DAT_0058936c,"err:f");
      if (-1 < (int)puVar4) {
        puVar4 = (unsigned int *)0x0;
      }
    }
    else {
      puVar4 = (unsigned int *)0x0;
    }
    if (-1 < (int)puVar4) {
      FUN_001ab838(0x62d20c,0xffff8001);
      nn_err_CTR_FatalErr_Throw((unsigned int)&uStack_20,(unsigned int)&DAT_0062d200);
      if (DAT_0058936c != 0) {
        software_interrupt(0x23);
        DAT_0058936c = 0;
      }
LAB_00189b20:
      nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
      puVar6 = (unsigned char *)(unsigned int)DAT_0062d200;
      if (puVar6 != (unsigned char *)0x2 && puVar6 != (unsigned char *)0x5) {
        nn_os_LightEvent_Initialize(&uStack_20,1);
        nn_os_LightEvent_Wait(&uStack_20);
        puVar6 = puVar5;
      }
      return puVar6;
    }
    temp_v11 = puVar4 == (unsigned int *)0xd0401834;
    if (temp_v11) {
      puVar4 = (unsigned int *)(unsigned int)DAT_0062d200;
    }
    if (!temp_v11 || puVar4 != (unsigned int *)0x2) goto LAB_00189b20;
    svcSleepThread(&LAB_004c4b40,0);
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0062d280);
  } while( 1 );
}

} /* extern "C" */
