/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8ef8` (_code @ 0x2d8ef8, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00398388(void);
int FUN_003983a0(void);
int FUN_003fd784(int);
int FUN_0040ace8(unsigned int, int);

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00581288; /* 0x581288 */
extern int DAT_005f1848; /* 0x5f1848 */
extern int DAT_005f184c; /* 0x5f184c */
extern unsigned int DAT_005f1b14; /* 0x5f1b14 */
extern unsigned int DAT_005f1b18; /* 0x5f1b18 */
extern unsigned int DAT_005f1b1c; /* 0x5f1b1c */
extern unsigned int DAT_005f1b20; /* 0x5f1b20 */
extern int DAT_005f1b24; /* 0x5f1b24 */
extern int DAT_005f1b28; /* 0x5f1b28 */
extern int DAT_005f1b2c; /* 0x5f1b2c */
extern int DAT_005f1b4c; /* 0x5f1b4c */
extern int DAT_005f1b60; /* 0x5f1b60 */
extern int DAT_005f1b6c; /* 0x5f1b6c */
extern int DAT_005f1c68; /* 0x5f1c68 */
extern int DAT_005f1c6c; /* 0x5f1c6c */

extern unsigned short *FUN_001801a4(void);
extern short *FUN_0033f7c0(int);
extern short *FUN_0033f7f8(int);
/* Supplied declaration required: FUN_00398388. */
/* Supplied declaration required: FUN_003983a0. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_002d8ef8(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  short *psVar3;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned short *)FUN_001801a4();
  temp_v0 = 0;
  puVar2 = puVar1;
  FUN_003983a0();
  if (0 < (int)puVar2) {
    do {
      psVar3 = (short *)FUN_0033f7f8(temp_v0);
      if ((int)*psVar3 == (unsigned int)*puVar1) {
        DAT_005f1848 = DAT_005f1c68;
        if (DAT_005f1c68 == -1) {
          DAT_005f1848 = (int)psVar3[1];
        }
        break;
      }
      temp_v0 = temp_v0 + 1;
      FUN_003983a0();
    } while (temp_v0 < (int)psVar3);
  }
  temp_v0 = DAT_005f1c68;
  if (DAT_005f1c68 == -1) {
    temp_v0 = DAT_005f1848;
  }
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          *(unsigned int *)(DAT_00581288 + 0x170) = DAT_005f1b20;
        }
      }
      else {
        *(unsigned int *)(DAT_00581288 + 0x170) = DAT_005f1b1c;
      }
    }
    else {
      *(unsigned int *)(DAT_00581288 + 0x170) = DAT_005f1b18;
    }
  }
  else {
    *(unsigned int *)(DAT_00581288 + 0x170) = DAT_005f1b14;
  }
  temp_v0 = *(int *)(*(int *)(DAT_00581288 + 0x170) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = DAT_005f1b2c;
  *(int *)(DAT_00581288 + 0x184) = DAT_005f1b2c;
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x164) = 0;
  *(unsigned int *)(temp_v0 + 0x168) = 0xffffffff;
  temp_v1 = DAT_005f1b24;
  *(int *)(temp_v0 + 0x178) = DAT_005f1b24;
  temp_v0 = *(int *)(temp_v1 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = DAT_005f1b28;
  *(int *)(DAT_00581288 + 0x17c) = DAT_005f1b28;
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = DAT_005f1b60;
  *(int *)(DAT_00581288 + 0x188) = DAT_005f1b60;
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = DAT_005f1b4c;
  *(int *)(DAT_00581288 + 0x180) = DAT_005f1b4c;
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  FUN_003fd784(temp_v0);
  temp_v0 = DAT_005f1b6c;
  *(int *)(DAT_00581288 + 0x18c) = DAT_005f1b6c;
  temp_v0 = *(int *)(temp_v0 + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v0);
  *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  temp_v0 = FUN_003fd784(temp_v0);
  temp_v1 = 0;
  FUN_00398388();
  if (0 < temp_v0) {
    while (psVar3 = (short *)FUN_0033f7c0(temp_v1), (int)*psVar3 != (unsigned int)puVar1[4]) {
      temp_v1 = temp_v1 + 1;
      FUN_00398388();
      if ((int)psVar3 <= temp_v1) {
        return;
      }
    }
    if (DAT_005f1c6c == -1) {
      DAT_005f184c = (int)psVar3[1];
    }
    else {
      DAT_005f184c = DAT_005f1c6c;
    }
  }
  return;
}

} /* extern "C" */
