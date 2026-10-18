/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d3b0` (_code @ 0x26d3b0, 0x290 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_002623ec. */
extern int FUN_0027eb98(void);
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00298fc4. */
extern int FUN_0029abc0(unsigned short);
extern int FUN_0029ac70(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0029eba8. */
extern int FUN_0029f248(unsigned int);
extern int FUN_002a8a08(void);


void FUN_0026d3b0(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = DAT_0043dcf0;
  temp_v6 = param_4;
  temp_v2 = FUN_002a8a08();
  temp_v6 = 0;
  if (((*(short *)(temp_v5 + 0x36) == 0x7d) && (temp_v3 = FUN_00293c98(), temp_v3 != 0)) &&
     (DAT_0043427c != 0)) {
    temp_v3 = FUN_0027eb98();
    if ((*(int *)(temp_v3 + 0x28) != 0) && (*(short *)(*(int *)(temp_v3 + 0x28) + 0x14c) == 8))
    goto LAB_0026d4c8;
  }
  if (*(short *)(temp_v5 + 0x38) >= 0) {
    temp_v3 = 0;
    do {
      if ((int)*(char *)(temp_v2 + temp_v3 + 0x9108) == (int)*(short *)(temp_v5 + 0x38)) {
        temp_v4 = FUN_0029abc0(*(unsigned short *)(temp_v5 + 0x36));
        *(int *)(*(int *)(temp_v5 + temp_v3 * 4 + 0x6cc) + 0x44) = -temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      if (*(int *)(temp_v5 + temp_v3 * 8 + 0x738) == (int)*(short *)(temp_v5 + 0x38)) {
        temp_v4 = FUN_0029abc0(*(unsigned short *)(temp_v5 + 0x36));
        *(int *)(*(int *)(temp_v5 + temp_v3 * 4 + 0x6d8) + 0x44) = -temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
  }
  else {
    temp_v3 = FUN_0029ac70(*(unsigned short *)(temp_v5 + 0x36),1);
    *(int *)(*(int *)(temp_v5 + 0x6c8) + 0x44) = -temp_v3;
  }
LAB_0026d4c8:
  if (param_2 != 0) {
    if (*(char *)(temp_v5 + 0x42) != '\0') {
      temp_v2 = FUN_0029eba8();
      temp_v3 = FUN_0029f248(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_0029f248(param_1);
      temp_v4 = *(int *)(temp_v5 + 0x2c);
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v3 * 4 + temp_v4 * 0xc + temp_v2;
    }
  }
  else {
    temp_v3 = FUN_0029f248(param_1);
    if (temp_v3 < 1) {
      temp_v3 = FUN_0029eba8(param_1);
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned short *)(temp_v5 + 0x36);
        temp_v2 = (int)*(char *)(temp_v2 + temp_v3 + 0x9107);
        temp_v1 = *(short *)(temp_v5 + 0x38);
      }
      else {
        temp_v0 = *(unsigned short *)(temp_v5 + 0x36);
        temp_v1 = *(short *)(temp_v5 + 0x38);
        temp_v2 = -1;
      }
      FUN_002623ec((int)temp_v1,temp_v2,temp_v0,&temp_v6);
      temp_v5 = temp_v5 + temp_v3 * 4;
      *(unsigned int *)(*(int *)(temp_v5 + 0x6c8) + 0x40) = temp_v6;
      FUN_00298fc4(temp_v6,*(unsigned int *)(*(int *)(temp_v5 + 0x6c8) + 0x44));
      return;
    }
    if (*(char *)(temp_v5 + 0x42) != '\0') {
      temp_v2 = FUN_0029eba8();
      temp_v3 = FUN_0029f248(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_0029f248(param_1);
      temp_v4 = *(int *)(temp_v5 + 0x2c);
      temp_v2 = FUN_0029eba8(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4 + temp_v4 * 0xc;
    }
    temp_v2 = temp_v2 - 4;
  }
  FUN_002623ec((int)*(short *)(temp_v5 + 0x38),*(unsigned int *)(temp_v5 + temp_v2 * 8 + 0x738),
               *(unsigned short *)(temp_v5 + 0x36),&temp_v6);
  temp_v5 = temp_v5 + temp_v2 * 4;
  *(unsigned int *)(*(int *)(temp_v5 + 0x6d8) + 0x40) = temp_v6;
  FUN_00298fc4(temp_v6,*(unsigned int *)(*(int *)(temp_v5 + 0x6d8) + 0x44));
  return;
}
