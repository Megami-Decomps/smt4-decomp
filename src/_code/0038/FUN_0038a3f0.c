/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a3f0` (_code @ 0x38a3f0, 0x290 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_00262430. */
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int *FUN_002c0ac8(void);


unsigned int FUN_0038a3f0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  
  puVar2 = (unsigned int *)FUN_002c0ac8();
  temp_v0 = (puVar2[0x106] + 1) * -0x33333333;
  temp_v1 = (puVar2[0x106] + 1) % 0x28;
  puVar2[0x106] = temp_v1;
  switch(puVar2[2]) {
  case 0:
    *puVar2 = *puVar2 & 0xffffffdf;
    puVar2[2] = 1;
    FUN_002bdb2c(puVar2 + 0x110,0xe,0xffffffff,puVar2 + 0x108,0xb);
    puVar3 = puVar2 + 0x133;
    FUN_002bdb2c(puVar3,0xe,0xffffffff,puVar2 + 0x108,0xb);
    puVar4 = puVar2 + 0x156;
    FUN_002bdb2c(puVar4,0xe,0xffffffff,puVar2 + 0x108,0xb);
    if ((int)puVar2[4] < 5) {
      FUN_00262430(puVar2 + 0x110,6);
      FUN_002bf030(puVar2 + 0x110,3);
      FUN_00296154(puVar2 + 0x110,0xe,0x36);
      FUN_00262430(puVar4,7);
      FUN_002bf030(puVar4,3);
      FUN_00296154(puVar4,0xe,0x36);
    }
    else {
      FUN_00262430(puVar2 + 0x110,4);
      FUN_002bf030(puVar2 + 0x110,3);
      FUN_00296154(puVar2 + 0x110,0xe,0x22);
      FUN_00262430(puVar4,5);
      FUN_002bf030(puVar4,3);
      FUN_00296154(puVar4,0xe,0x22);
    }
    *(unsigned char *)(puVar2 + 0x11f) = 1;
    *(unsigned char *)(puVar2 + 0x165) = 1;
    FUN_002b90e0(puVar3,7);
    FUN_002bf030(puVar3,4);
    FUN_00296154(puVar3,0xe,0x47);
    puVar2 = puVar2 + 0x110;
    break;
  case 1:
    FUN_002bf9f0(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_002bf9f0(puVar2 + 0x156);
    if (*(char *)((int)puVar2 + 0x4ca) == '\0') {
      return 0;
    }
    *puVar2 = *puVar2 | 0x20;
    temp_v1 = 2;
    puVar2[2] = temp_v1;
    return 0;
  case 2:
    FUN_002bf9f0(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_002bf9f0(puVar2 + 0x156);
    puVar2 = puVar2 + 0x133;
    break;
  case 3:
    FUN_002bf9f0(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_002bf9f0(puVar2 + 0x156);
    if (*(char *)((int)puVar2 + 0x4ca) == '\0') {
      return 0;
    }
    temp_v1 = 4;
    puVar2[2] = temp_v1;
    return 0;
  case 4:
    *puVar2 = *puVar2 & 0xffffffcf;
  default:
    return 0;
  }
  FUN_002bf9f0(puVar2);
  return 0;
}
