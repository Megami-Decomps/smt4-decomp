/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0304` (_code @ 0x1c0304, 0x2e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */
extern unsigned char DAT_00446db4; /* 0x446db4 */

/* Supplied declaration required: FUN_00192778. */
/* Supplied declaration required: FUN_00193adc. */
/* Supplied declaration required: FUN_001a863c. */
/* Supplied declaration required: FUN_001ad888. */
/* Supplied declaration required: FUN_001dc618. */
/* Supplied declaration required: FUN_001dc88c. */
/* Supplied declaration required: FUN_001dda38. */
/* Supplied declaration required: FUN_001ed6d0. */
/* Supplied declaration required: FUN_001f4b68. */
/* Supplied declaration required: FUN_0020118c. */
/* Supplied declaration required: FUN_00201964. */
/* Supplied declaration required: FUN_00211c04. */
/* Supplied declaration required: FUN_00223a90. */
/* Supplied declaration required: FUN_0026fa94. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5810. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5b04. */
/* Supplied declaration required: FUN_002fc16c. */
/* Supplied declaration required: FUN_00317fc4. */
/* Supplied declaration required: FUN_00324c18. */
/* Supplied declaration required: FUN_0033c84c. */
/* Supplied declaration required: FUN_0033f9bc. */
/* Supplied declaration required: FUN_003af380. */


unsigned int FUN_001c0304(int *param_1)

{
/* irregular: 26 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 8);
  if (temp_v0 == 7) {
    FUN_001ed6d0();
    FUN_00211c04();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    return 0;
  }
  if (temp_v0 >= 8) {
    if (temp_v0 == 0xb) {
      FUN_00193adc();
      FUN_0026fa94(0);
      FUN_002c5810();
      FUN_001a863c();
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      return 0;
    }
    if (temp_v0 < 0xc) {
      if (temp_v0 == 8) {
        FUN_0028dc54();
        FUN_00192778();
        FUN_00201964();
        FUN_001ad888();
        FUN_00223a90();
        FUN_001dda38();
        FUN_003af380(DAT_00439ca8);
        FUN_00317fc4();
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        return 0;
      }
      if (temp_v0 != 9) {
        if (temp_v0 != 10) {
          return 0;
        }
        FUN_001f4b68();
        *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
        return 0;
      }
      FUN_00324c18();
      *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
      return 0;
    }
    if (temp_v0 != 0xc) {
      if (temp_v0 == 100) {
        *(unsigned int *)(temp_v1 + 8) = 0x65;
        return 0;
      }
      if (temp_v0 != 0x65) {
        return 0;
      }
      DAT_00446db4 = 1;
      FUN_002c59b8(0x16,0);
      return 0xffffffff;
    }
    temp_v0 = 100;
    *(int *)(temp_v1 + 8) = temp_v0;
    return 0;
  }
  switch(temp_v0) {
  case 0:
    *(unsigned int *)(temp_v1 + 8) = 1;
    break;
  case 1:
    temp_v0 = 2;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 2:
    FUN_002fc16c();
    temp_v0 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 3:
    FUN_0033c84c();
    temp_v0 = *(int *)(temp_v1 + 8) + 1;
    *(int *)(temp_v1 + 8) = temp_v0;
    break;
  case 4:
    FUN_0020118c();
    FUN_0033f9bc();
    FUN_002c5b04(0xc,0);
    FUN_002c5b04(0x18,0);
    FUN_002c5b04(2,0);
    FUN_002c5b04(3,0);
    FUN_002c5b04(4,0);
    FUN_002c5b04(0x1f,0);
    FUN_002c5b04(0x20,0);
    FUN_002c5b04(0x26,0);
    FUN_002c4e28(0x32);
    FUN_002c4e28(0x28);
    FUN_002c5b04(0x16,0);
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    break;
  case 5:
    FUN_002c5ab8(5,2);
    FUN_002c5ab8(5,3);
    FUN_001dc88c();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
    break;
  case 6:
    FUN_001dc618();
    *(int *)(temp_v1 + 8) = *(int *)(temp_v1 + 8) + 1;
  }
  return 0;
}
