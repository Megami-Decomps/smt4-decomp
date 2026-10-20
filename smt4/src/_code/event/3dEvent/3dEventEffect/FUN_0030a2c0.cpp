/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a2c0` (_code @ 0x30a2c0, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1248(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int VectorSignedToFloat(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_00224820(...); /* 0x224820 */
extern int FUN_002248b8(...); /* 0x2248b8 */
extern unsigned char LAB_002fed38; /* 0x2fed38 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a1248. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int FUN_0030a2c0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  unsigned int in_fpscr;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x2c,1);
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
  FUN_002c5788("EventEplEffect",2,0,0,FUN_00224820,&LAB_002fed38,puVar1);
  *puVar1 = (unsigned int)pcVar2;
  FUN_002c4a08("EventEplEffect_Draw",0x75,0,0,FUN_002248b8,0,puVar1,pcVar2);
  FUN_002c4a08("EventEplEffect_Draw",0xd3,0,0,FUN_002248b8,0,puVar1,*puVar1);
  temp_v2 = VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  puVar1[7] = temp_v0;
  puVar1[8] = temp_v1;
  puVar1[9] = temp_v2;
  FUN_002a1248(param_1,puVar1 + 2,1,0x80);
  return *puVar1;
}

} /* extern "C" */
