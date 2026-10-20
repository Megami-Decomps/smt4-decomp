/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dfb0` (_code @ 0x37dfb0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_00230d30(void);
int FUN_002a4964(int, int);
int FUN_002c2c68(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00230d30. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002c2c68. */


void FUN_0037dfb0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  
  temp_v0 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x65c) = param_1;
  temp_v1 = temp_v0 + 0x5ec;
  *(unsigned int *)(temp_v0 + 0x658) = param_2;
  temp_v2 = FUN_002c2c68();
  FUN_00203b40(temp_v1,temp_v2 + 1,9,1,0,1);
  temp_v2 = FUN_002c2c68(temp_v1);
  FUN_002a4964(temp_v1,temp_v2 - 1);
  *(unsigned char *)(temp_v0 + 0x528) = 1;
  temp_v0 = DAT_00588fe8;
  temp_v1 = 0;
  if (*(char *)(DAT_00588fe8 + 0x59a) != '\0') {
    do {
      FUN_001641c4();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x59a));
  }
  *(unsigned char *)(temp_v0 + 0x59a) = 0;
  FUN_001b4a90(temp_v0 + 0x544,0x54,0xffffffff);
  temp_v0 = DAT_00588fe8;
  *(unsigned int *)(DAT_00588fe8 + 0x524) = 0;
  puVar4 = (unsigned int *)(temp_v0 + 0x518);
  temp_v3 = *puVar4;
  *puVar4 = 0xe;
  *(unsigned int *)(temp_v0 + 0x51c) = temp_v3;
  FUN_00230d30();
  return;
}

} /* extern "C" */
