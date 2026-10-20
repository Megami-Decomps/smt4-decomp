/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ce29c` (_code @ 0x1ce29c, 0x208 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026a858(int, unsigned char [42]);
int FUN_0026a958(int);
int FUN_0029d684(int);
int FUN_0029d8f4(unsigned char [42], int, int);
int FUN_002b05d0(int);
int FUN_00317e58(void);
int aeabi_idivmod(int, int);

/* stack frame of param_1: 8 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned short sp5F0; /* 0x5f0: local_5f0 */
    unsigned short sp608; /* 0x608: local_608 */
    unsigned short sp60A; /* 0x60a: local_60a */
    unsigned short spBF4; /* 0xbf4: local_bf4 */
    unsigned short spC0C; /* 0xc0c: local_c0c */
    unsigned short spC0E; /* 0xc0e: local_c0e */
} param_1_stack;

/* Supplied declaration required: FUN_0026a858. */
/* Supplied declaration required: FUN_0026a958. */
extern short *FUN_0029acb0(void);
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029d8f4. */
/* Supplied declaration required: FUN_002b05d0. */
/* Supplied declaration required: FUN_00317e58. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_001ce29c(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned char temp_v5 [42];
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned char temp_v9 [42];
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  int *temp_v13;
  int *temp_v14;
  
  psVar1 = (short *)FUN_0029acb0();
  temp_v14 = (int *)(param_1 + 0x5758);
  temp_v4 = 0;
  if (0 < *temp_v14) {
    temp_v13 = (int *)(param_1 + 0x591c);
    piVar5 = (int *)(param_1 + 0x5920);
    do {
      temp_v0 = param_1 + temp_v4 * 0x2c;
      if (*(char *)(temp_v0 + 0x5788) != '\0') {
        if (*(short *)(temp_v0 + 0x5766) != 0) {
          if ((int)*psVar1 == (unsigned int)*(unsigned short *)(temp_v0 + 0x5760)) {
            temp_v3 = 0;
            temp_v2 = 1;
            do {
              if (((unsigned int)*(unsigned short *)(temp_v0 + 0x5766) & (1 << (temp_v2 & 0xff))) != 0) {
                if (*piVar5 == temp_v3) {
                  FUN_002b05d0((int)(short)temp_v2);
                  FUN_00317e58();
                  FUN_0026a958(1);
                  if (*(short *)(temp_v0 + 0x5766) != psVar1[10]) {
                    FUN_0026a858(*(unsigned short *)(temp_v0 + 0x5760),temp_v5);
                    temp_v6 = *(unsigned short *)(temp_v0 + 0x5762);
                    temp_v7 = *(unsigned short *)(temp_v0 + 0x5764);
                    temp_v8 = *(unsigned short *)(temp_v0 + 0x5766);
                    FUN_0029d8f4(temp_v5,1,0);
                    FUN_0026a958(1);
                    FUN_0029d684(1);
                  }
                }
                temp_v3 = temp_v3 + 1;
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < 0xb);
            if (*temp_v13 >= 0x18) {
              aeabi_idivmod(*piVar5 + 1,temp_v3);
              *piVar5 = temp_v1;
              *temp_v13 = 0;
            }
            if (*(short *)(temp_v0 + 0x5766) == 0) goto LAB_001ce408;
          }
        }
        else {
LAB_001ce408:
          FUN_002b05d0(0);
          FUN_00317e58();
          if (*(short *)(temp_v0 + 0x5766) != psVar1[10]) {
            FUN_0026a858(*(unsigned short *)(temp_v0 + 0x5760),temp_v9);
            temp_v10 = *(unsigned short *)(temp_v0 + 0x5762);
            temp_v11 = *(unsigned short *)(temp_v0 + 0x5764);
            temp_v12 = *(unsigned short *)(temp_v0 + 0x5766);
            FUN_0029d8f4(temp_v9,1,0);
            FUN_0026a958(1);
            FUN_0029d684(1);
          }
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *temp_v14);
  }
  return;
}

} /* extern "C" */
