/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afc2c` (_code @ 0x3afc2c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(unsigned char [132], int, unsigned char *, unsigned char *, char *);
int FUN_0013c174(unsigned char *, int *, int);
int asdMemFree(unsigned int);
int asdTextureCreate(void);
int asdTextureSetImage(int);
int asdTexTgaLoadNw4c(int, unsigned char *, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char LAB_003afd10; /* 0x3afd10 */
extern unsigned char LAB_003afd24; /* 0x3afd24 */
extern char s_flar02_02_00570300[10]; /* 0x570300 */

/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: asdTextureSetImage. */
/* Supplied declaration required: asdTexTgaLoadNw4c. */


void FUN_003afc2c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [132];
  
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x4c;
    piVar4 = (int *)(temp_v0 + 0x5702fc);
    if ((*(char *)(temp_v0 + 0x570346) != '\x01') && (*piVar4 == 0)) {
      temp_v1 = 0;
      asdTextureCreate();
      *piVar4 = temp_v1;
      FUN_001028b8(temp_v4,0x80,&LAB_003afd24,&LAB_003afd10,s_flar02_02_00570300 + temp_v0);
      puVar3 = temp_v4;
      FUN_0013c174(puVar3,&temp_v3,0);
      *(unsigned char **)(temp_v0 + 0x570340) = puVar3;
      asdTexTgaLoadNw4c(*piVar4,puVar3,temp_v3,0x20000);
      *(unsigned int *)(*piVar4 + 0xc) = 0x2000000;
      *(unsigned int *)(*piVar4 + 0x3c) = 1;
      *(unsigned int *)(*piVar4 + 0x40) = 1;
      *(unsigned int *)(*piVar4 + 0x38) = 0;
      asdTextureSetImage(*piVar4);
      *(unsigned char *)(temp_v0 + 0x570344) = 1;
      asdMemFree(*(unsigned int *)(temp_v0 + 0x570340));
      *(unsigned int *)(temp_v0 + 0x570340) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x1a);
  return;
}

} /* extern "C" */
