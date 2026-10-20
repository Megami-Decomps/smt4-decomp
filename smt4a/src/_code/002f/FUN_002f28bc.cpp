/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f28bc` (_code @ 0x2f28bc, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012ce48(unsigned char *, unsigned int **);
int FUN_002e6e34(unsigned int **, unsigned char *);
int FUN_002e6e5c(unsigned int **);
int FUN_002e9318(...);
int FUN_004322f4(unsigned int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

extern unsigned char DAT_00558bd8; /* 0x558bd8 */
extern unsigned char DAT_0062e5fc; /* 0x62e5fc */
extern unsigned char DAT_0062e610; /* 0x62e610 */

/* Supplied declaration required: FUN_0012ce48. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_004322f4. */


int FUN_002f28bc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int *temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558bd8;
  puStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v1 = param_4;
  FUN_002e6e34(&puStack_18,&DAT_0062e610);
  temp_v1 = param_1;
  FUN_0012ce48(&DAT_0062e5fc,&temp_v1);
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_004322f4(param_1);
  }
  FUN_002e6e5c(&puStack_18);
  temp_v0 = FUN_002e9318(param_1 + 0x1a);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  temp_v0 = FUN_002e9318(temp_v0 - 0x18);
  return temp_v0 - 0x48;
}

} /* extern "C" */
