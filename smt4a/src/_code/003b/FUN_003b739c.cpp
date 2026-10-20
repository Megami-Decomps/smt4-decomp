/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b739c` (_code @ 0x3b739c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001b4a90(int, int, unsigned int);
int FUN_00203b40(int, unsigned int, int, int, int, int);
int FUN_0032ff20(int, unsigned char [304]);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
} param_1_stack;

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0032ff20. */
extern unsigned int FUN_004bd21c(unsigned char *);


void FUN_003b739c(unsigned short *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [304];
  
  temp_v0 = DAT_0057f290;
  FUN_00184310();
  FUN_0032ff20(*param_1,temp_v2);
  temp_v1 = FUN_004bd21c(temp_v2);
  *(unsigned int *)(temp_v0 + 0x8e7c) = 0;
  FUN_00203b40(temp_v0 + 0x8db0,temp_v1,8,1,1,1);
  *(unsigned char *)(temp_v0 + 0x8e8a) = 1;
  FUN_001b4a90(temp_v0 + 0x8e8c,0x20,0xffffffff);
  *(unsigned char *)(temp_v0 + 0x8eac) = 0;
  return;
}

} /* extern "C" */
