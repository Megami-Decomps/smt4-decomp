/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e960c` (_code @ 0x1e960c, 0x1f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018af60(unsigned int, int, int);
int FUN_002629a0(...);
int FUN_00287328(int);
int FUN_00290ed8(int);
int FUN_0029c3b0(int);
int FUN_002a03a0(unsigned int, int, int);
int FUN_002bfde4(int);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0044e110; /* 0x44e110 */

/* Supplied declaration required: FUN_0018af60. */
/* Supplied declaration required: FUN_002629a0. */
/* Supplied declaration required: FUN_00287328. */
/* Supplied declaration required: FUN_00290ed8. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a03a0. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002bfde4. */
/* Supplied declaration required: jobStop. */


unsigned int FUN_001e960c(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_0044e110;
  if ((DAT_0044e110[2] != 99) && (temp_v0 = FUN_002bfde4(2), temp_v0 != 0)) {
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
    jobStop(*DAT_0044e110,0);
    return 0xffffffff;
  }
  temp_v0 = FUN_002b8cec(4);
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
  temp_v0 = FUN_002b8cec(3);
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
  temp_v0 = FUN_002bfde4(0);
  if (temp_v0 == 0) {
    FUN_002bfde4(1);
    return 0;
  }
  switch(puVar1[4]) {
  case 0:
    FUN_00287328(0x1000010);
    break;
  case 1:
    FUN_00290ed8(0x1e);
    break;
  case 2:
    temp_v1 = 0x1000004;
    FUN_002a03a0(temp_v1,0,0x3c);
    break;
  case 3:
    temp_v1 = 0x1000007;
    FUN_002a03a0(temp_v1,0,0x3c);
    break;
  case 4:
    FUN_0029c3b0(0xf);
    break;
  case 5:
    temp_v1 = 0x1000009;
    FUN_0018af60(temp_v1,0,0x3c);
    break;
  case 6:
    temp_v1 = 0x1000006;
    FUN_0018af60(temp_v1,0,0x3c);
    break;
  case 7:
    temp_v1 = 0x1000010;
    FUN_002629a0(temp_v1,0xf);
    break;
  case 8:
    temp_v1 = 0x1000004;
    FUN_002629a0(temp_v1,0xf);
    break;
  case 9:
    FUN_002629a0(0x1000009,0xf);
  }
  return 0;
}

} /* extern "C" */
