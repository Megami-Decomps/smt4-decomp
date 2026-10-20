/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b2d0` (_code @ 0x39b2d0, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001cd404(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_003205a4(...); /* 0x3205a4 */
extern int FUN_0032063c(...); /* 0x32063c */
extern unsigned char LAB_0038b7f0; /* 0x38b7f0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001cd404. */


unsigned int FUN_0039b2d0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int in_fpscr;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x2c,1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  pcVar2 = "EventEplEffect";
  FUN_0014e38c("EventEplEffect",4,0,0,FUN_003205a4,&LAB_0038b7f0,puVar1);
  *puVar1 = (unsigned int)pcVar2;
  FUN_0015155c("EventEplEffect_Draw",0x77,0,0,FUN_0032063c,0,puVar1,pcVar2);
  FUN_0015155c("EventEplEffect_Draw",0xd3,0,0,FUN_0032063c,0,puVar1,*puVar1);
  temp_v2 = VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar1[7] = temp_v0;
  puVar1[8] = temp_v1;
  puVar1[9] = temp_v2;
  FUN_001cd404(param_1,puVar1 + 2,1,0x80);
  return *puVar1;
}

} /* extern "C" */
