/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f148` (_code @ 0x26f148, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001801a4. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002c2c88. */
/* Supplied declaration required: FUN_003d0bc0. */
extern int FUN_00481104(unsigned int);


void FUN_0026f148(int param_1)

{
/* irregular: 6 goto(s); 5 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  short temp_v4;
  int temp_v5;
  short *psVar8;
  int temp_v6;
  
  if (*(char *)(DAT_0057f108 + 0x3d) != '\0') {
    return;
  }
  if (param_1 != 0x48) {
    if (param_1 >= 0x49) {
      switch(param_1) {
      case 0x49:
        goto LAB_0026f1ec;
      case 0x4a:
        goto LAB_0026f210;
      case 0x4b:
        goto LAB_0026f234;
      case 0x4c:
        goto LAB_0026f258;
      case 0x4d:
        goto LAB_0026f280;
      case 0x4e:
        goto LAB_0026f2a8;
      default:
        return;
      }
    }
    switch(param_1) {
    case 0x13:
      temp_v2 = 0x3d;
      temp_v3 = 0xb4;
      psVar8 = (short *)(DAT_0057f108 + 0x2b68);
      temp_v6 = DAT_0057f108 + 0x2b4;
      psVar1 = (short *)FUN_001801a4();
      temp_v4 = *psVar1;
      break;
    case 0x14:
LAB_0026f1ec:
      temp_v2 = 0xb5;
      temp_v3 = 300;
      psVar8 = (short *)(DAT_0057f108 + 0x2c58);
      temp_v6 = DAT_0057f108 + 0x318;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 2);
      break;
    case 0x15:
LAB_0026f210:
      temp_v2 = 0x30d;
      psVar8 = (short *)(DAT_0057f108 + 0x2d48);
      temp_v3 = 0x33e;
      temp_v6 = DAT_0057f108 + 0x37c;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 4);
      break;
    case 0x16:
LAB_0026f234:
      temp_v2 = 0x12d;
      temp_v3 = 0x1a4;
      psVar8 = (short *)(DAT_0057f108 + 0x2dac);
      temp_v6 = DAT_0057f108 + 0x3e0;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 6);
      break;
    case 0x17:
LAB_0026f258:
      temp_v2 = 0x1a5;
      temp_v3 = 0x21c;
      psVar8 = (short *)(DAT_0057f108 + 0x2e9c);
      temp_v6 = DAT_0057f108 + 0x444;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 8);
      break;
    case 0x18:
LAB_0026f280:
      temp_v2 = 0x21d;
      temp_v3 = 0x294;
      psVar8 = (short *)(DAT_0057f108 + 0x2f8c);
      temp_v6 = DAT_0057f108 + 0x4a8;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 10);
      break;
    case 0x19:
LAB_0026f2a8:
      temp_v2 = 0x295;
      temp_v3 = 0x30c;
      psVar8 = (short *)(DAT_0057f108 + 0x307c);
      temp_v6 = DAT_0057f108 + 0x50c;
      temp_v5 = FUN_001801a4();
      temp_v4 = *(short *)(temp_v5 + 0xc);
      break;
    default:
      return;
    }
  }
  else {
    temp_v2 = 0x3d;
    temp_v3 = 0xb4;
    psVar8 = (short *)(DAT_0057f108 + 0x2b68);
    temp_v6 = DAT_0057f108 + 0x2b4;
    psVar1 = (short *)FUN_001801a4();
    temp_v4 = *psVar1;
  }
  if (temp_v6 != 0) {
    temp_v5 = 0;
    if (temp_v2 <= temp_v3) {
      do {
        temp_v0 = FUN_00481104(temp_v2);
        if (temp_v0 != 0) {
          psVar1 = psVar8 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *psVar1 = (short)temp_v2;
        }
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 <= (int)temp_v3);
    }
    FUN_00203b40(temp_v6,temp_v5,9,1,1,0);
    FUN_003d0bc0(param_1);
    temp_v0 = 0;
    if (0 < temp_v5 + 1) {
      temp_v1 = 0;
      temp_v5 = temp_v5 + 1;
      do {
        if (*psVar8 == temp_v4) {
          temp_v0 = temp_v1;
        }
        temp_v5 = temp_v5 - 1;
        temp_v1 = temp_v1 + 1;
        psVar8 = psVar8 + 1;
      } while (temp_v5 != 0);
    }
    FUN_002a4964(temp_v6,temp_v0);
    FUN_002c2c88(temp_v6);
    return;
  }
  return;
}
