/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a5d5c` (_code @ 0x4a5d5c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00184310(void);
int FUN_0023b45c(int);
int FUN_002a7324(int);
int FUN_0031f718(int, int, int);
int FUN_00372048(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0023b3b8(void);
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002a7324. */
extern int statusDownGetFlag(void);
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_00372048. */
extern int FUN_003b70e0(int);
extern int flaggedValueHolderGetTotal(int);


void FUN_004a5d5c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  if (*(short *)(param_1 + 0x864) != 0) {
    temp_v3 = param_1 + 0x864;
    temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0x20 + 4);
    temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x20);
    if (*(char *)(temp_v3 + temp_v0 * 0x20 + 0x1c) == '\0') {
      temp_v2 = 0;
    }
    temp_v0 = FUN_0023b3d0();
    if ((temp_v0 == 0) || (*(unsigned short *)(param_1 + 0xa870) == temp_v2)) {
      return;
    }
    *(short *)(param_1 + 0xa870) = (short)temp_v2;
    if (temp_v2 != 0) {
      FUN_0031f718((int)(short)temp_v2,1,0);
      FUN_002a7324(1);
      temp_v1 = statusDownGetFlag();
      temp_v0 = FUN_0023b3b8();
      FUN_00184310();
      if (((*(unsigned char *)(temp_v2 + 0xb3) & 2) != 0) && (temp_v1 == 5)) {
        temp_v1 = 1;
        temp_v0 = temp_v1;
      }
      FUN_00372048(temp_v0);
      temp_v0 = FUN_003b70e0(temp_v1);
      if (temp_v0 != 0) {
        sysPlaySe();
        return;
      }
      if (*(char *)(param_1 + 0x860) != '\0') {
        sysPlaySe(0x48);
        return;
      }
      temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x20);
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0x20 + 4);
      FUN_00184310();
      if ((*(unsigned char *)(temp_v2 + 0xb3) & 2) == 0) {
        sysPlaySe(0x30);
        return;
      }
      sysPlaySe(0x121);
      return;
    }
  }
  FUN_0023b45c(0);
  return;
}

} /* extern "C" */
