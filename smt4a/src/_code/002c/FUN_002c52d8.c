/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c52d8` (_code @ 0x2c52d8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00204098(); /* 0x204098 */
extern unsigned char LAB_00229324; /* 0x229324 */
extern int FUN_00267bf0(); /* 0x267bf0 */
extern unsigned char LAB_00267c70; /* 0x267c70 */
extern int DAT_0057f0c8; /* 0x57f0c8 */
extern unsigned int *DAT_00588c44; /* 0x588c44 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184aa8. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019d36c. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019e330. */
extern unsigned int *FUN_001ab888(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c7ce8. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031a400. */
extern unsigned int FUN_0031cfb4(void);
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_00371f18. */
/* Supplied declaration required: FUN_00387ac4. */
extern int FUN_0038b568(void);
/* Supplied declaration required: FUN_003a7b2c. */
/* Supplied declaration required: FUN_004b6390. */


/* WARNING: Removing unreachable block (ram,0x002c540c) */

unsigned int * FUN_002c52d8(void)

{
/* irregular: 3 goto(s); 27 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  char *pcVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar9;
  int *piVar10;
  unsigned char temp_v6;
  
  if (DAT_00588c44 != (unsigned int *)0x0) {
    return DAT_00588c44;
  }
  FUN_0031a400();
  temp_v3 = 0x100;
  FUN_00163060(0x100,0x100,0,0x7f58,1);
  pcVar6 = "Result CALC";
  DAT_00588c44 = (unsigned int *)temp_v3;
  FUN_0014e38c("Result CALC",4,0,0,FUN_00204098,FUN_00267bf0,0);
  puVar9 = (unsigned int *)(temp_v3 + 0x7f30);
  *puVar9 = (unsigned int)pcVar6;
  FUN_0015155c("Result DrawUpLeft",0x85,0,0,&LAB_00229324,0,0,pcVar6);
  FUN_0015155c("Result DrawUpRight",0xe1,0,0,&LAB_00229324,0,0,*puVar9);
  pcVar6 = "Result DDRAW";
  FUN_0015155c("Result DDRAW",0xea,0,0,&LAB_00267c70,0,0,*puVar9);
  *(char **)(temp_v3 + 0x7f38) = pcVar6;
  FUN_004b6390(temp_v3);
  *(unsigned char *)(temp_v3 + 0x4398) = 0;
  *(unsigned short *)(temp_v3 + 0x439a) = 0;
  temp_v4 = *(unsigned int *)(temp_v3 + 0x4364);
  *(unsigned int *)(temp_v3 + 0x4364) = 1;
  *(unsigned int *)(temp_v3 + 0x4368) = temp_v4;
  *(unsigned int *)(temp_v3 + 0x436c) = 0;
  *(unsigned int *)(temp_v3 + 0x4374) = 0;
  *(unsigned int *)(temp_v3 + 0x437c) = 0;
  temp_v5 = 0;
  if (temp_v5 < *(short *)(temp_v3 + 0x43b4)) {
    do {
      FUN_001641c4();
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(short *)(temp_v3 + 0x43b4));
  }
  *(unsigned short *)(temp_v3 + 0x43b4) = 0;
  temp_v5 = *(int *)(temp_v3 + 0x4364);
  if (temp_v5 == 0x10) {
    temp_v4 = 0x6a;
  }
  else if (temp_v5 < 0x11) {
    if (temp_v5 != 0xc) {
      if (temp_v5 < 0xd) {
        if (temp_v5 == 1) {
          temp_v4 = 100;
        }
        else {
          if (temp_v5 != 0xb) goto LAB_0020b584;
          temp_v4 = 0xa0;
        }
      }
      else if (temp_v5 == 0xe) {
        temp_v4 = 0x68;
      }
      else {
        if (temp_v5 != 0xf) goto LAB_0020b584;
        temp_v4 = 0xe1;
      }
    }
    else {
      temp_v4 = 0x67;
    }
  }
  else if (temp_v5 == 0x11) {
    temp_v4 = 0x6c;
  }
  else if (temp_v5 == 0x12) {
    temp_v4 = 0xe3;
  }
  else if (temp_v5 == 0x13) {
    temp_v4 = 0x66;
  }
  else {
    if (temp_v5 != 0x14) goto LAB_0020b584;
    temp_v4 = 0x67;
  }
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_001681cc(temp_v4);
LAB_0020b584:
  puVar9 = *(unsigned int **)(temp_v3 + 0x4364);
  if (puVar9 == (unsigned int *)0x17) {
    temp_v5 = FUN_0038b568();
    if (temp_v5 != 0) {
      FUN_00371f18();
      FUN_003a7b2c();
      FUN_002c85b0(0);
      FUN_002c7ce8(0);
      FUN_0023b45c(0);
      FUN_002c8538(0);
      FUN_0033449c(0);
      FUN_00333f6c();
      temp_v2 = FUN_0031cfb4();
      if ((temp_v2 != 0) && (puVar4 = (unsigned int *)FUN_001ab888(), temp_v2 <= *puVar4)) {
        *(unsigned int *)(temp_v3 + 0x4364) = 0x16;
        FUN_001681cc(0x92);
        temp_v3 = *(int *)(temp_v3 + 0x43a0);
        if (*(int *)(*(int *)(temp_v3 + 0xb0) + 8) < 6) {
          return (unsigned int *)0x0;
        }
        for (temp_v5 = 0; temp_v0 = *(char *)(*(int *)(temp_v3 + 0xb4) + temp_v5 + 0xa0),
            *(char *)(temp_v3 + temp_v5) = temp_v0, temp_v0 != '\0'; temp_v5 = temp_v5 + 1) {
        }
        temp_v4 = *(unsigned int *)(*(int *)(temp_v3 + 0xb4) + 0xb8);
        *(unsigned int *)(temp_v3 + 0x1c) = 0;
        *(unsigned int *)(temp_v3 + 0x20) = 0;
        *(unsigned int *)(temp_v3 + 0x24) = 0;
        *(unsigned int *)(temp_v3 + 0x28) = 0;
        *(unsigned int *)(temp_v3 + 0x2c) = 0;
        *(unsigned int *)(temp_v3 + 0x30) = 0;
        *(unsigned int *)(temp_v3 + 0x34) = 0;
        *(unsigned int *)(temp_v3 + 0x18) = temp_v4;
        *(unsigned int *)(temp_v3 + 0x38) = 0;
        FUN_002e6354(temp_v3 + 0x3c,0x70);
        *(unsigned int *)(temp_v3 + 200) = 5;
        *(unsigned int *)(temp_v3 + 0xcc) = 0;
        *(unsigned int *)(temp_v3 + 0xd0) = 0;
        return (unsigned int *)0x1;
      }
      FUN_00387ac4(0);
      temp_v5 = FUN_00184aa8(*(unsigned short *)(DAT_0057f0c8 + 0x5e6));
      puVar9 = (unsigned int *)FUN_00184aa8(3);
      temp_v3 = DAT_0057f0c8;
      if (temp_v5 == 0 || puVar9 == (unsigned int *)0x0) {
        return puVar9;
      }
      if ((*(char *)(temp_v5 + 0xc) == '\0') && (*(char *)(puVar9 + 3) != '\0')) {
        temp_v5 = 0;
        piVar10 = (int *)(DAT_0057f0c8 + 0x5d0);
        do {
          FUN_001846d0(temp_v3 + temp_v5 * 0x8c + 0x34,1);
          temp_v1 = temp_v3 + temp_v5 * 4;
          if (*(char *)(temp_v1 + 0x5ac) != '\0') {
            *(unsigned char *)(temp_v1 + 0x5ac) = 0;
            FUN_0019d36c();
            *piVar10 = *(int *)(temp_v3 + 0x5d0) - 1;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 6);
        if (0 < *(int *)(temp_v3 + 0x5d0)) {
          temp_v5 = 0;
          do {
            FUN_0019d36c();
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < *(int *)(temp_v3 + 0x5d0));
          *(unsigned int *)(temp_v3 + 0x5d0) = 0;
        }
        temp_v5 = 0;
        do {
          if (*(char *)(temp_v3 + 0x5e4) != '\x01') {
            temp_v6 = *(char *)(temp_v3 + 0x5e4) == '\x02';
            if (!temp_v6) {
              temp_v1 = temp_v3 + temp_v5 * 0x8c;
            }
            else {
              temp_v1 = temp_v3 + temp_v5 * 0x8c;
              FUN_00184c00(temp_v1 + 0x37c,1,0);
            }
            FUN_0019e330(temp_v1 + 0x37c,temp_v6,!temp_v6);
          }
          else {
            FUN_00184758(temp_v3 + temp_v5 * 0x8c + 0x37c,3,0);
          }
          temp_v1 = DAT_0057f0c8;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 4);
        puVar9 = (unsigned int *)(DAT_0057f0c8 + 0xc);
        *puVar9 = 0;
        *(unsigned int *)(temp_v1 + 0x10) = 3;
        return puVar9;
      }
      temp_v5 = 0;
      piVar10 = (int *)(DAT_0057f0c8 + 0x5d0);
      do {
        FUN_001846d0(temp_v3 + temp_v5 * 0x8c + 0x34,1);
        temp_v1 = temp_v3 + temp_v5 * 4;
        temp_v0 = *(char *)(temp_v1 + 0x5ac);
        if (temp_v0 != '\0') {
          if ((temp_v0 == '\a' || temp_v0 == '\t') ||
             ((temp_v0 == '\x13' || temp_v0 == '\x14') || temp_v0 == '\x15')) {
            FUN_0019d36c();
            *piVar10 = *(int *)(temp_v3 + 0x5d0) - 1;
          }
          if (*(char *)(temp_v1 + 0x5ac) == '\b') {
            FUN_0019d36c();
            *piVar10 = *(int *)(temp_v3 + 0x5d0) - 1;
            FUN_0019d36c();
            *piVar10 = *piVar10 - 1;
          }
          FUN_0019d36c();
          *piVar10 = *(int *)(temp_v3 + 0x5d0) - 1;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 6);
      if (0 < *(int *)(temp_v3 + 0x5d0)) {
        temp_v5 = 0;
        do {
          FUN_0019d36c();
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < *(int *)(temp_v3 + 0x5d0));
        *(unsigned int *)(temp_v3 + 0x5d0) = 0;
      }
      temp_v3 = DAT_0057f0c8;
      puVar9 = (unsigned int *)(DAT_0057f0c8 + 0xc);
      *puVar9 = 0;
      *(unsigned int *)(temp_v3 + 0x10) = 3;
      return puVar9;
    }
    puVar9 = (unsigned int *)0x18;
    *(unsigned int *)(temp_v3 + 0x4364) = 0x18;
  }
  return puVar9;
}
