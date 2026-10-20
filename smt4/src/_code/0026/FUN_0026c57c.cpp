/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c57c` (_code @ 0x26c57c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00210194(int);
int FUN_0029bb14(void);
int FUN_0029bb3c(unsigned char *, int);
int FUN_002a0428(void);
int FUN_002b2b5c(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0026c61c; /* 0x26c61c */
extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00210194. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_0029bb3c. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002b2b5c. */


void FUN_0026c57c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  temp_v0 = DAT_0043dd68;
  FUN_002b2b5c(*(unsigned int *)(DAT_0043dd68 + 0x95c8));
  piVar4 = (int *)(temp_v0 + 0x95cc);
  if (*piVar4 == 0) {
    puVar2 = &LAB_0026c61c;
    FUN_0029bb3c(&LAB_0026c61c,7);
    *piVar4 = (int)puVar2;
    FUN_002a0428();
    puVar3 = (unsigned int *)*piVar4;
    if ((*puVar3 & 4) != 0) {
      *puVar3 = *puVar3 & 0xfffffffb;
      *(unsigned int *)(puVar3[2] + 0x74) = 0x3f800000;
      FUN_0029bb14();
    }
    FUN_00210194(*piVar4);
    return;
  }
  return;
}

} /* extern "C" */
