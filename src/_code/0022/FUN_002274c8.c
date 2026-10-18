/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002274c8` (_code @ 0x2274c8, 0x2cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp68; /* 0x68: local_68 */
} param_6_stack;

extern unsigned char LAB_0022779c; /* 0x22779c */
extern unsigned char LAB_002277a4; /* 0x2277a4 */
extern unsigned char LAB_002277ac; /* 0x2277ac */
extern unsigned char LAB_002277b0; /* 0x2277b0 */
extern unsigned char LAB_002277b8; /* 0x2277b8 */
extern unsigned char LAB_002277c0; /* 0x2277c0 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00200860. */
/* Supplied declaration required: FUN_0021176c. */
/* Supplied declaration required: FUN_0024504c. */
/* Supplied declaration required: FUN_0025ce6c. */
/* Supplied declaration required: FUN_0025cec4. */
/* Supplied declaration required: FUN_0026c9e8. */
/* Supplied declaration required: FUN_0026ca0c. */
/* Supplied declaration required: FUN_0026ca24. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
extern int FUN_002b6d94(int, unsigned short);
extern int FUN_002b6e60(void);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002be828(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002cd6a0. */
/* Supplied declaration required: FUN_0031bcdc. */


void FUN_002274c8(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 13 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  unsigned char temp_v6 [68];
  
  temp_v2 = DAT_00439ca8;
  puVar2 = (unsigned int *)(DAT_00439ca8 + 0xc9e4);
  *(unsigned char *)(DAT_00439ca8 + 0xc9d8) = 1;
  *puVar2 = param_2;
  *(short *)(temp_v2 + 0xc9e8) = (short)param_3;
  *(unsigned int *)(temp_v2 + 0xc9dc) = 0x28;
  *(unsigned int *)(temp_v2 + 0xc9e0) = 0;
  temp_v6[0] = 0;
  temp_v5 = 0;
  switch(*puVar2) {
  case 1:
    if (param_4 != 0) {
      temp_v1 = FUN_0029f260(temp_v2 + 0x5678);
      temp_v2 = FUN_0029f248(temp_v2 + 0x5678);
      if (temp_v2 + temp_v1 != 0) {
        if (temp_v2 + temp_v1 == 1) {
          temp_v5 = (short)temp_v6;
          FUN_002be7fc(temp_v6,&LAB_002277a4);
          FUN_0025ce6c();
        }
      }
      else {
        temp_v5 = (short)temp_v6;
        FUN_002be7fc(temp_v6,&LAB_0022779c);
        FUN_0025cec4();
      }
    }
    else if (param_6 != 0) {
      temp_v2 = FUN_002b6e60();
      temp_v0 = *(unsigned short *)(temp_v2 + 0x606);
      temp_v2 = FUN_002b6e60();
      temp_v2 = FUN_002b6d94((int)*(short *)(temp_v2 + 0x604),temp_v0);
      if ((*(unsigned int *)(temp_v2 + 8) & 0x3fffff) >> 0x11 != 1) {
        temp_v5 = (short)temp_v6;
        FUN_002be7fc(temp_v6,&LAB_0022779c);
      }
      else {
        temp_v5 = (short)temp_v6;
        FUN_002be7fc(temp_v6,&LAB_002277a4);
      }
      FUN_0031bcdc();
    }
    else {
      temp_v2 = param_5;
      FUN_002b9364();
      if (*(char *)(temp_v2 + 10) != '\x01') {
        FUN_002be7fc(temp_v6,&LAB_0022779c);
      }
      else {
        FUN_002be7fc(temp_v6,&LAB_002277a4);
      }
      FUN_0024504c(param_5);
      temp_v5 = (short)param_5;
    }
    FUN_002cd6a0((int)temp_v5);
    break;
  case 2:
  case 3:
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc9e8);
    FUN_002bcff0(temp_v3);
    FUN_002be7fc(temp_v6,&LAB_002277ac,temp_v3);
    FUN_0021176c((int)*(short *)(temp_v2 + 0xc9e8),param_4 != 0);
    break;
  case 8:
    temp_v4 = FUN_002be828(*(unsigned short *)(temp_v2 + 0xc9e8),0);
    FUN_002be7fc(temp_v6,&LAB_002277ac,temp_v4);
    FUN_00200860((int)*(short *)(temp_v2 + 0xc9e8));
    break;
  case 9:
  case 10:
  case 0xc:
    if (param_3 != 0) {
      FUN_002be7fc(temp_v6,&LAB_002277b0);
    }
    else {
      FUN_002be7fc(temp_v6,&LAB_002277b8);
    }
    FUN_0026ca0c();
    break;
  case 0xb:
    FUN_002be7fc(temp_v6,&LAB_002277c0);
    FUN_0026ca0c();
  }
  FUN_0026ca24(temp_v6);
  FUN_0026c9e8(0);
  return;
}
