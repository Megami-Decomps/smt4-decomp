/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d64c` (_code @ 0x26d64c, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026ce10. */
/* Supplied declaration required: FUN_0028cd9c. */
/* Supplied declaration required: FUN_00292e88. */
/* Supplied declaration required: FUN_00298fc4. */
/* Supplied declaration required: FUN_0029eba8. */
extern int FUN_0029f248(unsigned int);
extern int FUN_002a8a08(void);


void FUN_0026d64c(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = FUN_002a8a08();
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  if (param_2 != 0) {
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v2 = FUN_0029eba8();
      temp_v1 = FUN_0029f248(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4;
    }
    else {
      temp_v1 = FUN_0029f248(param_1);
      temp_v4 = *(int *)(temp_v0 + 0x2c);
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v1 * 4 + temp_v4 * 0xc + temp_v2;
    }
  }
  else {
    temp_v2 = FUN_0029f248(param_1);
    if (temp_v2 < 1) {
      temp_v2 = FUN_0029eba8(param_1);
      if (temp_v2 != 0) {
        FUN_0028cd9c((int)*(char *)(temp_v1 + temp_v2 + 0x9107),*(unsigned short *)(temp_v0 + 0x36),&temp_v5,
                     &temp_v6);
        temp_v4 = (int)*(char *)(temp_v1 + temp_v2 + 0x9107);
      }
      else {
        FUN_0028cd9c(0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v5,&temp_v6);
      }
      FUN_00292e88(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x6c8),temp_v5,temp_v6);
      FUN_00298fc4(temp_v5,temp_v6);
      temp_v3 = 0;
      FUN_0026ce10(temp_v4,temp_v2,temp_v3);
      return;
    }
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v2 = FUN_0029eba8();
      temp_v1 = FUN_0029f248(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4;
    }
    else {
      temp_v1 = FUN_0029f248(param_1);
      temp_v4 = *(int *)(temp_v0 + 0x2c);
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v2 + temp_v1 * 4 + temp_v4 * 0xc;
    }
    temp_v2 = temp_v2 - 4;
  }
  temp_v1 = temp_v0 + temp_v2 * 8;
  FUN_0028cd9c(*(unsigned int *)(temp_v1 + 0x738),*(unsigned short *)(temp_v0 + 0x36),&temp_v5,&temp_v6);
  FUN_00292e88(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x6d8),temp_v5,temp_v6);
  FUN_00298fc4(temp_v5,temp_v6);
  temp_v4 = *(int *)(temp_v1 + 0x738);
  temp_v3 = 1;
  FUN_0026ce10(temp_v4,temp_v2,temp_v3);
  return;
}
