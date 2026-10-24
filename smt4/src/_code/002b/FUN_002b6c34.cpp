/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6c34` (_code @ 0x2b6c34, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001386f8(void);
int dataTable40FindById(void);
int FUN_002ae9ec(int, int, unsigned int, int, int, int);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(void);
int FUN_002bed3c(void);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char LAB_002b6da8; /* 0x2b6da8 */
extern unsigned char LAB_002b6dac; /* 0x2b6dac */

/* Supplied declaration required: FUN_001386f8. */
extern int playerGetSkillRank(unsigned int);
/* Supplied declaration required: dataTable40FindById. */
extern int idIsAbove400(void);
extern unsigned int categoryIdFromIndex(unsigned int);
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_002b6c34(unsigned int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 == 0xffffffff) {
    temp_v0 = 0x3ef;
  }
  else if (param_1 == 0xfffffffe) {
    temp_v0 = 0x3f0;
  }
  else if (param_1 == 0xfffffffd) {
    temp_v0 = 0x3f6;
  }
  else {
    temp_v1 = idIsAbove400();
    if (temp_v1 != 0) {
      temp_v0 = 0x419;
    }
    else {
      temp_v2 = param_1;
      dataTable40FindById();
      if (temp_v2 == 0) {
        temp_v0 = 1000;
      }
      else {
        temp_v0 = categoryIdFromIndex(*(unsigned int *)(temp_v2 + 0x28) & 0x1f);
      }
    }
  }
  FUN_002ae9ec(2,0x13,temp_v0,param_2,param_3,param_4);
  if (param_5 != 0) {
    temp_v1 = playerGetSkillRank(param_1);
    temp_v2 = (temp_v1 + param_6) & 0xff;
    FUN_001386f8();
    if ((int)param_1 < (int)temp_v2) {
      temp_v2 = param_1 & 0xff;
    }
    if (temp_v2 >= 2) {
      drawSetColorFromRGBA8();
      temp_v1 = FUN_002bf4f8(0x13,0x402);
      FUN_002bdf94(2,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0,1,
                   param_4 + 1,&LAB_002b6da8);
      temp_v1 = FUN_002bf4f8(0x13,0x401);
      FUN_002bdf94(2,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0,1,
                   param_4 + 1,&LAB_002b6dac,temp_v2 - 1);
      FUN_002bed3c();
      return;
    }
  }
  return;
}

} /* extern "C" */
