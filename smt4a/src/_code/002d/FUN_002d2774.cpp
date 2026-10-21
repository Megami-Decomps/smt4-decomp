/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2774` (_code @ 0x2d2774, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

int FUN_0013c174(unsigned char *, int *, int);
int asdMemFree(unsigned char *);
int asdTextureCreate(void);
int FUN_00226970(int, unsigned char *, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_002d2820; /* 0x2d2820 */
extern int *g_activeTextureSlot; /* 0x5806cc */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: FUN_00226970. */


void FUN_002d2774(void)

{
/* irregular: irregular input(s): in_r3; 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = in_r3;
  asdTextureCreate();
  *g_activeTextureSlot = temp_v0;
  puVar3 = &LAB_002d2820;
  FUN_0013c174(&LAB_002d2820,&temp_v2,0);
  FUN_00226970(temp_v0,puVar3,temp_v2,0x10000);
  asdMemFree(puVar3);
  asdTextureSetImage((AsdTexture*)temp_v0);
  piVar1 = g_activeTextureSlot;
  *(unsigned int *)(*g_activeTextureSlot + 0x3c) = 1;
  *(unsigned int *)(*piVar1 + 0x40) = 1;
  temp_v1 = 0x40;
  temp_v0 = 0;
  do {
    piVar1[temp_v0 + 1] = 0;
    piVar1[temp_v0 * 3 + 0x41] = 0;
    piVar1[temp_v0 * 3 + 0x42] = 0;
    temp_v1 = temp_v1 - 1;
    piVar1[temp_v0 * 3 + 0x43] = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
