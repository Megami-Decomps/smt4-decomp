/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348d7c` (_code @ 0x348d7c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_002840fc; /* 0x2840fc */
extern unsigned char LAB_002c2b88; /* 0x2c2b88 */
extern unsigned char LAB_002c2bac; /* 0x2c2bac */
extern unsigned int *DAT_0057f240; /* 0x57f240 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
extern int FUN_00162858(void);
extern unsigned int FUN_00167f08(void);
/* Supplied declaration required: FUN_0049d140. */
/* Supplied declaration required: FUN_0049d3f0. */


void FUN_00348d7c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  char *pcVar3;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar2 = (unsigned int *)0x478;
  FUN_0016007c();
  pcVar3 = "HOW_TO PROC";
  DAT_0057f240 = puVar2;
  FUN_0014e38c("HOW_TO PROC",4,0,0,&LAB_002840fc,0,0);
  *puVar2 = (unsigned int)pcVar3;
  FUN_0015155c("HOW_TO UL",0x81,0,0,&LAB_002c2bac,0,0,pcVar3);
  FUN_0015155c("HOW_TO UR",0xdd,0,0,&LAB_002c2bac,0,0,*puVar2);
  FUN_0015155c("HOW_TO DD",0xeb,0,0,&LAB_002c2b88,0,0,*puVar2);
  FUN_0049d3f0(puVar2);
  temp_v1 = FUN_00167f08();
  puVar2[0x11b] = temp_v1;
  puVar2[0x11c] = param_1;
  temp_v2 = FUN_00162858();
  if ((temp_v2 == 0) && (param_1 != 3)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  *(unsigned char *)(puVar2 + 0x11d) = temp_v0;
  FUN_0049d140(puVar2,7,0);
  return;
}
