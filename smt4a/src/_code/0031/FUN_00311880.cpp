/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311880` (_code @ 0x311880, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035363c(...);
int FUN_003a30e8(void);
int VectorSignedToFloat(...);

/* stack frame of param_3: 14 slot(s), 56 byte(s) */
typedef struct {
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

extern unsigned char LAB_00311b68; /* 0x311b68 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int randRange(unsigned int);
extern int gameFlagsGetBlock(void);
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_0035363c. */
/* Supplied declaration required: FUN_003a30e8. */
extern int FUN_003c30e4(void);


void FUN_00311880(int param_1,int param_2,int param_3)

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
  
  temp_v0 = gameFlagsGetBlock();
  if (param_3 != 0) {
    temp_v2 = 0;
    if ('\0' < *(char *)(temp_v0 + 0xe17)) {
      do {
        if (*(char *)(temp_v0 + temp_v2 + 0x15f4) == '\x02') {
          temp_v3 = (int)*(short *)(temp_v0 + temp_v2 * 2 + 0x1604);
          temp_v1 = temp_v3;
          FUN_003a30e8();
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0035363c(5,0,&LAB_00311b68,0x49,0,0xffffffff,0,0,0,0,0,0,0,0,1,temp_v3,temp_v3 + 0x1300,0,
                       0);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(char *)(temp_v0 + 0xe17));
      return;
    }
  }
  else {
    pcVar5 = (char *)0x0;
    temp_v2 = FUN_003c30e4();
    if (0 < temp_v2) {
      do {
        pcVar2 = pcVar5;
        FUN_003a30e8();
        if (((*pcVar2 != -1) && (*pcVar2 == param_1)) && (pcVar2[1] == param_2)) {
          temp_v4 = 0;
          if (*(short *)(pcVar2 + 0x14) != 0) {
            temp_v2 = gameFlagIsSet();
            if (temp_v2 != 0) {
              temp_v2 = randRange(99);
              if (temp_v2 <= pcVar2[0x17]) {
LAB_00311990:
                if (*(char *)(temp_v0 + 0xe17) < '\x0f') {
                  VectorSignedToFloat((int)*(short *)(pcVar2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((int)*(short *)(pcVar2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((int)*(short *)(pcVar2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((int)*(short *)(pcVar2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat((int)*(short *)(pcVar2 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_0035363c(5,0,&LAB_00311b68,0x49,0,0xffffffff,0,0,0,0,0,0,0,0,1,pcVar5,
                               pcVar5 + 0x1300,0,0);
                  *(unsigned char *)((int)*(char *)(temp_v0 + 0xe17) + temp_v0 + 0x15f4) = 2;
                  *(short *)(temp_v0 + *(char *)(temp_v0 + 0xe17) * 2 + 0x1604) = (short)(int)pcVar5;
                  *(unsigned short *)(temp_v0 + *(char *)(temp_v0 + 0xe17) * 2 + 0x1624) = temp_v4;
                  *(short *)(temp_v0 + *(char *)(temp_v0 + 0xe17) * 2 + 0x1644) =
                       (short)(int)(pcVar5 + 0x1300);
                  *(char *)(temp_v0 + 0xe17) = *(char *)(temp_v0 + 0xe17) + '\x01';
                }
              }
            }
            else {
              temp_v2 = randRange(99);
              if (temp_v2 <= pcVar2[0x16]) {
                temp_v4 = *(unsigned short *)(pcVar2 + 0x14);
                goto LAB_00311990;
              }
            }
          }
          else {
            temp_v2 = randRange(99);
            if (temp_v2 <= pcVar2[0x17]) goto LAB_00311990;
          }
        }
        pcVar5 = pcVar5 + 1;
        temp_v2 = FUN_003c30e4();
      } while ((int)pcVar5 < temp_v2);
    }
  }
  return;
}

} /* extern "C" */
