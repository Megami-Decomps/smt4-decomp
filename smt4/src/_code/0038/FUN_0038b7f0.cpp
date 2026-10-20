/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b7f0` (_code @ 0x38b7f0, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(unsigned char [128], unsigned char *, int, unsigned char *);
int FUN_002c4938(unsigned char [128], int);
int FUN_0038a154(unsigned int, unsigned char [128], int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_0038b860; /* 0x38b860 */
extern unsigned char LAB_0038b870; /* 0x38b870 */
extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_0038a154. */


void FUN_0038b7f0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  FUN_002c4938(temp_v0,0x80);
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 0x45) = 0;
  FUN_002be624(temp_v0,&LAB_0038b870,param_1 + 0x24,&LAB_0038b860);
  FUN_0038a154(DAT_00433130,temp_v0,param_1 + 0x48,1,0x80,param_1 + 0x38);
  return;
}

} /* extern "C" */
