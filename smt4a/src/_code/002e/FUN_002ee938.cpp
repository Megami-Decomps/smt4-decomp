/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee938` (_code @ 0x2ee938, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9300(unsigned int, unsigned short [130]);
int FUN_002e93da(int);
int FUN_002e97b4(int, unsigned short [130], int);

/* stack frame of param_2: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp110; /* 0x110: local_110 */
} param_2_stack;

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e97b4. */


void FUN_002ee938(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1 [130];
  
  temp_v1[0] = 0;
  FUN_002e93da(param_2);
  temp_v0 = *(unsigned int *)(*(int *)(param_2 + 4) + 8);
  if ((((temp_v0 & 0xff) != 0 || ((temp_v0 >> 8) & 0xff) != 0) || ((temp_v0 >> 0x10) & 0xff) != 0) ||
      temp_v0 >> 0x18 != 0) {
    FUN_002e97b4(*(int *)(param_2 + 4),temp_v1,0x80);
  }
  FUN_002e9300(param_1,temp_v1);
  return;
}

} /* extern "C" */
