/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c58ac` (_code @ 0x2c58b0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9178(void);
int asdTextureSetImage(void);
int asdTMTexTableLoadSprites(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002b9178. */
extern int asdTMTexTableCallFileB(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: asdTextureSetImage. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */


int FUN_002c58ac(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  asdTMTexTableLoadSprites();
  temp_v0 = asdTMTexTableCallFileB(0x24,0,param_3,param_4,unaff_r4);
  if (temp_v0 != 0) {
    FUN_002b9178();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x10000;
      if (*(int *)(temp_v0 + 8) != 0) {
        asdTextureSetImage();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
