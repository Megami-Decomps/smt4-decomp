/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc5cc` (_code @ 0x2dc5cc, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00249a44. */
/* Supplied declaration required: FUN_0025779c. */
/* Supplied declaration required: FUN_002840b8. */
extern int FUN_002a89e4(void);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002ae464(unsigned int);


void FUN_002dc5cc(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v1 = (unsigned int)*param_1;
  FUN_00249a44();
  temp_v2 = (unsigned int)*param_2;
  FUN_00249a44();
  temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  temp_v6 = 0;
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x26);
  temp_v8 = 0;
  temp_v3 = FUN_002ae464(temp_v5);
  if (temp_v3 != 0) {
    temp_v1 = temp_v5;
    FUN_002840b8();
    temp_v4 = *(short *)(temp_v1 + 0x22);
  }
  else {
    temp_v1 = temp_v5;
    FUN_002ae3f0();
    temp_v4 = *(short *)(temp_v1 + 0x24);
  }
  temp_v3 = FUN_002ae464(temp_v7);
  if (temp_v3 != 0) {
    temp_v1 = temp_v7;
    FUN_002840b8();
    temp_v0 = *(short *)(temp_v1 + 0x22);
  }
  else {
    temp_v1 = temp_v7;
    FUN_002ae3f0();
    temp_v0 = *(short *)(temp_v1 + 0x24);
  }
  if (temp_v4 == temp_v0) {
    if (temp_v6 < 0) {
      temp_v4 = 0;
    }
    else {
      temp_v3 = FUN_002a89e4();
      temp_v4 = *(short *)(temp_v3 + 0x46);
    }
    if (temp_v8 < 0) {
      temp_v0 = 0;
    }
    else {
      temp_v3 = FUN_002a89e4();
      temp_v0 = *(short *)(temp_v3 + 0x46);
    }
    if (temp_v4 == temp_v0) {
      FUN_0025779c(&temp_v5,&temp_v7);
    }
  }
  return;
}
