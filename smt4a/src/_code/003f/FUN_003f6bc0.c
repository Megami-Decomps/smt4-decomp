/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6bc0` (_code @ 0x3f6bc0, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0016780c. */
/* Supplied declaration required: FUN_001688c4. */
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002e08b0. */


void FUN_003f6bc0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  
  *(unsigned char *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x128) = 0;
  temp_v3 = *(int *)(param_1 + 4);
  temp_v0 = FUN_001a6f60(*(unsigned int *)(param_1 + 0x10),0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if ((temp_v3 < temp_v2) && (puVar4 = (unsigned short *)(temp_v1 + temp_v3 * 4), puVar4 != (unsigned short *)0x0)) {
    *(unsigned int *)(param_1 + 8) = (unsigned int)*puVar4;
    *(unsigned char *)(param_1 + 0xc) = (unsigned char)puVar4[1] & 1;
  }
  else {
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 0xc) = 0;
  }
  temp_v0 = *(unsigned int *)(param_1 + 8);
  FUN_0016780c(*(unsigned int *)(param_1 + 0x28),temp_v0,0);
  FUN_002a1f60(*(unsigned int *)(param_1 + 0x5d8),3,0xffffffff,0,3,*(unsigned int *)(param_1 + 0x28),
               temp_v0);
  temp_v0 = FUN_001688c4(*(unsigned int *)(param_1 + 0x5d8));
  *(unsigned int *)(param_1 + 0x5dc) = temp_v0;
  temp_v1 = FUN_001688c4(*(unsigned int *)(param_1 + 0x5d8));
  FUN_00203b40(param_1 + 0xbc,*(int *)(param_1 + 0x128) + temp_v1,8,1,0,1);
  FUN_002e08b0(param_1 + 0xbc,0);
  *(unsigned int *)(param_1 + 0x50) = 0;
  return;
}
