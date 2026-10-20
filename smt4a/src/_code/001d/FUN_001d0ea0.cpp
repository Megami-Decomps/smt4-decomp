/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0ea0` (_code @ 0x1d0ea0, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d23e0(unsigned int, int, int, unsigned int, unsigned int, int);
int FUN_001d25a0(unsigned int, int);
int FUN_0030ea58(unsigned int *, int);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_001d23e0. */
/* Supplied declaration required: FUN_001d25a0. */
extern int FUN_002e3390(int);
/* Supplied declaration required: FUN_0030ea58. */


void FUN_001d0ea0(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v4 = *(int *)(param_2 + 0x310) != 0;
  temp_v1 = 0;
  if (temp_v4) {
    temp_v1 = *(int *)(param_2 + 0x318);
  }
  if (temp_v4 && temp_v1 != 0) {
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v1 = FUN_002e3390(param_3);
    if (temp_v1 >= 9) {
      temp_v1 = 8;
    }
    else if (temp_v1 < 1) {
      FUN_001d25a0(param_1,0);
      return;
    }
    temp_v2 = 0;
    do {
      temp_v0 = *(char *)(param_3 + temp_v2);
      *(char *)((int)&temp_v6 + temp_v2) = temp_v0;
      if (temp_v0 == ':') {
        temp_v3 = temp_v6;
        temp_v4 = temp_v3 == 0x61;
        if (temp_v4) {
          temp_v3 = temp_v6 >> 8;
        }
        temp_v5 = temp_v4 && temp_v3 == 0x6f;
        if (temp_v4 && temp_v3 == 0x6f) {
          temp_v5 = (*(unsigned char *)((unsigned char *)&temp_v6 + 2)) == 'c';
        }
        if ((temp_v5) && (temp_v1 = 0, 0 < *(int *)(param_2 + 0x310))) {
          do {
            temp_v2 = *(int *)(param_2 + 0x318) + temp_v1 * 0x50;
            puVar5 = &temp_v6;
            FUN_0030ea58(puVar5,temp_v2 + 0x24);
            if (puVar5 == (unsigned int *)0x0) {
              FUN_001d23e0(param_1,param_2,temp_v2 + 0x24,*(unsigned int *)(temp_v2 + 0x20),
                           *(unsigned int *)(temp_v2 + 0x34),*(unsigned short *)(temp_v2 + 8));
              return;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < *(int *)(param_2 + 0x310));
        }
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v1);
  }
  FUN_001d25a0(param_1,0);
  return;
}

} /* extern "C" */
