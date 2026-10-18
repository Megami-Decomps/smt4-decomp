/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a48c` (_code @ 0x13a48c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0013a5d0; /* 0x13a5d0 */
extern unsigned char LAB_001444ec; /* 0x1444ec */
extern unsigned char LAB_00144c7c; /* 0x144c7c */
extern unsigned char *DAT_0059dbc0; /* 0x59dbc0 */
extern int DAT_0059dbc4; /* 0x59dbc4 */
extern unsigned int DAT_006309a0; /* 0x6309a0 */
extern unsigned char DAT_006309ac; /* 0x6309ac */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_0013a48c(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0xaa0,1);
  FUN_002e6354();
  DAT_0059dbc4 = temp_v0;
  FUN_0013c884(temp_v0 + 0x88,1);
  FUN_0014f0dc(temp_v0 + 0x88,&DAT_006309a0,&DAT_006309ac);
  FUN_001523b8(temp_v0 + 0x88,1);
  temp_v1 = temp_v0 + 0x594;
  FUN_0013c884(temp_v1,1);
  FUN_0014f0dc(temp_v1,&DAT_006309a0,&DAT_006309ac);
  FUN_001523b8(temp_v1,1);
  *(int *)(temp_v0 + 0x80) = temp_v0 + 0x88;
  *(int *)(temp_v0 + 0x84) = temp_v1;
  puVar3 = &LAB_0013a5d0;
  FUN_0014e38c(&LAB_0013a5d0,param_1,0,0,&LAB_001444ec,&LAB_00144c7c,DAT_0059dbc4);
  DAT_0059dbc0 = puVar3;
  return;
}
