/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210fb0` (_code @ 0x210fb0, 0x310 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
extern int FUN_00259a18(void);
extern int FUN_00263164(void);
/* Supplied declaration required: FUN_0028c13c. */
/* Supplied declaration required: FUN_0028c194. */
extern int FUN_002958a0(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00295cbc. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972e8. */
/* Supplied declaration required: FUN_0029f088. */
extern unsigned int FUN_002be828(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */


/* WARNING: Removing unreachable block (ram,0x00211268) */

unsigned int FUN_00210fb0(int param_1)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
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
    temp_v2 = FUN_002958a0();
    if (temp_v2 == 0) {
      return 0;
    }
    FUN_002971e4(*(unsigned int *)(param_1 + 0xd08),1);
    temp_v2 = *(int *)(param_1 + 0xd38) + 1;
    break;
  case 1:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd08));
    if (temp_v2 == 2) {
      *piVar5 = *(int *)(param_1 + 0xd38) + 1;
      *(unsigned int *)(param_1 + 0xd50) = 0;
      return 0;
    }
    return 0;
  case 2:
    temp_v6[0] = 0xc000b;
    temp_v2 = *(int *)(param_1 + *(int *)(param_1 + 0xd50) * 4 + 0xd48);
    if ((0 < temp_v2) && (temp_v0 = FUN_00259a18(), temp_v0 == 0)) {
      FUN_0029f088(1,temp_v2,0xffffffff,0);
      temp_v4 = FUN_002be828(*(unsigned short *)((int)temp_v6 + *(int *)(param_1 + 0xd50) * 2),1);
      FUN_002bf86c(temp_v5,temp_v4);
      FUN_00295904(0,temp_v5);
      FUN_002971e4(*(unsigned int *)(param_1 + 0xd04),0xf);
      *(unsigned int *)(param_1 + 0xd38) = 3;
      FUN_00295cbc(*(unsigned short *)((int)temp_v6 + *(int *)(param_1 + 0xd50) * 2),temp_v2);
      FUN_002972e8(1);
      return 0;
    }
    temp_v2 = FUN_00259a18();
    if (temp_v2 == 0) {
      temp_v2 = *(int *)(param_1 + 0xd50) + 1;
      *(int *)(param_1 + 0xd50) = temp_v2;
      goto joined_r0x00211178;
    }
    temp_v4 = 4;
    *(unsigned int *)(param_1 + 0xd38) = temp_v4;
    return 0;
  case 3:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v2 != 2) {
      return 0;
    }
    temp_v2 = *(int *)(param_1 + 0xd50) + 1;
    *(int *)(param_1 + 0xd50) = temp_v2;
joined_r0x00211178:
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
          temp_v3 = FUN_002be828(*(unsigned short *)(temp_v2 + 0xd0c),1);
          FUN_002bf86c(temp_v5,temp_v3);
          FUN_00295904(0,temp_v5);
          FUN_00295cbc(*(unsigned short *)(temp_v2 + 0xd0c),1);
          *(unsigned short *)(temp_v2 + 0xd0c) = 0;
          FUN_002971e4(*(unsigned int *)(param_1 + 0xd04),0xe);
          *piVar5 = *(int *)(param_1 + 0xd38) + 1;
          goto LAB_002111fc;
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
        FUN_0028c13c();
        return 0;
      }
      temp_v3 = 4;
    }
    *(unsigned int *)(param_1 + 0xd38) = 0;
    temp_v4 = 2;
    *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
    return temp_v4;
  case 5:
LAB_002111fc:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd04));
    if (temp_v2 != 2) {
      return 0;
    }
    temp_v2 = *(int *)(param_1 + 0xd38) - 1;
    break;
  default:
    return temp_v4;
  case 10:
    temp_v2 = FUN_00263164();
    if (temp_v2 == 0) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0xd38) = 0;
    FUN_0028c194();
    temp_v3 = 6;
    temp_v4 = 2;
    *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
    return temp_v4;
  }
  *piVar5 = temp_v2;
  return temp_v4;
}
