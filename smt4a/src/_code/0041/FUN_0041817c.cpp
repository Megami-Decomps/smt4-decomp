/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041817c` (_code @ 0x41817c, 0x2f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ab940(void);
int FUN_001ad9b4(void);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001ab940. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned short);


void FUN_0041817c(unsigned short *param_1,int param_2)

{
/* irregular: 4 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar8;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *puVar13;
  
  temp_v2 = FUN_001ab940();
  FUN_001ab940();
  temp_v9 = 0;
  do {
    puVar13 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v2 + temp_v9 * 0xc + 0x8e4);
    temp_v1 = romwright_subpiece_4_2_0(param_1,0);
    if ((puVar13 != (unsigned short *)0x0) && (puVar4 = puVar13, FUN_001ad9b4(), (char)puVar4[3] == '\x01'))
    {
      temp_v3 = FUN_00162e8c();
      temp_v4 = 0;
      do {
        puVar8 = puVar4 + temp_v4 * 4 + 0x80;
        temp_v0 = *puVar8;
        if (temp_v0 == 2) {
          puVar8 = (unsigned short *)(unsigned int)puVar4[temp_v4 * 4 + 0x81];
        }
        if (temp_v0 == 2 && puVar8 == param_1) {
          temp_v6 = temp_v2 + 0x914 + temp_v4 * 2;
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
          temp_v5 = *(unsigned int *)(puVar4 + temp_v4 * 4 + 0x82);
          temp_v8 = temp_v7 + param_2;
          if ((int)temp_v8 < 0xffff) {
            *(short *)(temp_v6 + 4) = (short)temp_v8;
            if (temp_v7 < temp_v5) {
              if ((temp_v8 & 0xffff) >= *(unsigned int *)(puVar4 + temp_v4 * 4 + 0x82)) {
                *(unsigned short *)(temp_v3 + 0x1098) = temp_v1;
              }
              else {
                *(unsigned short *)(temp_v3 + 0x109a) = temp_v1;
              }
              goto LAB_004182e8;
            }
          }
          else {
            *(unsigned short *)(temp_v6 + 4) = 0xffff;
            if (temp_v7 < temp_v5) goto LAB_004182e8;
          }
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      if (((((char)puVar4[3] == '\x01') && (puVar4[0x80] == 2)) && (puVar4[0x81] != 0)) &&
         ((temp_v0 = *puVar4, temp_v4 = FUN_001ab940(),
          (*(unsigned char *)(temp_v4 + (unsigned int)temp_v0 * 4 + 0x2a0) & 8) == 0 &&
          (temp_v4 = FUN_001ada74(*puVar4), temp_v4 != 0)))) {
        *(unsigned short *)(temp_v3 + 0x1098) = puVar4[0x81];
LAB_004182e8:
        temp_v3 = FUN_001ab940();
        temp_v3 = temp_v3 + (int)puVar13 * 4;
        *(unsigned char *)(temp_v3 + 0x2a2) = *(unsigned char *)(temp_v3 + 0x2a2) | 2;
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 4);
  temp_v9 = 1;
  do {
    temp_v3 = temp_v2 + temp_v9 * 0xc;
    puVar13 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v3 + 0x914);
    if ((puVar13 != (unsigned short *)0x0) && (puVar4 = puVar13, FUN_001ad9b4(), (char)puVar4[3] == '\x01'))
    {
      temp_v4 = FUN_00162e8c();
      temp_v6 = 0;
      do {
        puVar8 = puVar4 + temp_v6 * 4 + 0x80;
        temp_v0 = *puVar8;
        if (temp_v0 == 2) {
          puVar8 = (unsigned short *)(unsigned int)puVar4[temp_v6 * 4 + 0x81];
        }
        if (temp_v0 == 2 && puVar8 == param_1) {
          temp_v3 = temp_v3 + 0x914 + temp_v6 * 2;
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
          temp_v8 = *(unsigned int *)(puVar4 + temp_v6 * 4 + 0x82);
          temp_v7 = temp_v5 + param_2;
          if ((int)temp_v7 < 0xffff) {
            *(short *)(temp_v3 + 4) = (short)temp_v7;
            if (temp_v5 < temp_v8) {
              if ((temp_v7 & 0xffff) >= *(unsigned int *)(puVar4 + temp_v6 * 4 + 0x82)) {
                *(unsigned short *)(temp_v4 + 0x1098) = temp_v1;
              }
              else {
                *(unsigned short *)(temp_v4 + 0x109a) = temp_v1;
              }
              goto LAB_0041844c;
            }
          }
          else {
            *(unsigned short *)(temp_v3 + 4) = 0xffff;
            if (temp_v5 < temp_v8) goto LAB_0041844c;
          }
          break;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      if (((((char)puVar4[3] == '\x01') && (puVar4[0x80] == 2)) && (puVar4[0x81] != 0)) &&
         ((temp_v0 = *puVar4, temp_v3 = FUN_001ab940(),
          (*(unsigned char *)(temp_v3 + (unsigned int)temp_v0 * 4 + 0x2a0) & 8) == 0 &&
          (temp_v3 = FUN_001ada74(*puVar4), temp_v3 != 0)))) {
        *(unsigned short *)(temp_v4 + 0x1098) = puVar4[0x81];
LAB_0041844c:
        temp_v3 = FUN_001ab940();
        temp_v3 = temp_v3 + (int)puVar13 * 4;
        *(unsigned char *)(temp_v3 + 0x2a2) = *(unsigned char *)(temp_v3 + 0x2a2) | 2;
      }
    }
    temp_v9 = temp_v9 + 1;
    if (temp_v9 >= 0x14) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
