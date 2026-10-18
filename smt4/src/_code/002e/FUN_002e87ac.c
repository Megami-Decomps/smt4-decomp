/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e87ac` (_code @ 0x2e87ac, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e8984; /* 0x2e8984 */
extern unsigned char LAB_002e89c0; /* 0x2e89c0 */
extern unsigned char LAB_002e8a00; /* 0x2e8a00 */
extern unsigned char LAB_002e8a20; /* 0x2e8a20 */
extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_0025086c. */
/* Supplied declaration required: FUN_002532f8. */
/* Supplied declaration required: FUN_0027e774. */
extern unsigned int FUN_002bcfc0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002be650(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);
extern unsigned int FUN_002bfdd4(void);


void FUN_002e87ac(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [12];
  
  temp_v2 = DAT_00447a78;
  temp_v0 = FUN_002bfdd4();
  temp_v3 = 0x7a906;
  *(unsigned char *)(temp_v2 + 0x18) = 1;
  *(unsigned int *)(temp_v2 + 0x1c) = 0;
  temp_v2 = 0;
  switch(param_1) {
  case 0:
    FUN_002be624(temp_v4,&LAB_002e8984);
    temp_v2 = temp_v3;
    break;
  case 1:
    FUN_0025086c(param_3,temp_v5);
    FUN_002be624(temp_v4,&LAB_002e89c0,temp_v5);
    temp_v2 = 0x61abf;
    break;
  case 2:
  case 3:
  case 5:
    temp_v1 = FUN_002be650(param_2,0);
    FUN_0025086c(param_3,temp_v5);
    temp_v1 = FUN_002bcfc0(temp_v1,0);
    FUN_002be624(temp_v4,&LAB_002e8a00,temp_v1,temp_v5);
    break;
  case 4:
    temp_v1 = FUN_002be650(param_2,0);
    temp_v1 = FUN_002bcfc0(temp_v1,0);
    FUN_002be624(temp_v4,&LAB_002e8a20,temp_v1);
    temp_v2 = temp_v3;
  }
  FUN_002532f8(temp_v4);
  FUN_0027e774(0,1);
  if ((temp_v2 == 0) && (temp_v2 = temp_v3, param_3 != 0)) {
    if (param_3 == 1) {
      temp_v2 = 0x7a8f9;
    }
    else if (param_3 == 2) {
      temp_v2 = 0x7a8fa;
    }
    else if (param_3 == 3) {
      temp_v2 = 0x7a8fb;
    }
    else if (param_3 == 4) {
      temp_v2 = 0x7a8fc;
    }
    else if (param_3 == 5) {
      temp_v2 = 0x7a8fd;
    }
    else if (param_3 == 10) {
      temp_v2 = 0x7a8fe;
    }
    else if (param_3 == 0xf) {
      temp_v2 = 0x7a8ff;
    }
    else if (param_3 == 0x14) {
      temp_v2 = 0x7a900;
    }
    else {
      temp_v2 = 0x7a901;
    }
  }
  temp_v1 = FUN_002bfdc4();
  FUN_002bfc24(1,temp_v2,temp_v1,temp_v0 | 4);
  return;
}
