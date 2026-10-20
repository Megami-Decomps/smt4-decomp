/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0940` (_code @ 0x3b0940, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(...);
int FUN_0020b908(int, int);
int FUN_0022e774(void);
int FUN_0023c08c(int);
int FUN_002a7b74(void);
int FUN_0035dd74(void);
int FUN_003857b4(int);
int FUN_003d2d34(unsigned int, int, int);
int linkHolderClearFlag(int);
int FUN_004db450(unsigned int, unsigned int *);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int *DAT_0057f290; /* 0x57f290 */

extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0020b908. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_0023c08c. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002a7b74. */
/* Supplied declaration required: FUN_0035dd74. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: linkHolderClearFlag. */
extern unsigned int FUN_004dad8c(unsigned int);
/* Supplied declaration required: FUN_004db450. */


void FUN_003b0940(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  
  puVar1 = DAT_0057f290;
  temp_v0 = FUN_0026140c();
  FUN_003d2d34(puVar1[0x123],0,0x3c);
  if ((-1 < *(short *)(temp_v0 + 0x20)) &&
     ((temp_v1 = FUN_001ab854(), temp_v1 == 0 || (*(short *)(temp_v1 + 0x62) != *(short *)(temp_v0 + 0x24)))
     )) {
    *(short *)(temp_v0 + 0x20) = -1;
    *(unsigned short *)(temp_v0 + 0x24) = 0;
  }
  if ((-1 < *(short *)(temp_v0 + 0x22)) &&
     ((temp_v1 = FUN_001ab854(), temp_v1 == 0 || (*(short *)(temp_v1 + 0x62) != *(short *)(temp_v0 + 0x26)))
     )) {
    *(unsigned short *)(temp_v0 + 0x22) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x26) = 0;
  }
  temp_v2 = *puVar1;
  FUN_004db450(temp_v2,puVar1 + 0x23df);
  *(short *)(puVar1 + 0x23de) = (short)temp_v2;
  FUN_00203b40(puVar1 + 0x23ac,temp_v2,10,1,1,1);
  FUN_00203b40(puVar1 + 0x23c5,*(unsigned short *)(puVar1 + 0x23de),1,4,1,1);
  piVar6 = (int *)(puVar1 + 0x19a6);
  *piVar6 = 0;
  temp_v0 = 0;
  if (*(short *)(puVar1 + 0x23de) != 0) {
    do {
      temp_v3 = (unsigned int)*(unsigned short *)((int)puVar1 + temp_v0 * 2 + 0x8f7c);
      FUN_0035dd74();
      temp_v1 = temp_v0 + 1;
      *(unsigned short *)((int)puVar1 + temp_v0 * 2 + 0x62a0) = *(unsigned short *)(temp_v3 + 0x1a);
      *piVar6 = *piVar6 + 1;
      temp_v0 = temp_v1;
    } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x23de));
  }
  temp_v2 = FUN_004dad8c(*puVar1);
  puVar1[0x2429] = temp_v2;
  FUN_0022e774();
  puVar1[0x246c] = 0;
  FUN_002a7b74();
  FUN_0023c08c(0x12);
  FUN_0020b908(0x26,1);
  temp_v0 = lmapSceneGetScript();
  if (temp_v0 != 0) {
    FUN_003857b4(1);
    linkHolderClearFlag(temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
