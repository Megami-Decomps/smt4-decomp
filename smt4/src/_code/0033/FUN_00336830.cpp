/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336830` (_code @ 0x336830, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023ebc8(...);
int FUN_00254434(unsigned int, int);
int FUN_00255e38(int, unsigned char [448], int, int, int);
int FUN_0027dc24(int, int, int);
int FUN_002b06c4(...);
int FUN_002c4938(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2A8; /* 0x2a8: local_2a8 */
} param_1_stack;

extern unsigned char DAT_00435d90; /* 0x435d90 */

/* Supplied declaration required: FUN_0023ebc8. */
/* Supplied declaration required: FUN_00254434. */
/* Supplied declaration required: FUN_00255e38. */
/* Supplied declaration required: FUN_0027dc24. */
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_00336830(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4 [448];
  
  temp_v2 = 0;
  temp_v0 = 0;
  do {
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v2 * 0x288 + 0xa20);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + (temp_v2 + 1) * 0x288 + 0xa20);
    temp_v0 = temp_v0 + 2;
    *puVar5 = 0;
    puVar5[1] = 0;
    temp_v2 = temp_v2 + 2;
  } while (temp_v0 < 0x32);
  FUN_002c4938((unsigned int *)(param_1 + 200),0x74);
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xd0) = 0;
  *(unsigned int *)(param_1 + 0xd4) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xfc) = 0x3f800000;
  FUN_0027dc24(param_1,param_1 + 200,1);
  if ((int)(*(unsigned int *)((unsigned char *)&DAT_00435d90 + 0x30)) < 1) {
    temp_v3 = 0;
    do {
      if (*(int *)(param_1 + 200 + temp_v3 * 4) != 0) {
        temp_v1 = *(unsigned int *)(param_1 + temp_v3 * 4 + 200);
        FUN_002b06c4();
        if (temp_v1 != 0) {
          FUN_0023ebc8(param_1,temp_v4);
          FUN_00255e38(param_1,temp_v4,1,temp_v3 + 4,0);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  else {
    temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_00435d90 + 0x30));
    FUN_002b06c4(temp_v3);
    FUN_0023ebc8(param_1,temp_v4,temp_v3);
    FUN_00255e38(param_1,temp_v4,1,4,0);
  }
  if (*(char *)(param_1 + 0x11e) == '\x01') {
    FUN_00254434(*(unsigned int *)(param_1 + 0x120),param_1 + 0x124);
  }
  *(unsigned int *)(param_1 + 0x4964) = 0;
  FUN_002c4938(param_1 + 0x48bc,0xa8);
  return;
}

} /* extern "C" */
