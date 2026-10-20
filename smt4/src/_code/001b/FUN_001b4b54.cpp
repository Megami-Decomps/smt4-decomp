/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4b54` (_code @ 0x1b4b54, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287098(unsigned int, unsigned int);
int FUN_0028c618(unsigned int, int);
int nodeSetTranslation(unsigned int, int, int);
int FUN_002a5710(unsigned int, unsigned int);

extern int DAT_0044cda0; /* 0x44cda0 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_00287098. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: nodeSetTranslation. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_001b4b54(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *unaff_r4;
  char *pcVar3;
  
  temp_v0 = DAT_0044cda0;
  pcVar3 = (char *)(DAT_0044cda0 + 0x10);
  if (pcVar3 != (char *)0x0) {
    unaff_r4 = *(unsigned int **)(DAT_0044cda0 + 0x2c);
  }
  if (pcVar3 != (char *)0x0 && unaff_r4 != (unsigned int *)0x0) {
    if ((*(signed char *)((unsigned char *)&g_gameState + 0x22)) != '\0') {
      if ((*unaff_r4 & 2) == 0) {
        *unaff_r4 = *unaff_r4 | 2;
        *(unsigned char *)(*(int *)(unaff_r4[2] + 0x2c) + 0x1f6) = 0;
      }
    }
    else {
      temp_v1 = *unaff_r4;
      if (*pcVar3 != '\0') {
        if ((temp_v1 & 2) != 0) {
          *unaff_r4 = temp_v1 & 0xfffffffd;
          *(unsigned char *)(*(int *)(unaff_r4[2] + 0x2c) + 0x1f6) = 1;
        }
      }
      else if ((temp_v1 & 2) == 0) {
        *unaff_r4 = temp_v1 | 2;
        *(unsigned char *)(*(int *)(unaff_r4[2] + 0x2c) + 0x1f6) = 0;
      }
      if (*(char *)(temp_v0 + 0x28) != '\0') {
        nodeSetTranslation(unaff_r4[2],0,temp_v0 + 0x14);
        FUN_0028c618(unaff_r4[2],0);
        FUN_002a5710(unaff_r4[2],*(unsigned int *)(temp_v0 + 0x24));
        FUN_00287098(unaff_r4[2],*(unsigned int *)(temp_v0 + 0x24));
        *(unsigned char *)(temp_v0 + 0x28) = 0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
