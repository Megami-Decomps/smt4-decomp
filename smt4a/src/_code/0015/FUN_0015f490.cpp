/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f490` (_code @ 0x15f490, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001628c0(char *, unsigned int, int, unsigned int);
int FUN_001633a0(int);
int FUN_00184310(void);
int dataTableGet(int, int);
int FUN_002e6dd0(char *, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int rt_memcpy(unsigned char [4], int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: FUN_001633a0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: dataTableGet. */
extern int dataTableGetCount(void);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0015f490(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 13 unstructured edge(s); 1 goto(s); irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v9;
  unsigned char temp_v10 [4];
  char acStack_ac [140];
  
  dataTableGet(0x3e,0);
  temp_v1 = dataTableGetEntries();
  if (param_2 >= 11) {
    return;
  }
  dataTableGet(0x3e,0);
  temp_v2 = dataTableGetCount();
  temp_v3 = param_1 & 0xffff;
  FUN_00184310();
  if (temp_v3 == 0) {
    return;
  }
  if (0 < temp_v2) {
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v3 + 0x9e);
  }
  temp_v4 = 0;
  temp_v7 = 0;
  if (temp_v4 < temp_v2) {
    do {
      temp_v7 = temp_v4;
      if (*(unsigned short *)(temp_v1 + temp_v4 * 0x7c) == temp_v3) break;
      temp_v4 = temp_v4 + 1;
      temp_v7 = 0;
    } while (temp_v4 < temp_v2);
  }
  rt_memcpy(temp_v10,temp_v1 + temp_v7 * 0x7c,0x7c);
  temp_v1 = 0;
  switch(param_2) {
  case 0:
    temp_v2 = FUN_001633a0(2);
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        temp_v1 = 2;
        break;
      }
      temp_v1 = 1;
    }
    break;
  case 1:
    temp_v1 = FUN_001633a0(2);
    if (temp_v1 != 0) {
      if (temp_v1 == 1) {
        temp_v1 = 5;
        break;
      }
      temp_v1 = 6;
      break;
    }
    temp_v1 = 4;
    break;
  case 2:
    temp_v1 = 0xb;
    break;
  case 3:
    temp_v1 = FUN_001633a0(1);
    if (temp_v1 != 0) {
      temp_v1 = 5;
      break;
    }
    temp_v1 = 4;
    break;
  case 4:
    temp_v3 = FUN_001633a0(9);
    if (5 >= temp_v3) {
      temp_v1 = 3;
      break;
    }
    if (temp_v3 >= 8) {
      temp_v1 = 6;
      break;
    }
    temp_v1 = 4;
    break;
  case 5:
    temp_v1 = FUN_001633a0(1);
    if (temp_v1 != 0) {
      temp_v1 = 9;
      break;
    }
    temp_v1 = 8;
    break;
  case 6:
    temp_v1 = 2;
    break;
  case 7:
    temp_v1 = 10;
    break;
  case 8:
    temp_v1 = 1;
    break;
  case 9:
    temp_v2 = FUN_001633a0(1);
    if (temp_v2 == 0) break;
    temp_v1 = 10;
    break;
  case 10:
    temp_v1 = 7;
  }
LAB_0015f650:
  FUN_002e6dd0(acStack_ac + 0x78,10);
  temp_v2 = 0;
  do {
    temp_v0 = acStack_ac[temp_v2 + temp_v1 * 10];
    acStack_ac[temp_v2 + 0x78] = temp_v0;
    if (temp_v0 == '\0') break;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 10);
  if ((param_2 == 5 || param_2 == 6) && (param_4 != 0)) {
    dataTableGet(0x3e,1);
    temp_v1 = dataTableGetEntries();
    dataTableGet(0x3e,1);
    temp_v2 = dataTableGetCount();
    temp_v7 = 0;
    if (temp_v7 < temp_v2) {
      do {
        puVar9 = (unsigned short *)(temp_v1 + temp_v7 * 8);
        temp_v3 = (unsigned int)*puVar9;
        temp_v8 = temp_v3 == param_1;
        if (temp_v8) {
          temp_v3 = (unsigned int)puVar9[1];
        }
        if (temp_v8 && temp_v3 == param_4) {
          temp_v3 = FUN_001633a0(99);
          if (temp_v3 < *(unsigned char *)(temp_v1 + temp_v7 * 8 + 6)) {
            temp_v3 = 0xffffffff;
            temp_v1 = -1;
            temp_v5 = 9;
            do {
              if ((int)acStack_ac[temp_v5 + 0x78] - 0x30U < 10) {
                if (-1 < (int)temp_v3) goto LAB_0015f760;
                temp_v3 = temp_v5;
                if ((int)(temp_v5 + 1) < 10) {
                  temp_v1 = temp_v5 + 1;
                }
              }
              temp_v5 = temp_v5 - 1;
            } while (temp_v5 < 0x80000000);
            temp_v5 = 0xffffffff;
            if (-1 < (int)temp_v3) {
LAB_0015f760:
              acStack_ac[temp_v3 + 0x78] = (unsigned char)puVar9[2] % 10 + 0x30;
            }
            if (-1 < (int)temp_v5) {
              temp_v3 = (unsigned int)((short)(unsigned short)(unsigned char)puVar9[2] * 0xcd) >> 0xb;
              acStack_ac[temp_v5 + 0x78] = (char)temp_v3 + (char)(temp_v3 / 10) * -10 + '0';
            }
            if (-1 < temp_v1) {
              temp_v0 = *(char *)((int)puVar9 + 5);
              if (temp_v0 == '\0') {
                acStack_ac[temp_v1 + 0x78] = '\0';
              }
              else {
                if (temp_v0 == '\x01') {
                  temp_v0 = 'a';
                }
                else {
                  if (temp_v0 != '\x02') break;
                  temp_v0 = 'b';
                }
                acStack_ac[temp_v1 + 0x78] = temp_v0;
              }
            }
          }
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v2);
    }
  }
  temp_v6 = FUN_0014af98();
  temp_v9 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = VectorFloatToUnsigned(temp_v9 * in_s0,3);
  FUN_001628c0(acStack_ac + 0x78,temp_v3 & 0xff,4,param_3);
  return;
}

} /* extern "C" */
