/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d11a0` (_code @ 0x4d11a0, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00528128; /* 0x528128 */
extern unsigned char DAT_00528130; /* 0x528130 */
extern unsigned char DAT_00528138; /* 0x528138 */
extern unsigned int DAT_00571608; /* 0x571608 */
extern unsigned int DAT_0057160c; /* 0x57160c */
extern unsigned int DAT_00571610; /* 0x571610 */
extern unsigned int DAT_00571614; /* 0x571614 */
extern unsigned int DAT_00571618; /* 0x571618 */
extern unsigned int DAT_0057161c; /* 0x57161c */
extern unsigned int DAT_00571620; /* 0x571620 */
extern unsigned int DAT_00571624; /* 0x571624 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00212234. */
extern unsigned int FUN_003173c4(unsigned int);


void FUN_004d11a0(unsigned int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_003173c4(3);
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v3 = 0;
  temp_v1 = *param_2;
  temp_v2 = param_2[1];
  if (!((DAT_0057160c & temp_v2) == 0 && (DAT_00571608 & temp_v1) == 0)) {
    FUN_00100388(&temp_v4,&DAT_00528128);
    temp_v3 = FUN_0015687c();
  }
  else if (!((temp_v2 & DAT_00571614) == 0 && (temp_v1 & DAT_00571610) == 0)) {
    FUN_00100388(&temp_v4,&DAT_00528130);
    temp_v3 = (unsigned int)*(unsigned short *)((int)param_2 + 0x166);
    FUN_00180118(temp_v3);
  }
  else if (!((temp_v2 & DAT_00571624) == 0 && (temp_v1 & DAT_00571620) == 0)) {
    FUN_00100388(&temp_v4,&DAT_00528138);
    temp_v3 = (unsigned int)*(unsigned short *)((int)param_2 + 0x166);
    FUN_00180118(temp_v3);
  }
  else if ((temp_v1 & DAT_00571618) != 0 || (temp_v2 & DAT_0057161c) != 0) {
    FUN_00100388(&temp_v4,"䞓＀覉澏璃貃宁肃");
    temp_v3 = (unsigned int)*(unsigned short *)((int)param_2 + 0x166);
    FUN_00180118(temp_v3);
  }
  FUN_00212234(&temp_v4);
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00212234(temp_v3);
  return;
}
