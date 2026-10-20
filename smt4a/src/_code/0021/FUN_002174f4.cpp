/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002174f4` (_code @ 0x2174f4, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(...);
int FUN_00312830(...);
int FUN_004a8750(unsigned int, int, int, int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_0024162c(...); /* 0x24162c */
extern int FUN_002907b0(...); /* 0x2907b0 */
extern int FUN_002b27d4(...); /* 0x2b27d4 */
extern int FUN_002b28d8(...); /* 0x2b28d8 */
extern int FUN_002fd93c(...); /* 0x2fd93c */
extern int FUN_00336ef0(...); /* 0x336ef0 */
extern int FUN_0034f0b4(...); /* 0x34f0b4 */
extern int FUN_0034f1bc(...); /* 0x34f1bc */
extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_00312830. */
/* Supplied declaration required: FUN_004a8750. */


void FUN_002174f4(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned char *pbVar9;
  
  temp_v0 = DAT_0057f290;
  temp_v2 = FUN_0026140c();
  pbVar9 = (unsigned char *)(temp_v2 + 0x13);
  temp_v1 = ~(*(unsigned char *)(temp_v2 + 0x13) >> 7) & 1;
  if ((*(unsigned char *)(temp_v2 + 0x13) & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_002b27d4);
    }
    else {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_0034f0b4);
    }
  }
  if ((*pbVar9 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_0024162c);
    }
    else {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_002fd93c);
    }
  }
  if ((*pbVar9 & 0x7f) == 7) {
    temp_v4 = 0;
    if (*(int *)(temp_v0 + 0x73ec) != 0) {
      do {
        temp_v2 = temp_v0 + temp_v4 * 2;
        temp_v5 = 0;
        temp_v6 = temp_v0 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6832) * 8;
        puVar8 = (unsigned int *)(temp_v6 + 0x13b8);
        temp_v3 = *puVar8;
        if (temp_v3 >> 0x1e == 3) {
          temp_v5 = temp_v3 & 0x7fff;
          FUN_004a8750(temp_v5,1,0,0,0);
        }
        if ((*(unsigned int *)(temp_v6 + 0x13bc) & 3) == 3) {
          temp_v3 = (*puVar8 & 0x3fffffff) >> 0xf;
          FUN_004a8750(temp_v3,1,0,0,0);
          temp_v5 = temp_v5 + temp_v3;
        }
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(temp_v0 + (unsigned int)*(unsigned short *)(temp_v2 + 0x6832) * 4 + 0x73f0) = temp_v5;
      } while (temp_v4 < *(unsigned int *)(temp_v0 + 0x73ec));
    }
    if (temp_v1 != 0) {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_002b28d8);
    }
    else {
      FUN_0010063a(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_0034f1bc);
    }
  }
  if ((*pbVar9 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_00312830(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_002907b0);
      return;
    }
    FUN_00312830(temp_v0 + 0x6832,*(unsigned int *)(temp_v0 + 0x73ec),2,FUN_00336ef0);
    return;
  }
  return;
}

} /* extern "C" */
