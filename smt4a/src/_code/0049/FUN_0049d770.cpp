/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d770` (_code @ 0x49d770, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_001643b4(...);
int FUN_00202400(...);
int FUN_00203b40(...);
int flagsAtSetBits01(...);
int FUN_0049d140(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0049ebf0(...); /* 0x49ebf0 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_001643b4. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(unsigned short);
extern int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
/* Supplied declaration required: FUN_00202400. */
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: flagsAtSetBits01. */
extern int flagsAtGetBit0(void);
/* Supplied declaration required: FUN_0049d140. */


void FUN_0049d770(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar7;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v7 = *(int *)(param_1 + 8) == 0;
  temp_v1 = 0;
  if (!temp_v7) {
    temp_v1 = *(int *)(param_1 + 0xc);
  }
  if (((temp_v7 || temp_v1 == 0) || (temp_v1 = FUN_00341940(0x33), temp_v1 == 0)) ||
     (temp_v1 = asdTMTexTableNodeIsLoaded(0x33,0), temp_v1 == 0)) {
    return;
  }
  temp_v2 = dataTableGet(0x46,0);
  temp_v3 = dataTableGetEntries();
  *(unsigned int *)(param_1 + 0x10) = temp_v3;
  temp_v1 = dataTableGetCount(temp_v2);
  temp_v6 = 0;
  temp_v5 = 0;
  *(int *)(param_1 + 0x14) = temp_v1;
  if (temp_v1 != 0) {
    do {
      temp_v4 = temp_v5 * 0x11;
      puVar7 = (unsigned short *)(*(int *)(param_1 + 0x10) + temp_v5 * 0x44);
      if (puVar7 != (unsigned short *)0x0) {
        temp_v4 = (unsigned int)*puVar7;
      }
      if (puVar7 != (unsigned short *)0x0 && temp_v4 != 0) {
        temp_v1 = flagsAtGetBit0();
        if (temp_v1 == 0) {
          temp_v1 = gameFlagIsSet(puVar7[1]);
          if (temp_v1 != 0) {
            flagsAtSetBits01(*puVar7);
            temp_v1 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(param_1 + temp_v1 + 0x18) = (short)temp_v5;
          }
        }
        else {
          temp_v1 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(short *)(param_1 + temp_v1 + 0x18) = (short)temp_v5;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(unsigned int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0x80) = temp_v6;
  qsort(param_1 + 0x18,temp_v6,2,FUN_0049ebf0);
  FUN_00203b40(param_1 + 0x18c,*(unsigned int *)(param_1 + 0x80),10,1,1,1);
  *(unsigned int *)(param_1 + 0x1f0) = 0;
  *(unsigned int *)(param_1 + 500) = 0;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x1f8) = 0;
  do {
    if (*(int *)(param_1 + 0x80) <= temp_v1) break;
    temp_v0 = FUN_001643b4(0x33,temp_v1 + 0x5d);
    temp_v6 = temp_v1 * 2;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(param_1 + temp_v6 + 0x1fc) = temp_v0;
    *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + 1;
  } while (temp_v1 < 10);
  temp_v0 = FUN_001643b4(0x33,0x58);
  *(unsigned short *)(param_1 + 0x212) = temp_v0;
  temp_v0 = FUN_001643b4(0x33,0x59);
  *(unsigned short *)(param_1 + 0x214) = temp_v0;
  temp_v0 = FUN_001643b4(0x33,0x57);
  *(unsigned short *)(param_1 + 0x216) = temp_v0;
  *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + 3;
  FUN_00202400();
  FUN_0049d140(param_1,1,3);
  return;
}

} /* extern "C" */
