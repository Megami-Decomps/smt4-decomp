/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c8e4` (_code @ 0x37c8e4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, unsigned int, int, int);
int FUN_001846d0(int, int);
int FUN_00184b80(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern unsigned int *FUN_001ab888(void);
extern unsigned int FUN_00348cd8(void);


unsigned int FUN_0037c8e4(unsigned char param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8e) = 1;
  *(unsigned char *)(temp_v0 + 0x8d) = 1;
  if (param_2 != 0) {
    temp_v1 = FUN_00348cd8();
    *(unsigned int *)(temp_v0 + 0x7c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x88) = temp_v1;
  }
  else {
    puVar3 = (unsigned int *)FUN_001ab888();
    temp_v1 = *puVar3;
    *(unsigned int *)(temp_v0 + 0x7c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x88) = temp_v1;
  }
  *(unsigned char *)(temp_v0 + 0x92) = 0;
  *(unsigned char *)(temp_v0 + 0x17d) = 0;
  *(unsigned char *)(temp_v0 + 0x16d) = 0;
  *(unsigned char *)(temp_v0 + 0x91) = param_1;
  FUN_0014e188(temp_v0 + 0xb00,8,0xffffffff,temp_v0 + 0x194,0xb);
  FUN_00184b80(temp_v0 + 0xb00,0);
  FUN_001846d0(temp_v0 + 0xb00,6);
  return 1;
}

} /* extern "C" */
