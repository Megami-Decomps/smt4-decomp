/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Npc_SpawnRandomInRange` (_code @ 0x2ef2e0, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1420; /* 0x1420: local_1420 */
} void_stack;

extern int DAT_0044cfa0; /* 0x44cfa0 */

/* Supplied declaration required: FUN_00247bf4. */
/* Supplied declaration required: FUN_00252190. */
/* Supplied declaration required: FUN_002542bc. */
/* Supplied declaration required: FUN_002542d4. */
/* Supplied declaration required: FUN_00254e2c. */
/* Supplied declaration required: FUN_00289234. */
/* Supplied declaration required: FUN_002893c0. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_00295660. */
extern int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_0029c1c8. */
extern unsigned int FUN_0029c1fc(void);
extern int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002b9024. */
extern unsigned int FUN_002bce30(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
extern int FUN_002bf244(void);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002bff38. */
extern int FUN_002c08f0(unsigned int);
extern int FUN_002c09f4(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c564c. */


unsigned int scrComm_Npc_SpawnRandomInRange(void)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [128];
  unsigned char temp_v9 [4984];
  
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_002c564c(0);
    FUN_002542d4(0);
    FUN_002542d4(1,0);
    DAT_0044cfa0 = 0;
  }
  temp_v2 = FUN_002542bc(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = FUN_00296cc8(0);
    temp_v3 = FUN_00296cc8(1);
    temp_v6 = 0;
    temp_v5 = 1;
    do {
      temp_v4 = temp_v5;
      temp_v7[temp_v5] = 0;
      FUN_002b9024();
      if ((((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 6) & 1) != 0)) &&
          (temp_v1 <= (int)(unsigned int)*(unsigned char *)(temp_v4 + 3))) && ((int)(unsigned int)*(unsigned char *)(temp_v4 + 3) <= temp_v3))
      {
        temp_v7[temp_v6] = temp_v5;
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x500);
    if (temp_v6 < 1) {
      return 1;
    }
    temp_v1 = FUN_002c09f4((temp_v6 - 1U) & 0xffff);
    temp_v5 = temp_v7[temp_v1];
    temp_v2 = FUN_0029c1fc();
    FUN_0029c1c8(temp_v2,temp_v5 & 0xffff,0);
    FUN_002542d4(0,1);
    DAT_0044cfa0 = 0;
    FUN_002542d4(1,temp_v5 & 0xffff);
    break;
  case 1:
    temp_v2 = FUN_002542bc(1);
    FUN_00252190(temp_v2,0);
    FUN_002893c0();
    FUN_00289234(temp_v2);
    FUN_002542d4(2,temp_v2);
    FUN_00247bf4(temp_v2,0,1);
    FUN_002542d4(0,2);
    DAT_0044cfa0 = 0;
    break;
  case 2:
    temp_v2 = FUN_002542bc(2);
    FUN_00247bf4(temp_v2,0xf,0);
    FUN_002542d4(0,3);
    DAT_0044cfa0 = 0;
    break;
  case 3:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 0xf) {
      FUN_002542d4(0,4);
      DAT_0044cfa0 = 0;
    }
    break;
  case 4:
    temp_v0 = FUN_002542bc(1);
    FUN_002b9024(temp_v0);
    FUN_002c4938(temp_v8,0x80);
    FUN_002c4938(temp_v9,0x80);
    temp_v5 = FUN_002542bc(1);
    temp_v5 = temp_v5 & 0xffff;
    FUN_002bd06c(temp_v5);
    FUN_002bf694(temp_v8,temp_v5);
    temp_v0 = FUN_002542bc(1);
    temp_v2 = FUN_002bce30(temp_v0,1);
    FUN_002bf694(temp_v9,temp_v2);
    FUN_00295660(8,temp_v8);
    FUN_00295660(9,temp_v9);
    temp_v1 = FUN_002b47f4(0x1e);
    FUN_002bff38(0x14);
    temp_v7[0] = 0;
    FUN_00254e2c(temp_v1,0x38,DAT_0044cfa0,6);
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (temp_v1 == 1) {
      FUN_002542d4(0,10);
      DAT_0044cfa0 = 0;
    }
    break;
  case 10:
    temp_v2 = FUN_002542bc(2);
    FUN_00247bf4(temp_v2,10,1);
    FUN_002542d4(0,0xb);
    DAT_0044cfa0 = 0;
    break;
  case 0xb:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 10) {
      FUN_002542d4(0,0xc);
      DAT_0044cfa0 = 0;
    }
    break;
  case 0xc:
    temp_v2 = FUN_002542bc(2);
    temp_v1 = FUN_002bf244();
    if (temp_v1 != 0) {
      temp_v1 = FUN_002c08f0(temp_v2);
      if (*(int *)(temp_v1 + 0xc) != 1) {
        *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
        *(unsigned char *)(temp_v1 + 0x30) = 1;
      }
      else {
        FUN_002c43b4(temp_v2,0);
      }
    }
    FUN_002542d4(0,0xd);
    DAT_0044cfa0 = 0;
    break;
  case 0xd:
    return 1;
  }
  return 0;
}
