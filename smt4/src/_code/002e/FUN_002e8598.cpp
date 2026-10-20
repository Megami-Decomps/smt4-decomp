/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e8598` (_code @ 0x2e8598, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025086c(int, unsigned char [8]);
int dialogSetText(unsigned char [128]);
int dialogOpen(int, int);
int FUN_002bcfc0(void);
int FUN_002bd06c(unsigned int);
int FUN_002be624(...);
int FUN_002bfc24(int, int, unsigned int, unsigned int);

extern unsigned char LAB_002e8724; /* 0x2e8724 */
extern unsigned char LAB_002e8764; /* 0x2e8764 */
extern int g_mapIf; /* 0x447a78 */

/* Supplied declaration required: FUN_0025086c. */
/* Supplied declaration required: dialogSetText. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);
extern unsigned int FUN_002bfdd4(void);


void FUN_002e8598(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [8];
  
  temp_v0 = g_mapIf;
  temp_v3 = 0;
  temp_v1 = FUN_002bfdd4();
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  switch(param_1) {
  case 6:
  case 10:
    *(unsigned char *)(temp_v0 + 0x18) = 0;
    return;
  case 7:
    FUN_0025086c(param_3,temp_v5);
    FUN_002be624(temp_v4,&LAB_002e8724,temp_v5);
    temp_v3 = 0x61abf;
    break;
  case 8:
  case 9:
  case 0xb:
    FUN_0025086c(param_3,temp_v5);
    FUN_002bd06c(param_2);
    FUN_002bcfc0();
    FUN_002be624(temp_v4,&LAB_002e8764,param_2,temp_v5);
  }
  dialogSetText(temp_v4);
  dialogOpen(0,1);
  if (temp_v3 == 0) {
    if (param_3 == 0) {
      return;
    }
    if (param_3 == 1) {
      temp_v3 = 0x7a8f0;
    }
    else if (param_3 == 2) {
      temp_v3 = 0x7a8f1;
    }
    else if (param_3 == 3) {
      temp_v3 = 0x7a8f2;
    }
    else if (param_3 == 4) {
      temp_v3 = 0x7a8f3;
    }
    else if (param_3 == 5) {
      temp_v3 = 0x7a8f4;
    }
    else if (param_3 == 10) {
      temp_v3 = 0x7a8f5;
    }
    else if (param_3 == 0xf) {
      temp_v3 = 0x7a8f6;
    }
    else if (param_3 == 0x14) {
      temp_v3 = 0x7a8f7;
    }
    else {
      temp_v3 = 0x7a8f8;
    }
  }
  temp_v2 = FUN_002bfdc4();
  FUN_002bfc24(1,temp_v3,temp_v2,temp_v1 | 4);
  return;
}

} /* extern "C" */
