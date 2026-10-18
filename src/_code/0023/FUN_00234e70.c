/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234e70` (_code @ 0x234e70, 0x228 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0023d51c. */
/* Supplied declaration required: FUN_0028c8a8. */
extern unsigned int *FUN_002a8948(unsigned int);


void FUN_00234e70(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  float temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = param_1 + param_2 * 4;
  temp_v5 = param_1 + param_2 * 0xc;
  if (param_3 != 0) {
    temp_v1 = *(int *)(temp_v4 + 0x56c);
    temp_v6 = *(unsigned int *)(temp_v1 + 0x68);
    temp_v7 = *(unsigned int *)(temp_v1 + 0x78);
    *(unsigned int *)(param_1 + 0x161c) = *(unsigned int *)(temp_v1 + 0x58);
    *(unsigned int *)(param_1 + 0x1620) = temp_v6;
    *(unsigned int *)(param_1 + 0x1624) = temp_v7;
    puVar1 = (unsigned int *)FUN_002a8948(*(unsigned int *)(temp_v4 + 0x56c));
    temp_v6 = *puVar1;
    temp_v7 = puVar1[1];
    temp_v8 = puVar1[2];
    *(unsigned int *)(param_1 + 0x1628) = temp_v6;
    *(unsigned int *)(param_1 + 0x162c) = temp_v7;
    *(unsigned int *)(param_1 + 0x1630) = temp_v8;
    *(unsigned int *)(param_1 + 0x1604) = *(unsigned int *)(param_1 + 0x161c);
    *(unsigned int *)(param_1 + 0x1608) = *(unsigned int *)(param_1 + 0x1620);
    *(unsigned int *)(param_1 + 0x160c) = *(unsigned int *)(param_1 + 0x1624);
    *(unsigned int *)(param_1 + 0x1610) = temp_v6;
    *(unsigned int *)(param_1 + 0x1614) = temp_v7;
    *(unsigned int *)(param_1 + 0x1618) = temp_v8;
    temp_v4 = *(int *)(param_1 + 0x56c);
    temp_v6 = *(unsigned int *)(param_1 + 0x1608);
    temp_v7 = *(unsigned int *)(param_1 + 0x160c);
    *(unsigned int *)(temp_v4 + 0x58) = *(unsigned int *)(param_1 + 0x1604);
    *(unsigned int *)(temp_v4 + 0x68) = temp_v6;
    *(unsigned int *)(temp_v4 + 0x78) = temp_v7;
    *(unsigned int *)(temp_v4 + 0x88) = *(unsigned int *)(temp_v4 + 0x88) | 0x800;
    FUN_0023d51c(*(unsigned int *)(param_1 + 0x56c),param_1 + 0x1610);
    if (*(char *)(param_1 + 0x15) != '\0') {
      temp_v6 = *(unsigned int *)(temp_v5 + 0x1670);
      temp_v7 = *(unsigned int *)(temp_v5 + 0x1674);
      temp_v8 = *(unsigned int *)(temp_v5 + 0x1678);
      *(unsigned int *)(param_1 + 0x1664) = temp_v6;
      *(unsigned int *)(param_1 + 0x1668) = temp_v7;
      *(unsigned int *)(param_1 + 0x166c) = temp_v8;
      *(unsigned int *)(param_1 + 0x1658) = temp_v6;
      *(unsigned int *)(param_1 + 0x165c) = temp_v7;
      *(unsigned int *)(param_1 + 0x1660) = temp_v8;
      FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0x1658);
      return;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned char *)(param_1 + 0x14) = 1;
    if (param_2 != 0) {
      temp_v1 = *(int *)(temp_v4 + 0x56c);
      temp_v7 = *(unsigned int *)(temp_v1 + 0x68);
      temp_v6 = *(unsigned int *)(temp_v1 + 0x78);
      *(unsigned int *)(param_1 + 0x161c) = *(unsigned int *)(temp_v1 + 0x58);
      *(unsigned int *)(param_1 + 0x1620) = temp_v7;
      *(unsigned int *)(param_1 + 0x1624) = temp_v6;
      puVar1 = (unsigned int *)FUN_002a8948(*(unsigned int *)(temp_v4 + 0x56c));
      temp_v6 = *puVar1;
      temp_v7 = puVar1[1];
      *(unsigned int *)(param_1 + 0x1630) = puVar1[2];
      *(unsigned int *)(param_1 + 0x1628) = temp_v6;
      *(unsigned int *)(param_1 + 0x162c) = temp_v7;
    }
    else {
      *(unsigned int *)(param_1 + 0x161c) = *(unsigned int *)(param_1 + 0x1634);
      *(unsigned int *)(param_1 + 0x1620) = *(unsigned int *)(param_1 + 0x1638);
      *(unsigned int *)(param_1 + 0x1624) = *(unsigned int *)(param_1 + 0x163c);
      *(unsigned int *)(param_1 + 0x1628) = *(unsigned int *)(param_1 + 0x1640);
      *(unsigned int *)(param_1 + 0x162c) = *(unsigned int *)(param_1 + 0x1644);
      *(unsigned int *)(param_1 + 0x1630) = *(unsigned int *)(param_1 + 0x1648);
    }
    *(float *)(param_1 + 0x15ec) =
         (*(float *)(param_1 + 0x161c) - *(float *)(param_1 + 0x1604)) * 0.1f;
    *(float *)(param_1 + 0x15f0) =
         (*(float *)(param_1 + 0x1620) - *(float *)(param_1 + 0x1608)) * 0.1f;
    *(float *)(param_1 + 0x15f4) =
         (*(float *)(param_1 + 0x1624) - *(float *)(param_1 + 0x160c)) * 0.1f;
    *(float *)(param_1 + 0x15f8) =
         (*(float *)(param_1 + 0x1628) - *(float *)(param_1 + 0x1610)) * 0.1f;
    *(float *)(param_1 + 0x15fc) =
         (*(float *)(param_1 + 0x162c) - *(float *)(param_1 + 0x1614)) * 0.1f;
    *(float *)(param_1 + 0x1600) =
         (*(float *)(param_1 + 0x1630) - *(float *)(param_1 + 0x1618)) * 0.1f;
    if (*(char *)(param_1 + 0x15) != '\0') {
      temp_v0 = *(float *)(temp_v5 + 0x1670);
      temp_v2 = *(float *)(temp_v5 + 0x1674);
      temp_v3 = *(float *)(temp_v5 + 0x1678);
      *(float *)(param_1 + 0x1664) = temp_v0;
      *(float *)(param_1 + 0x1668) = temp_v2;
      *(float *)(param_1 + 0x166c) = temp_v3;
      *(float *)(param_1 + 0x164c) = (temp_v0 - *(float *)(param_1 + 0x1658)) * 0.1f;
      *(float *)(param_1 + 0x1650) = (temp_v2 - *(float *)(param_1 + 0x165c)) * 0.1f;
      *(float *)(param_1 + 0x1654) = (temp_v3 - *(float *)(param_1 + 0x1660)) * 0.1f;
    }
  }
  return;
}
