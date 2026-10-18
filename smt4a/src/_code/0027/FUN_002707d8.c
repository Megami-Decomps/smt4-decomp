/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002707d8` (_code @ 0x2707d8, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002a4894(unsigned int);
/* Supplied declaration required: FUN_002cbca8. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_003f525c. */
/* Supplied declaration required: FUN_0047fbf0. */


void FUN_002707d8(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0057f268;
  temp_v1 = FUN_001ab888();
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  if (param_2 != 0) {
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v2 = FUN_002a4878();
      temp_v1 = FUN_002a4894(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4;
    }
    else {
      temp_v1 = FUN_002a4894(param_1);
      temp_v4 = *(int *)(temp_v0 + 0x2c);
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v1 * 4 + temp_v4 * 0xc + temp_v2;
    }
  }
  else {
    temp_v2 = FUN_002a4894(param_1);
    if (temp_v2 < 1) {
      temp_v2 = FUN_002a4878(param_1);
      if (temp_v2 != 0) {
        FUN_0047fbf0((int)*(char *)(temp_v1 + temp_v2 + 0x1c9f),*(unsigned short *)(temp_v0 + 0x36),&temp_v5,
                     &temp_v6);
        temp_v4 = (int)*(char *)(temp_v1 + temp_v2 + 0x1c9f);
      }
      else {
        FUN_0047fbf0(0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v5,&temp_v6);
      }
      FUN_003f525c(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0xa10),temp_v5,temp_v6);
      FUN_003344b4(temp_v5,temp_v6);
      temp_v3 = 0;
      FUN_002cbca8(temp_v4,temp_v2,temp_v3);
      return;
    }
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v2 = FUN_002a4878();
      temp_v1 = FUN_002a4894(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4;
    }
    else {
      temp_v1 = FUN_002a4894(param_1);
      temp_v4 = *(int *)(temp_v0 + 0x2c);
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4 + temp_v4 * 0xc;
    }
    temp_v2 = temp_v2 - 4;
  }
  temp_v1 = temp_v0 + temp_v2 * 8;
  FUN_0047fbf0(*(unsigned int *)(temp_v1 + 0xa80),*(unsigned short *)(temp_v0 + 0x36),&temp_v5,&temp_v6);
  FUN_003f525c(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0xa20),temp_v5,temp_v6);
  FUN_003344b4(temp_v5,temp_v6);
  temp_v4 = *(int *)(temp_v1 + 0xa80);
  temp_v3 = 1;
  FUN_002cbca8(temp_v4,temp_v2,temp_v3);
  return;
}
