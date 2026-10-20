/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c580` (_code @ 0x36c580, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_00163060(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_002ac078(...); /* 0x2ac078 */
extern unsigned char LAB_00341ee4; /* 0x341ee4 */
extern unsigned char LAB_0036c6b4; /* 0x36c6b4 */

/* Supplied declaration required: FUN_0014e38c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00163060. */


void FUN_0036c580(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int in_s0;
  float temp_v1;
  float in_s1;
  
  temp_v0 = FUN_00162ea4();
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x28,1);
    temp_v1 = 0.0f;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = param_1;
    puVar2[8] = param_2;
    puVar2[9] = 0;
    if (in_s1 == 0.0f) {
      *(unsigned char *)(puVar2 + 9) = 1;
      puVar2[1] = 0;
    }
    else {
      *(float *)&puVar2[1] = in_s1;
      *(unsigned char *)(puVar2 + 9) = 0;
      temp_v1 = in_s1 - 10.0f;
    }
    *(float *)&puVar2[2] = temp_v1;
    puVar2[3] = in_s0;
    puVar2[4] = in_s0;
    FUN_0014e38c(&LAB_0036c6b4,4,0,0,FUN_002ac078,&LAB_00341ee4,puVar2);
  }
  return;
}

} /* extern "C" */
