/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeb0c` (_code @ 0x3aeb0c, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00218384. */
/* Supplied declaration required: FUN_00249acc. */
/* Supplied declaration required: FUN_0028c204. */
/* Supplied declaration required: FUN_0028c214. */
/* Supplied declaration required: FUN_0028c24c. */
extern int FUN_0028c850(int);
/* Supplied declaration required: FUN_0028cde4. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b4854. */


void FUN_003aeb0c(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  short temp_v4 [2];
  short temp_v5 [4];
  
  temp_v0 = DAT_00439ca8;
  puVar5 = (unsigned char *)(DAT_00439ca8 + 0x7e48);
  *puVar5 = 0;
  temp_v5[0] = 0;
  temp_v4[0] = 0;
  temp_v1 = temp_v0 + 0x2460;
  FUN_0028cde4(temp_v1,temp_v5,temp_v4);
  if (!(temp_v5[0] == 2 || temp_v5[0] == 3)) {
    if (temp_v5[0] == 8) {
      temp_v2 = (int)temp_v4[0];
      FUN_002b4854();
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
      if (temp_v3 != 0) {
        FUN_002ae3f0();
        temp_v3 = *(unsigned int *)(temp_v3 + 0x28);
        if (!(((temp_v3 & 0x1ff) >> 5 != 2 && (temp_v3 & 0x1ff) >> 5 != 3) && (temp_v3 & 0x1ff) >> 5 != 4)
           ) {
          *puVar5 = 1;
        }
      }
      else {
        temp_v2 = (int)temp_v4[0];
        FUN_002b4854();
        if ((*(unsigned char *)(temp_v2 + 0x6a) & 0x7f) != 1) {
          *puVar5 = 1;
        }
      }
    }
  }
  else {
    temp_v2 = (int)temp_v4[0];
    FUN_002ae3f0();
    temp_v3 = *(unsigned int *)(temp_v2 + 0x28);
    if (!(((temp_v3 & 0x1ff) >> 5 != 2 && (temp_v3 & 0x1ff) >> 5 != 3) && (temp_v3 & 0x1ff) >> 5 != 4)) {
      *puVar5 = 1;
    }
  }
  if (*(char *)(temp_v0 + 0x7e48) != '\0') {
    *(unsigned int *)(temp_v0 + 0x7e38) = 0xc;
    FUN_00218384(temp_v1);
  }
  else {
    *(unsigned int *)(temp_v0 + 0x7e38) = 8;
    FUN_0028c24c(temp_v1);
    temp_v0 = DAT_00439ca8;
    temp_v1 = FUN_0028c850(DAT_00439ca8 + 8);
    if (temp_v1 != 0) {
      temp_v1 = temp_v0 + 0x2200;
      FUN_00249acc();
      if (temp_v1 != 0) {
        FUN_0028c214(temp_v0 + 8);
        FUN_0028c204(temp_v0 + 0x2200);
        return;
      }
    }
  }
  return;
}
