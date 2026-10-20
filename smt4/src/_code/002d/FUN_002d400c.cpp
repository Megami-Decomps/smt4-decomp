/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d400c` (_code @ 0x2d400c, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152bec(unsigned int);
int FUN_0025318c(void);
int FUN_002531a4(void);
int FUN_002a0428(unsigned int, int);
int FUN_002a775c(unsigned int);

extern short *DAT_00447e88; /* 0x447e88 */
extern int DAT_0049fb34; /* 0x49fb34 */
extern short *DAT_0049fb38; /* 0x49fb38 */
extern unsigned int DAT_0049fbb4; /* 0x49fbb4 */
extern unsigned int DAT_0049fbb8; /* 0x49fbb8 */
extern unsigned int DAT_0049fbbc; /* 0x49fbbc */
extern unsigned int DAT_0049fbc0; /* 0x49fbc0 */
extern unsigned int DAT_0049fbc4; /* 0x49fbc4 */
extern unsigned int DAT_0049fbc8; /* 0x49fbc8 */
extern unsigned int DAT_0049fbcc; /* 0x49fbcc */
extern unsigned int DAT_0049fbd0; /* 0x49fbd0 */
extern int DAT_0049fd08; /* 0x49fd08 */
extern short *DAT_0049fd0c; /* 0x49fd0c */

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_0025318c. */
/* Supplied declaration required: FUN_002531a4. */
extern unsigned int FUN_0025bc18(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a775c. */
extern unsigned short *FUN_002b63ac(void);
extern short *FUN_002d4ef4(int);
extern short *FUN_002d4f2c(int);


unsigned int FUN_002d400c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short *puVar1;
  short *psVar2;
  unsigned int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  
  puVar1 = (unsigned short *)FUN_002b63ac();
  temp_v1 = *(int *)(DAT_00447e88 + 0xb8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 == 3) {
          if (DAT_0049fb34 != 0) {
            if (DAT_0049fb34 != 1) {
              if (DAT_0049fb34 != 2) {
                if (DAT_0049fb34 == 3) {
                  temp_v0 = FUN_0025bc18(DAT_0049fbcc,DAT_0049fbd0,0x1c0);
                  *(unsigned int *)(DAT_00447e88 + 0xb2) = temp_v0;
                }
              }
              else {
                temp_v0 = FUN_0025bc18(DAT_0049fbc4,DAT_0049fbc8,0x1c0);
                *(unsigned int *)(DAT_00447e88 + 0xb2) = temp_v0;
              }
            }
            else {
              temp_v0 = FUN_0025bc18(DAT_0049fbbc,DAT_0049fbc0,0x1c0);
              *(unsigned int *)(DAT_00447e88 + 0xb2) = temp_v0;
            }
          }
          else {
            temp_v0 = FUN_0025bc18(DAT_0049fbb4,DAT_0049fbb8,0x1c0);
            *(unsigned int *)(DAT_00447e88 + 0xb2) = temp_v0;
          }
          FUN_002a0428(*(unsigned int *)(DAT_00447e88 + 0xb2),1);
          puVar4 = *(unsigned int **)(DAT_00447e88 + 0xb2);
          *puVar4 = *puVar4 | 2;
          *(unsigned char *)(*(int *)(puVar4[2] + 0x2c) + 0x1f6) = 0;
          psVar2 = DAT_00447e88;
          psVar2[0xb4] = 0;
          psVar2[0xb5] = 0;
          psVar2[0xb6] = -1;
          psVar2[0xb7] = -1;
          psVar2[0xb8] = 0;
          psVar2[0xb9] = 0;
          return 1;
        }
      }
      else {
        FUN_002a775c(*(unsigned int *)(DAT_00447e88 + 0xb2));
        psVar2 = DAT_00447e88;
        psVar2[0xb2] = 0;
        psVar2[0xb3] = 0;
        *(int *)(psVar2 + 0xb8) = *(int *)(psVar2 + 0xb8) + 1;
      }
    }
    else {
      FUN_00152bec(*(unsigned int *)(DAT_00447e88 + 0xb2));
      *(int *)(DAT_00447e88 + 0xb8) = *(int *)(DAT_00447e88 + 0xb8) + 1;
    }
    return 0;
  }
  temp_v1 = 0;
  psVar2 = DAT_00447e88;
  FUN_0025318c();
  if (0 < (int)psVar2) {
    do {
      psVar2 = (short *)FUN_002d4ef4(temp_v1);
      if ((int)*psVar2 == (unsigned int)puVar1[4]) {
        if (DAT_0049fd0c == (short *)0xffffffff) {
          psVar2 = (short *)(int)psVar2[1];
          DAT_0049fb38 = psVar2;
        }
        else {
          DAT_0049fb38 = DAT_0049fd0c;
        }
        break;
      }
      temp_v1 = temp_v1 + 1;
      FUN_0025318c();
    } while (temp_v1 < (int)psVar2);
  }
  temp_v1 = 0;
  FUN_002531a4();
  if (0 < (int)psVar2) {
    do {
      psVar2 = (short *)FUN_002d4f2c(temp_v1);
      if ((int)*psVar2 == (unsigned int)*puVar1) {
        temp_v1 = DAT_0049fd08;
        if (DAT_0049fd08 == -1) {
          temp_v1 = (int)psVar2[1];
        }
        if (DAT_0049fb34 == temp_v1) {
          return 1;
        }
        DAT_0049fb34 = temp_v1;
        *(int *)(DAT_00447e88 + 0xb8) = *(int *)(DAT_00447e88 + 0xb8) + 1;
        return 0;
      }
      temp_v1 = temp_v1 + 1;
      FUN_002531a4();
    } while (temp_v1 < (int)psVar2);
  }
  return 1;
}

} /* extern "C" */
