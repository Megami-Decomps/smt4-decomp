/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002feadc` (_code @ 0x2feadc, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025921c(unsigned char [256], unsigned int);
int FUN_00259258(void);
int FUN_002bcfc0(unsigned char [128], unsigned char [132]);
int FUN_002be624(unsigned char *, unsigned char *, unsigned char [132]);
int libc_strcpy(unsigned char [128], int);

extern unsigned char LAB_002feb78; /* 0x2feb78 */
extern int g_npcRoom; /* 0x44d198 */

/* Supplied declaration required: FUN_0025921c. */
/* Supplied declaration required: FUN_00259258. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: libc_strcpy. */


/* WARNING: Type propagation algorithm not settling */

void FUN_002feadc(void)

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
        libc_strcpy(temp_v4,temp_v1 + 0x54);
        FUN_002bcfc0(temp_v4,temp_v5);
        puVar3 = temp_v3 + (int)puVar5;
        FUN_002be624(puVar3,&LAB_002feb78,temp_v5);
        puVar5 = puVar5 + (int)puVar3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0xe4));
  }
  FUN_00259258();
  FUN_0025921c(temp_v3,*(unsigned int *)(temp_v0 + 0x104));
  return;
}

} /* extern "C" */
