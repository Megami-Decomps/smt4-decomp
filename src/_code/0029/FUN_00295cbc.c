/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295cbc` (_code @ 0x295cbc, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00282e54(void);
extern int *FUN_002b492c(unsigned int);
extern unsigned int FUN_002b9100(unsigned int);
/* Supplied declaration required: FUN_003490e0. */


void FUN_00295cbc(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char *pbVar3;
  unsigned int temp_v1;
  unsigned short *puVar5;
  int temp_v2;
  
  if (param_2 == 0) {
    return;
  }
  FUN_003490e0(param_1 & 0xffff);
  piVar1 = (int *)FUN_002b492c(param_1);
  if (piVar1 != (int *)0x0) {
    temp_v2 = piVar1[2];
    temp_v0 = FUN_00282e54();
    switch((char)temp_v2) {
    case 0:
      break;
    case 1:
      temp_v0 = temp_v0 + 0xf0;
      break;
    case 2:
      temp_v0 = temp_v0 + 0x168;
      break;
    case 3:
      temp_v0 = temp_v0 + 600;
      break;
    case 4:
      temp_v0 = temp_v0 + 0x348;
      break;
    case 5:
      temp_v0 = temp_v0 + 0x438;
      break;
    case 6:
      temp_v0 = temp_v0 + 0x528;
      break;
    case 7:
      temp_v0 = temp_v0 + 0x618;
      break;
    case 8:
      temp_v0 = temp_v0 + 0x708;
      break;
    case 9:
      temp_v0 = temp_v0 + 0x76c;
      break;
    case 10:
      temp_v0 = temp_v0 + 0x8fc;
      break;
    case 0xb:
      temp_v0 = temp_v0 + 0xf3c;
      break;
    default:
      temp_v0 = 0;
    }
    temp_v2 = param_1 - *piVar1;
    if (*(char *)((int)piVar1 + 9) != '\0') {
      if (*(char *)((int)piVar1 + 9) == '\x01') {
        temp_v1 = FUN_002b9100(param_1);
        puVar5 = (unsigned short *)(temp_v0 + temp_v2 * 2);
        if ((unsigned int)*puVar5 + param_2 >= temp_v1) {
          *puVar5 = (unsigned short)temp_v1;
        }
        else {
          *puVar5 = (unsigned short)((unsigned int)*puVar5 + param_2);
        }
      }
    }
    else {
      pbVar3 = (unsigned char *)(temp_v0 + ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1d)) >> 3));
      *pbVar3 = *pbVar3 | (unsigned char)(1 << ((temp_v2 % 8) & 0xffU));
    }
    temp_v2 = FUN_00282e54();
    temp_v1 = (int)(param_1 - 1) >> 3;
    if (temp_v1 < 0x101) {
      temp_v2 = temp_v2 + temp_v1;
      *(unsigned char *)(temp_v2 + 0xf49) = *(unsigned char *)(temp_v2 + 0xf49) | (unsigned char)(1 << ((param_1 - 1) & 7));
    }
  }
  return;
}
