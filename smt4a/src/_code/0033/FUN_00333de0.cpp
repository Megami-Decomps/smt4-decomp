/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333de0` (_code @ 0x333de0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int dataTableValueOrZero(...);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_002a1f60(...);
int FUN_002e08b0(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int g_aocSystem; /* 0x570280 */
extern int g_statusDown; /* 0x588fe8 */

/* Supplied declaration required: sysPlaySe. */
extern unsigned int FUN_001688c4(unsigned int);
/* Supplied declaration required: dataTableValueOrZero. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_002c7e3c(void);
/* Supplied declaration required: FUN_002e08b0. */
extern int FUN_0031f6fc(void);
extern int fieldStateAllowsAction(void);
extern int FUN_0046fca8(unsigned int, int);


void FUN_00333de0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_statusDown;
  if (((*(short *)(g_statusDown + 0x598) < 0) && (-1 < param_1)) &&
     (*(char *)(g_statusDown + 0x514) == '\x01')) {
    temp_v1 = FUN_002c7e3c();
    if (temp_v1 == 0xe || temp_v1 == 7) {
      temp_v2 = 0x33;
      sysPlaySe(temp_v2);
    }
    else if ((!(temp_v1 == 9 || temp_v1 == 10)) && (!(temp_v1 == 0xc || temp_v1 == 8))) {
      if ((temp_v1 != 2 && temp_v1 != 4) && temp_v1 != 0x11) {
        sysPlaySe(0x2d);
      }
      else {
        temp_v1 = fieldStateAllowsAction();
        if (temp_v1 == 0) {
          temp_v2 = 0x29;
        }
        else {
          temp_v2 = 0xfa;
        }
        sysPlaySe(temp_v2);
      }
    }
    else {
      temp_v2 = 0x62;
      sysPlaySe(temp_v2);
    }
  }
  *(short *)(temp_v0 + 0x598) = (short)param_1;
  if ((param_1 >= 0) && (temp_v1 = FUN_0031f6fc(), temp_v1 != 0)) {
    temp_v1 = FUN_0046fca8(g_aocSystem,param_1);
    if (temp_v1 == 0) {
      temp_v1 = dataTableValueOrZero();
    }
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x23b8),3,0xffffffff,0,3,temp_v1,param_1);
  }
  else {
    temp_v2 = dataTableValueOrZero(0x3f);
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x23b8),3,0xffffffff,0,3,temp_v2,0);
  }
  temp_v2 = FUN_001688c4(*(unsigned int *)(temp_v0 + 0x23b8));
  FUN_00203b40(temp_v0 + 0x23c0,temp_v2,10,1,0,1);
  FUN_002e08b0(temp_v0 + 0x23c0,0);
  *(unsigned char *)(temp_v0 + 0x528) = 1;
  return;
}

} /* extern "C" */
