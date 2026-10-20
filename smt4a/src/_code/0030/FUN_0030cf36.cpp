/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cf36` (_code @ 0x30cf36, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001306e2(int [2], unsigned int, unsigned char *, unsigned int, unsigned int);
int FUN_002e6354(unsigned char [24], int);
int FUN_00303334(unsigned char [24]);
int FUN_00303350(unsigned char [24]);
int FUN_0030ce60(unsigned char *, unsigned char [24]);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_001306e2. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00303334. */
/* Supplied declaration required: FUN_00303350. */
/* Supplied declaration required: FUN_0030ce60. */


int FUN_0030cf36(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1 [24];
  unsigned char temp_v2 [24];
  int temp_v3 [2];
  
  FUN_002e6354(temp_v2,0x18);
  FUN_00303334(temp_v2);
  temp_v0 = *param_2;
  puVar2 = temp_v1;
  FUN_0030ce60(puVar2,temp_v2);
  FUN_001306e2(temp_v3,param_1,puVar2 + -4,param_4,temp_v0);
  FUN_00303350(temp_v1);
  FUN_00303350(temp_v2);
  return temp_v3[0] + 0x14;
}

} /* extern "C" */
