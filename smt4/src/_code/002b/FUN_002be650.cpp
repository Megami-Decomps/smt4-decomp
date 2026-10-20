/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be650` (_code @ 0x2be650, 0x2a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001317c8(unsigned char *, unsigned char *);
int FUN_00131898(unsigned char *, unsigned char *);
int FUN_0014162c(unsigned char *, unsigned char *);
int FUN_002b4504(unsigned char *, unsigned char *);
int FUN_002b45e8(void);
int FUN_002b4670(void);
int FUN_002b46f8(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned char LAB_00125e54; /* 0x125e54 */
extern unsigned char LAB_001264b4; /* 0x1264b4 */
extern unsigned char LAB_0012654c; /* 0x12654c */
extern unsigned char LAB_00138944; /* 0x138944 */
extern unsigned char *DAT_00433158; /* 0x433158 */

#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001317c8. */
/* Supplied declaration required: FUN_00131898. */
/* Supplied declaration required: FUN_0014162c. */
/* Supplied declaration required: FUN_002b4504. */
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_002b46f8. */
extern int FUN_002b4748(void);
extern unsigned int FUN_002c0c74(int);
extern unsigned int FUN_002c0cc4(void);
extern int FUN_002c0cec(unsigned int, unsigned int);


unsigned char * FUN_002be650(unsigned char *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [28];
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  
  if (param_1 == (unsigned char *)0x0) {
    return (unsigned char *)0x0;
  }
  temp_v1 = FUN_002b4748();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned char *)(temp_v1 + 8);
  }
  temp_v6 = romwright_subpiece_4_2_0(param_1,0);
  puVar3 = DAT_00433158;
  switch(temp_v0) {
  case 0:
    temp_v8 = temp_v6;
    if ((*(int *)(DAT_00433158 + 0x3a0) == 0) ||
       (FUN_0014162c(DAT_00433158,param_1), puVar3 == (unsigned char *)0x0)) {
      temp_v1 = FUN_002c0cec(8,0);
      if (temp_v1 == 0) {
        return (unsigned char *)0x0;
      }
      temp_v2 = FUN_002c0cc4();
      temp_v3 = FUN_002c0c74(temp_v1);
      puVar3 = temp_v5;
      FUN_002b46f8(puVar3,temp_v2,temp_v3,0x58,&LAB_00138944);
    }
    if (puVar3 == (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
    if (param_2 == 0) {
      return puVar3;
    }
    return puVar3 + 0x20;
  case 1:
    FUN_002b4670();
    puVar3 = param_1;
    if (puVar3 == (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
    if (param_2 == 0) {
      return puVar3;
    }
    return puVar3 + 0x20;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_002b45e8();
    puVar3 = param_1;
    if (puVar3 == (unsigned char *)0x0) {
      return (unsigned char *)0x0;
    }
    if (param_2 == 0) {
      return puVar3;
    }
    return puVar3 + 0x20;
  case 9:
    if ((*(int *)(DAT_00433158 + 0x3c4) == 0) ||
       (FUN_001317c8(DAT_00433158,param_1), puVar3 == (unsigned char *)0x0)) {
      temp_v1 = FUN_002c0cec(8,3);
      if (temp_v1 == 0) {
        return (unsigned char *)0x0;
      }
      temp_v2 = FUN_002c0cc4();
      temp_v3 = FUN_002c0c74(temp_v1);
      puVar3 = temp_v4;
      FUN_002b46f8(puVar3,temp_v2,temp_v3,0x3c,&LAB_00125e54);
    }
    break;
  case 10:
    temp_v7 = temp_v6;
    if ((*(int *)(DAT_00433158 + 0x3d0) == 0) ||
       (FUN_00131898(DAT_00433158,param_1), puVar3 == (unsigned char *)0x0)) {
      temp_v1 = FUN_002c0cec(8,4);
      if (temp_v1 == 0) {
        return (unsigned char *)0x0;
      }
      temp_v2 = FUN_002c0cc4();
      temp_v3 = FUN_002c0c74(temp_v1);
      puVar3 = temp_v5;
      FUN_002b46f8(puVar3,temp_v2,temp_v3,0x30,&LAB_0012654c);
    }
    break;
  case 0xb:
    if ((*(int *)(DAT_00433158 + 0x3dc) == 0) ||
       (FUN_002b4504(DAT_00433158,param_1), puVar3 == (unsigned char *)0x0)) {
      temp_v1 = FUN_002c0cec(8,5);
      if (temp_v1 == 0) {
        return (unsigned char *)0x0;
      }
      temp_v2 = FUN_002c0cc4();
      temp_v3 = FUN_002c0c74(temp_v1);
      puVar3 = temp_v4;
      FUN_002b46f8(puVar3,temp_v2,temp_v3,0x2c,&LAB_001264b4);
    }
    break;
  default:
    return (unsigned char *)0x0;
  }
  if (puVar3 != (unsigned char *)0x0) {
    return puVar3;
  }
  return (unsigned char *)0x0;
}

} /* extern "C" */
