/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7cd4` (_code @ 0x2c7cd4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00230b9c(unsigned int, unsigned int, int);
int FUN_0039c488(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f0c8; /* 0x57f0c8 */
extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00230b9c. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0039c488. */


/* WARNING: Removing unreachable block (ram,0x002c7df0) */
/* WARNING: Removing unreachable block (ram,0x002c7db4) */
/* WARNING: Removing unreachable block (ram,0x002c7dc0) */
/* WARNING: Removing unreachable block (ram,0x002c7dcc) */
/* WARNING: Removing unreachable block (ram,0x002c7dd8) */
/* WARNING: Removing unreachable block (ram,0x002c7de4) */
/* WARNING: Removing unreachable block (ram,0x0019dec4) */
/* WARNING: Removing unreachable block (ram,0x0019df54) */
/* WARNING: Removing unreachable block (ram,0x0019df6c) */
/* WARNING: Removing unreachable block (ram,0x0019df60) */
/* WARNING: Removing unreachable block (ram,0x0019df90) */
/* WARNING: Removing unreachable block (ram,0x0019df68) */
/* WARNING: Removing unreachable block (ram,0x0019dfb0) */
/* WARNING: Removing unreachable block (ram,0x0019dfb4) */
/* WARNING: Removing unreachable block (ram,0x0019dfb8) */
/* WARNING: Removing unreachable block (ram,0x0019dfbc) */
/* WARNING: Removing unreachable block (ram,0x0019dfc0) */

void FUN_002c7cd4(void)

{
/* irregular: 21 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  
  FUN_0039c488();
  temp_v0 = DAT_00588fe8;
  puVar2 = (unsigned char *)(DAT_00588fe8 + 0x514);
  if (*(char *)(DAT_00588fe8 + 0x514) == '\x06') {
    return;
  }
  *(char *)(DAT_00588fe8 + 0x515) = *(char *)(DAT_00588fe8 + 0x514);
  *puVar2 = 6;
  temp_v1 = FUN_0035db94();
  if (temp_v1 < 0) {
    temp_v2 = 3;
    FUN_00230b9c(temp_v2,0xffffffff,0);
  }
  else {
    temp_v1 = FUN_0035db94();
    if (temp_v1 >= 1) {
      temp_v2 = 2;
      FUN_00230b9c(temp_v2,0xffffffff,0);
    }
  }
  temp_v1 = DAT_00588fe8;
  temp_v3 = 0;
  if (*(char *)(DAT_00588fe8 + 0x59a) != '\0') {
    do {
      FUN_001641c4();
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x59a));
  }
  *(unsigned char *)(temp_v1 + 0x59a) = 0;
  FUN_001b4a90(temp_v1 + 0x544,0x54,0xffffffff);
  temp_v1 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
  puVar5 = (unsigned int *)(temp_v1 + 0x518);
  temp_v2 = *puVar5;
  *puVar5 = 2;
  *(unsigned int *)(temp_v1 + 0x51c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x520) = 0x1f;
  temp_v0 = DAT_0057f0c8;
  *(unsigned int *)(DAT_0057f0c8 + 0x5ec) = 0xf4f4f4ff;
  *(unsigned int *)(temp_v0 + 0x670) = 0;
  *(unsigned char *)(temp_v0 + 0x674) = 0xff;
  *(unsigned char *)(temp_v0 + 0x5ea) = 0;
  return;
}

} /* extern "C" */
