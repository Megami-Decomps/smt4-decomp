/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b280` (_code @ 0x37b280, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0026c568(); /* 0x26c568 */
extern int FUN_00334a54(); /* 0x334a54 */
extern unsigned int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_0014afd0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0014e38c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00163060. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00191e00(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);
extern int FUN_001a6508(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_002e6354. */


void FUN_0037b280(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0xa8,1);
  FUN_002e6354();
  puVar1[0x21] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[4] = 0x16;
  *puVar1 = 0;
  puVar1[7] = 0x43160000;
  puVar1[8] = 0x43160000;
  temp_v0 = FUN_00187180(0x1a,1);
  temp_v1 = FUN_00192798();
  FUN_00192748(temp_v0);
  puVar1[5] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  temp_v1 = FUN_00162ea4();
  if (temp_v1 != 0) {
    *(unsigned char *)(puVar1 + 0x1f) = 1;
  }
  else {
    if (puVar1[5] != -1) {
      temp_v1 = FUN_001a6508(DAT_00570280,puVar1[4],puVar1[5],1);
      if (temp_v1 != 0) {
        temp_v0 = FUN_00191e00(DAT_00570280,puVar1[4],puVar1[5],0x10000);
      }
      else {
        temp_v0 = FUN_0014afd0(puVar1[4],puVar1[5]);
      }
      puVar1[3] = temp_v0;
    }
    *(unsigned char *)(puVar1 + 0x1f) = 0;
  }
  puVar1[0xb] = 0x3f800000;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  *(unsigned char *)((int)puVar1 + 0x31) = 1;
  puVar1[10] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  FUN_0014e38c("EVE_BustupTex",4,0,0,FUN_0026c568,FUN_00334a54,puVar1);
  return;
}
