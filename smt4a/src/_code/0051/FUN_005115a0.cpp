/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005115a0` (_code @ 0x5115a0, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(int, int, int);
int FUN_002f5020(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00401654(...); /* 0x401654 */
extern int objectRegisterPart(...); /* 0x41306c */
extern unsigned char LAB_00417a10; /* 0x417a10 */
extern unsigned char LAB_0045b824; /* 0x45b824 */
extern int FUN_0045bbdc(...); /* 0x45bbdc */

/* Supplied declaration required: emptyStub_002f4370. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_0045c0ac(int);
extern int installVtbl55BDE0(void);
extern int FUN_0045c310(int);
extern int FUN_0045e798(int);
extern int nw_snd_Sound3DListener_Sound3DListener_sub_object(int);


void FUN_005115a0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = installVtbl55BDE0();
  temp_v0 = FUN_0045e798(temp_v0 + 0x194);
  temp_v0 = FUN_0045c310(temp_v0 + 0x118);
  temp_v0 = temp_v0 + 0x278;
  FUN_002f5020(temp_v0,FUN_00401654,0x70,4);
  temp_v0 = temp_v0 + 0x1c0;
  FUN_002f5020(temp_v0,&LAB_00417a10,0x3c,2);
  temp_v0 = temp_v0 + 0x80;
  FUN_002f5020(temp_v0,objectRegisterPart,0x3c,4);
  temp_v0 = FUN_0045c0ac(temp_v0 + 0xf0);
  temp_v0 = temp_v0 + 0x3c;
  FUN_002f5020(temp_v0,FUN_0045bbdc,0x88,0x10);
  temp_v0 = temp_v0 + 0x880;
  FUN_002f5020(temp_v0,&LAB_0045b824,4,0x10);
  temp_v0 = nw_snd_Sound3DListener_Sound3DListener_sub_object(temp_v0 + 0x100);
  *(unsigned int *)(temp_v0 + 0xf8) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0;
  *(unsigned int *)(temp_v0 + 0x100) = 0xffffffff;
  emptyStub_002f4370(temp_v0 - 0x1210,0x3f2cb0,0x100000);
  return;
}

} /* extern "C" */
