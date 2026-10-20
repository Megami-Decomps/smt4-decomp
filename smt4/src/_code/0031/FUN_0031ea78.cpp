/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ea78` (_code @ 0x31ea78, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeLocked(void);
int effMenuNodeCreate(void);
int libc_strcpy(unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0031eadc; /* 0x31eadc */
extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int *DAT_0044eac4; /* 0x44eac4 */
extern int DAT_0044f864; /* 0x44f864 */

extern int FUN_002468e0(unsigned int, int);
/* Supplied declaration required: asdMemoryFreeLocked. */
/* Supplied declaration required: effMenuNodeCreate. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int libc_strlen(int);


void FUN_0031ea78(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  if (DAT_0044eac4 != (unsigned int *)0x0) {
    asdMemoryFreeLocked();
  }
  puVar2 = (unsigned int *)&LAB_0031eadc;
  effMenuNodeCreate();
  DAT_0044eac4 = puVar2;
  *puVar2 = 0xc2;
  puVar2[1] = 200;
  DAT_0044eac4[5] = 9;
  temp_v1 = FUN_002468e0(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  puVar2 = DAT_0044eac4;
  libc_strcpy((unsigned char *)((int)DAT_0044eac4 + 0x21));
  temp_v0 = libc_strlen(temp_v1 + 0x9c);
  puVar2[4] = temp_v0;
  return;
}

} /* extern "C" */
