/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b084` (_code @ 0x38b084, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char *, unsigned char *, unsigned char [132]);
int FUN_001654f8(unsigned char [128], unsigned char [132], int);
int libc_strcpy(unsigned char [128], int);
int FUN_0038892c(unsigned char [256], unsigned int);
int FUN_003c1060(void);

extern unsigned char LAB_0038b124; /* 0x38b124 */
extern int g_npcRoom; /* 0x588124 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_0038892c. */
/* Supplied declaration required: FUN_003c1060. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0038b084(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned char *puVar5;
  unsigned char temp_v3 [256];
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v0 = g_npcRoom;
  puVar5 = (unsigned char *)0x0;
  temp_v2 = 0;
  if (0 < *(int *)(g_npcRoom + 0xe4)) {
    do {
      temp_v1 = *(int *)(temp_v0 + *(short *)(temp_v0 + temp_v2 * 0x10 + 100) * 4 + 0x28);
      if (temp_v1 != 0) {
        libc_strcpy(temp_v4,temp_v1 + 0x26);
        FUN_001654f8(temp_v4,temp_v5,0);
        puVar3 = temp_v3 + (int)puVar5;
        textFormatBuffer(puVar3,&LAB_0038b124,temp_v5);
        puVar5 = puVar5 + (int)puVar3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0xe4));
  }
  FUN_003c1060();
  FUN_0038892c(temp_v3,*(unsigned int *)(temp_v0 + 0x104));
  return;
}

} /* extern "C" */
