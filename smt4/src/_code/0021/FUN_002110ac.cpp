/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002110ac` (_code @ 0x2110ac, 0x310 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlTalkBustUpReleaseAllSlots(void);
int FUN_0028bf2c(void);
int FUN_00295660(int, unsigned char [128]);
int FUN_00295a18(int, int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_00297050(int);
int FUN_0029ede8(int, int, unsigned int, int);
int FUN_002be650(unsigned int, int);
int libc_strcpy(unsigned char [128], unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
extern int FUN_002597e0(void);
extern int FUN_00262f38(void);
/* Supplied declaration required: btlTalkBustUpReleaseAllSlots. */
/* Supplied declaration required: FUN_0028bf2c. */
extern int FUN_002955fc(void);
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297050. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: libc_strcpy. */


/* WARNING: Removing unreachable block (ram,0x00211364) */

unsigned int FUN_002110ac(int param_1)

{
/* irregular: 2 goto(s); 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  unsigned int temp_v6 [2];
  
  piVar5 = (int *)(param_1 + 0xd38);
  temp_v4 = 0;
  switch(*(unsigned int *)(param_1 + 0xd38)) {
  case 0:
    temp_v2 = FUN_002955fc();
    if (temp_v2 == 0) {
      return 0;
    }
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd08),1);
    temp_v2 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 1:
    temp_v2 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd08));
    if (temp_v2 == 2) {
      *piVar5 = *(int *)(param_1 + 0xd38) + 1;
      *(unsigned int *)(param_1 + 0xd50) = 0;
      return 0;
    }
    return 0;
  case 2:
    temp_v6[0] = 0xc000b;
    temp_v2 = *(int *)(param_1 + *(int *)(param_1 + 0xd50) * 4 + 0xd48);
    if ((0 < temp_v2) && (temp_v0 = FUN_002597e0(), temp_v0 == 0)) {
      FUN_0029ede8(1,temp_v2,0xffffffff,0);
      temp_v1 = (unsigned int)*(unsigned short *)((int)temp_v6 + *(int *)(param_1 + 0xd50) * 2);
      FUN_002be650(temp_v1,1);
      libc_strcpy(temp_v5,temp_v1);
      FUN_00295660(0,temp_v5);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd04),0xf);
      *(unsigned int *)(param_1 + 0xd38) = 3;
      FUN_00295a18(*(unsigned short *)((int)temp_v6 + *(int *)(param_1 + 0xd50) * 2),temp_v2);
      FUN_00297050(1);
      return 0;
    }
    temp_v2 = FUN_002597e0();
    if (temp_v2 == 0) {
      temp_v2 = *(int *)(param_1 + 0xd50) + 1;
      *(int *)(param_1 + 0xd50) = temp_v2;
      goto joined_r0x00211274;
    }
    temp_v4 = 4;
    *(unsigned int *)(param_1 + 0xd38) = temp_v4;
    return 0;
  case 3:
    temp_v2 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v2 != 2) {
      return 0;
    }
    temp_v2 = *(int *)(param_1 + 0xd50) + 1;
    *(int *)(param_1 + 0xd50) = temp_v2;
joined_r0x00211274:
    if (temp_v2 < 2) {
      temp_v4 = 2;
    }
    else {
      temp_v4 = 4;
    }
    *(unsigned int *)(param_1 + 0xd38) = temp_v4;
    return 0;
  case 4:
    temp_v2 = 0;
    if (0 < *(int *)(param_1 + 0xd3c)) {
      do {
        if (*(short *)(param_1 + temp_v2 * 2 + 0xd0c) != 0) {
          temp_v2 = param_1 + temp_v2 * 2;
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0xd0c);
          FUN_002be650(temp_v1,1);
          libc_strcpy(temp_v5,temp_v1);
          FUN_00295660(0,temp_v5);
          FUN_00295a18(*(unsigned short *)(temp_v2 + 0xd0c),1);
          *(unsigned short *)(temp_v2 + 0xd0c) = 0;
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd04),0xe);
          *piVar5 = *(int *)(param_1 + 0xd38) + 1;
          goto LAB_002112f8;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(param_1 + 0xd3c));
    }
    temp_v1 = *(unsigned int *)(param_1 + 0xd58);
    *(unsigned int *)(param_1 + 0xd58) = temp_v1 & 0xfffffffd;
    if ((temp_v1 & 8) != 0) {
      temp_v3 = 2;
    }
    else if ((temp_v1 & 1) != 0) {
      temp_v3 = 3;
    }
    else {
      if ((temp_v1 & 4) == 0) {
        *(unsigned int *)(param_1 + 0xd38) = 10;
        btlTalkBustUpReleaseAllSlots();
        return 0;
      }
      temp_v3 = 4;
    }
    *(unsigned int *)(param_1 + 0xd38) = 0;
    temp_v4 = 2;
    *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
    return temp_v4;
  case 5:
LAB_002112f8:
    temp_v2 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v2 != 2) {
      return 0;
    }
    temp_v2 = *(int *)(param_1 + 0xd38) - 1;
    break;
  default:
    return temp_v4;
  case 10:
    temp_v2 = FUN_00262f38();
    if (temp_v2 == 0) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0xd38) = 0;
    FUN_0028bf2c();
    temp_v3 = 6;
    temp_v4 = 2;
    *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
    return temp_v4;
  }
  *piVar5 = temp_v2;
  return temp_v4;
}

} /* extern "C" */
