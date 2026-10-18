/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d13b0` (_code @ 0x1d13b0, 0x248 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00269c7c. */
/* Supplied declaration required: FUN_0026c9c0. */
/* Supplied declaration required: FUN_00293700. */
/* Supplied declaration required: FUN_0029378c. */
extern int FUN_00295d7c(void);
extern int FUN_002a8740(unsigned int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002e36f8. */


void FUN_001d13b0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = FUN_002a8764();
  piVar4 = (int *)(temp_v0 + 0x6c8);
  FUN_0029378c(*(unsigned int *)(temp_v0 + 0x6c8),0);
  FUN_00293700(*(unsigned int *)(temp_v0 + 0x6c8),*(char *)(temp_v0 + 0x42) == '\x01');
  *(unsigned char *)(*piVar4 + 0x25) = 0;
  *(unsigned char *)(*piVar4 + 0x26) = 0;
  *(unsigned char *)(*piVar4 + 0x27) = 0;
  temp_v3 = 0;
  do {
    temp_v4 = temp_v0 + temp_v3 * 4;
    piVar4 = (int *)(temp_v4 + 0x6cc);
    FUN_0029378c(*(unsigned int *)(temp_v4 + 0x6cc),*(unsigned int *)(temp_v0 + 0x2c));
    FUN_00293700(*(unsigned int *)(temp_v4 + 0x6cc),*(char *)(temp_v0 + 0x42) == '\x01');
    FUN_00269c7c(*piVar4,temp_v3 + 1);
    if (*(char *)(temp_v1 + temp_v3 + 0x9108) < '\0') {
      *(unsigned char *)(*(int *)(temp_v4 + 0x6cc) + 0x20) = 1;
    }
    else {
      *(unsigned char *)(*(int *)(temp_v4 + 0x6cc) + 0x20) = 0;
      *(int *)(*piVar4 + 0x34) = (int)*(char *)(temp_v1 + temp_v3 + 0x9108);
    }
    *(unsigned char *)(*(int *)(temp_v4 + 0x6cc) + 0x25) = 0;
    *(unsigned char *)(*piVar4 + 0x26) = 0;
    *(unsigned char *)(*piVar4 + 0x27) = 0;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 4;
    piVar4 = (int *)(temp_v3 + 0x6d8);
    FUN_0029378c(*(unsigned int *)(temp_v3 + 0x6d8),*(unsigned int *)(temp_v0 + 0x2c));
    FUN_00293700(*(unsigned int *)(temp_v3 + 0x6d8),*(char *)(temp_v0 + 0x42) == '\x01');
    FUN_00269c7c(*piVar4,temp_v1 + 4);
    *(unsigned char *)(*piVar4 + 0x25) = 0;
    *(unsigned char *)(*piVar4 + 0x26) = 0;
    *(unsigned char *)(*piVar4 + 0x27) = 0;
    temp_v4 = temp_v0 + temp_v1 * 8;
    if (*(int *)(temp_v4 + 0x738) < 0) {
      *(unsigned char *)(*(int *)(temp_v3 + 0x6d8) + 0x20) = 1;
    }
    else {
      *(unsigned char *)(*(int *)(temp_v3 + 0x6d8) + 0x20) = 0;
      *(unsigned int *)(*piVar4 + 0x34) = *(unsigned int *)(temp_v4 + 0x738);
      temp_v4 = FUN_002a8740(*(unsigned int *)(temp_v4 + 0x738));
      temp_v2 = FUN_00295d7c();
      *(unsigned char *)(*(int *)(temp_v3 + 0x6d8) + 0x23) = temp_v2 != 0;
      *(unsigned char *)(*(int *)(temp_v3 + 0x6d8) + 0x24) = (*(unsigned short *)(temp_v4 + 0x44) & 0x400) != 0;
      *(unsigned char *)(*(int *)(temp_v3 + 0x6d8) + 0x29) = (*(unsigned short *)(temp_v4 + 0x44) & 4) != 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(char *)(temp_v0 + 0x66c) == '\n') {
    FUN_0026c9c0();
  }
  if (*(char *)(temp_v0 + 0x66c) != '\v') {
    return;
  }
  FUN_002e36f8();
  return;
}
