/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5c04` (_code @ 0x2c5c04, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern romwright_code *pcRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned int uRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern unsigned int uRam00000014; /* 0x14 */
extern int iRam00000018; /* 0x18 */
extern int iRam00000020; /* 0x20 */
extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern signed char DAT_00465040; /* 0x465040 */

/* Supplied declaration required: FUN_001082a0. */
/* Supplied declaration required: FUN_00109670. */
/* Supplied declaration required: FUN_002b0404. */
extern int FUN_002b045c(unsigned char *);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c34e8. */
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_002c6202. */
/* Supplied declaration required: FUN_002c67dc. */
/* Supplied declaration required: FUN_002c6808. */
extern int FUN_002c6a04(void);
extern unsigned int func_0x0014e6f8(char *);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002c5ca0) overlaps instruction at (ram,0x002c5c9e)
    */
/* WARNING: Removing unreachable block (ram,0x002c57f8) */

unsigned int FUN_002c5c04(unsigned char *param_1)

{
/* irregular: 16 native warning(s); review required */
  char *pcVar1;
  char temp_v0;
  int temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned char *puVar4;
  int temp_v4;
  unsigned int *puVar6;
  char *pcVar7;
  unsigned int temp_v5;
  int uStack_118;
  unsigned int uStack_114;
  char acStack_10f [19];
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  char *pcStack_ec;
  unsigned char temp_v6 [8];
  unsigned char *puStack_e0;
  int iStack_dc;
  int iStack_d8;
  unsigned char *puStack_d4;
  int iStack_d0;
  unsigned int uStack_c4;
  
  puVar6 = (unsigned int *)&uStack_118;
  temp_v4 = 0;
  FUN_002c3940(&uStack_118,0x100);
  if ((DAT_00465040 == '\0') && (temp_v1 = FUN_002b045c(param_1), temp_v1 == 0)) {
    FUN_002b0404(param_1);
    temp_v5 = 0x2c5c94;
    FUN_002be624(&uStack_118,"patch:/%s",param_1);
    if (temp_v3 == 0) {
      uStack_114 = (unsigned int)(unsigned short)uStack_114;
      uStack_fc = uStack_c4;
      uStack_f8 = temp_v5;
      FUN_001082a0(DAT_0044e0f8,0,uStack_118,uStack_114);
      FUN_002c34e8(DAT_0044e0f9);
      FUN_00109670(DAT_0044e0fa);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRam0000000c = 0;
    uRam00000010 = 0;
    uRam00000014 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002be624(&uStack_118,param_1);
  if (param_1 != (unsigned char *)0x65) {
    if (param_1 != (unsigned char *)0x66) {
      if (param_1 == (unsigned char *)0x67) {
        if ((int)&uStack_118 < 1) {
          puVar6 = (unsigned int *)0x1;
        }
        uStack_118 = 0;
        puVar4 = (unsigned char *)puVar6;
        if ((int)puVar6 >= 0x12) {
          puVar4 = (unsigned char *)0x11;
        }
        FUN_002c6202(&iStack_d8,acStack_10f + 3,temp_v6,puVar4);
        temp_v4 = 0;
        puStack_e0 = puStack_d4;
        param_1 = (unsigned char *)puVar6;
        if (-1 < iRam00000000 << 0x1c) {
          if ((int)puStack_d4 < (int)puVar6) {
            param_1 = puStack_d4;
          }
          for (; ((int)param_1 >= 2 && ((acStack_10f + 2)[(int)param_1] == '0'));
              param_1 = param_1 + -1) {
          }
        }
        if ((iStack_d8 >= (int)puVar6) || (-5 >= iStack_d8)) {
          temp_v4 = 0;
          uStack_118 = 1;
          pcStack_ec = (char *)iStack_d8;
          puStack_e0 = puStack_d4;
        }
        else {
          if (iStack_d8 < 1) {
            param_1 = param_1 + -iStack_d8;
            temp_v4 = iStack_d8;
          }
          else if ((int)param_1 < iStack_d8 + 1) {
            param_1 = (unsigned char *)(iStack_d8 + 1);
          }
          uStack_118 = (iStack_d8 - temp_v4) + 1;
          pcStack_ec = (char *)0x80000000;
        }
      }
    }
    else {
      pcStack_ec = (char *)0x80000000;
      uStack_118 = 1;
      FUN_002c6202(&iStack_d8,acStack_10f + 3,temp_v6,&uStack_118);
      temp_v4 = 0;
      puStack_e0 = puStack_d4;
      param_1 = puStack_d4;
      if (iStack_d0 == 0) {
        param_1 = (unsigned char *)((int)&uStack_118 + iStack_d8 + 1);
      }
      if (-1 < (int)&uStack_118 - (int)param_1) {
        temp_v4 = -1 - ((int)&uStack_118 - (int)param_1);
        param_1 = (unsigned char *)((int)&uStack_118 + 1);
      }
      uStack_118 = (int)param_1 - (int)&uStack_118;
    }
  }
  else {
    uStack_118 = 0;
    if ((int)&uStack_118 >= 0x11) {
      temp_v4 = 0x11;
    }
    else {
      temp_v4 = (int)&uStack_118 + 1;
    }
    FUN_002c6202(&iStack_d8,acStack_10f + 3,temp_v6,temp_v4);
    param_1 = (unsigned char *)((int)&uStack_118 + 1);
    puStack_e0 = puStack_d4;
    temp_v4 = 0;
    uStack_118 = 1;
    pcStack_ec = (char *)iStack_d8;
    puStack_e0 = puStack_d4;
  }
  if ((-1 < iRam00000000 << 0x1c) && ((int)param_1 <= uStack_118)) {
    uStack_118 = -1;
  }
  acStack_10f[2] = 0;
  pcVar7 = acStack_10f + 2;
  if (pcStack_ec != (char *)0x80000000) {
    iStack_d8 = 2;
    puStack_d4 = (unsigned char *)0x2b;
    if ((int)pcStack_ec < 0) {
      pcStack_ec = (char *)-(int)pcStack_ec;
      puStack_d4 = (unsigned char *)0x2d;
    }
    while ((temp_v1 = iStack_d8, iStack_d8 = iStack_d8 - 1, 0 < temp_v1 || (pcStack_ec != (char *)0x0)))
    {
      pcStack_ec = (char *)func_0x0014e6f8(pcStack_ec);
      pcVar7 = pcVar7 + -1;
      *pcVar7 = temp_v2 + '0';
    }
    pcVar7[-1] = (char)puStack_d4;
    if (iRam00000000 << 0x14 < 0) {
      temp_v0 = 'E';
    }
    else {
      temp_v0 = 'e';
    }
    pcVar7 = pcVar7 + -2;
    *pcVar7 = temp_v0;
  }
  pcStack_ec = acStack_10f + (2 - (int)pcVar7);
  iRam00000018 = (iRam00000018 -
                 (int)(param_1 +
                      (int)(acStack_10f + (2 - (int)pcVar7) +
                           (uStack_118 >> 0x1f) + (unsigned int)(iStack_dc != 0)))) - 1;
  if (-1 < iRam00000000 << 0x1b) {
    FUN_002c67dc(0);
  }
  if (iStack_dc != 0) {
    (*pcRam00000004)(iStack_dc,uRam00000008);
    iRam00000020 = iRam00000020 + 1;
  }
  if (iRam00000000 << 0x1b < 0) {
    FUN_002c67dc(0);
  }
  while (puVar4 = param_1 + -1, 0 < (int)param_1) {
    if ((temp_v4 >= 0) && ((int)puStack_e0 > temp_v4)) {
      temp_v0 = acStack_10f[temp_v4 + 3];
    }
    else {
      temp_v0 = '0';
    }
    (*pcRam00000004)(temp_v0,uRam00000008);
    temp_v4 = temp_v4 + 1;
    iRam00000020 = iRam00000020 + 1;
    uStack_118 = uStack_118 - 1;
    param_1 = puVar4;
    if (uStack_118 == 0) {
      temp_v1 = FUN_002c6a04();
      (*pcRam00000004)(*(unsigned char *)((int)*(int **)(temp_v1 + 0xc) + **(int **)(temp_v1 + 0xc)),
                       uRam00000008);
      iRam00000020 = iRam00000020 + 1;
    }
  }
  while (pcVar1 = pcStack_ec, pcStack_ec = pcStack_ec + -1, 0 < (int)pcVar1) {
    temp_v0 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    (*pcRam00000004)(temp_v0,uRam00000008);
    iRam00000020 = iRam00000020 + 1;
  }
  FUN_002c6808(0);
  return 2;
}
