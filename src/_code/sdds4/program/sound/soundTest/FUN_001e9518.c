/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e9518` (_code @ 0x1e9518, 0x1f8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044e110; /* 0x44e110 */

/* Supplied declaration required: FUN_0018ae60. */
/* Supplied declaration required: FUN_00262bcc. */
/* Supplied declaration required: FUN_00287590. */
/* Supplied declaration required: FUN_0029117c. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002a0640. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002bffbc. */
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_001e9518(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_0044e110;
  if ((DAT_0044e110[2] != 99) && (temp_v0 = FUN_002bffbc(2), temp_v0 != 0)) {
    puVar1[2] = 99;
  }
  temp_v0 = puVar1[2];
  if (temp_v0 == 0) {
    puVar1[2] = 1;
    puVar1[3] = 0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 99) {
      return 0;
    }
    FUN_002c45b8(*DAT_0044e110,0);
    return 0xffffffff;
  }
  temp_v0 = FUN_002b902c(4);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] - 1;
    if (temp_v0 >= 10) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 9;
    }
    else {
      temp_v0 = puVar1[4] - 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = FUN_002b902c(3);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] + 1;
    if (temp_v0 >= 10) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 9;
    }
    else {
      temp_v0 = puVar1[4] + 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = FUN_002bffbc(0);
  if (temp_v0 == 0) {
    FUN_002bffbc(1);
    return 0;
  }
  switch(puVar1[4]) {
  case 0:
    FUN_00287590(0x1000010);
    break;
  case 1:
    FUN_0029117c(0x1e);
    break;
  case 2:
    temp_v1 = 0x1000004;
    FUN_002a0640(temp_v1,0,0x3c);
    break;
  case 3:
    temp_v1 = 0x1000007;
    FUN_002a0640(temp_v1,0,0x3c);
    break;
  case 4:
    FUN_0029c650(0xf);
    break;
  case 5:
    temp_v1 = 0x1000009;
    FUN_0018ae60(temp_v1,0,0x3c);
    break;
  case 6:
    temp_v1 = 0x1000006;
    FUN_0018ae60(temp_v1,0,0x3c);
    break;
  case 7:
    temp_v1 = 0x1000010;
    FUN_00262bcc(temp_v1,0xf);
    break;
  case 8:
    temp_v1 = 0x1000004;
    FUN_00262bcc(temp_v1,0xf);
    break;
  case 9:
    FUN_00262bcc(0x1000009,0xf);
  }
  return 0;
}
