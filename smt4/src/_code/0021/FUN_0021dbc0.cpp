/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021dbc0` (_code @ 0x21dbc0, 0x2dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024f24c(...);
int dataTable29GetEntryWithAoc(void);
int VectorSignedToFloat(...);

/* stack frame of param_3: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

extern unsigned char LAB_0021dea0; /* 0x21dea0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024f24c. */
/* Supplied declaration required: dataTable29GetEntryWithAoc. */
extern int gameFlagIsSet(void);
extern int randNextInRange(unsigned int);
extern int gameGetMapBlock(void);
extern int FUN_00323538(void);


void FUN_0021dbc0(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int in_fpscr;
  
  temp_v0 = gameGetMapBlock();
  if (param_3 != 0) {
    temp_v2 = 0;
    if ('\0' < *(char *)(temp_v0 + 0xde3)) {
      do {
        if (*(char *)(temp_v0 + temp_v2 + 0xde4) == '\x02') {
          temp_v3 = (int)*(char *)(temp_v0 + temp_v2 + 0xdec);
          temp_v1 = temp_v3;
          dataTable29GetEntryWithAoc();
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0024f24c(5,0,&LAB_0021dea0,0x3a,0,0xffffffff,0,0,0,0,0,0,0,0,1,temp_v3,temp_v3 + 0x1300,0,
                       0);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(char *)(temp_v0 + 0xde3));
      return;
    }
  }
  else {
    pcVar5 = (char *)0x0;
    temp_v2 = FUN_00323538();
    if (0 < temp_v2) {
      do {
        pcVar2 = pcVar5;
        dataTable29GetEntryWithAoc();
        if (((*pcVar2 != -1) && (*pcVar2 == param_1)) && (pcVar2[1] == param_2)) {
          temp_v4 = 0;
          if (*(short *)(pcVar2 + 0x10) != 0) {
            temp_v2 = gameFlagIsSet();
            if (temp_v2 != 0) {
              temp_v2 = randNextInRange(99);
              if (temp_v2 <= pcVar2[0x13]) {
LAB_0021dce0:
                VectorSignedToFloat((int)*(short *)(pcVar2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(pcVar2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(pcVar2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(pcVar2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_0024f24c(5,0,&LAB_0021dea0,0x3a,0,0xffffffff,0,0,0,0,0,0,0,0,1,pcVar5,
                             pcVar5 + 0x1300,0,0);
                *(unsigned char *)((int)*(char *)(temp_v0 + 0xde3) + temp_v0 + 0xde4) = 2;
                *(char *)((int)*(char *)(temp_v0 + 0xde3) + temp_v0 + 0xdec) = (char)(int)pcVar5;
                *(unsigned short *)(temp_v0 + *(char *)(temp_v0 + 0xde3) * 2 + 0xdf4) = temp_v4;
                *(short *)(temp_v0 + *(char *)(temp_v0 + 0xde3) * 2 + 0xe04) = (short)(int)(pcVar5 + 0x1300);
                *(char *)(temp_v0 + 0xde3) = *(char *)(temp_v0 + 0xde3) + '\x01';
              }
            }
            else {
              temp_v2 = randNextInRange(99);
              if (temp_v2 <= pcVar2[0x12]) {
                temp_v4 = *(unsigned short *)(pcVar2 + 0x10);
                goto LAB_0021dce0;
              }
            }
          }
          else {
            temp_v2 = randNextInRange(99);
            if (temp_v2 <= pcVar2[0x13]) goto LAB_0021dce0;
          }
        }
        pcVar5 = pcVar5 + 1;
        temp_v2 = FUN_00323538();
      } while ((int)pcVar5 < temp_v2);
    }
  }
  return;
}

} /* extern "C" */
