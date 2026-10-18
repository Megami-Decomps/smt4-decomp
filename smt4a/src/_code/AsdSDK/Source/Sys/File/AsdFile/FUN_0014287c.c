/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014287c` (_code @ 0x14287c, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_0010031d; /* 0x10031d */
extern unsigned char LAB_00100327; /* 0x100327 */
extern unsigned char LAB_0010032d; /* 0x10032d */
extern int FUN_0014b66c(); /* 0x14b66c */
extern unsigned char DAT_005b3fb4; /* 0x5b3fb4 */
extern unsigned int DAT_005b3fc4; /* 0x5b3fc4 */
extern unsigned int *DAT_005b3fc8; /* 0x5b3fc8 */
extern unsigned int DAT_005b3fcc; /* 0x5b3fcc */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0016dfc4. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


void FUN_0014287c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char temp_v5 [4];
  
  DAT_005b3fb4 = 0;
  temp_v0 = 0x100;
  FUN_00167ab4(0x100,0x100,0,0x1000,0x1000,1);
  puVar2 = (unsigned int *)0x18;
  DAT_005b3fc4 = temp_v0;
  FUN_00178b04(0x18,"c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\File\\AsdFile.cpp",0x3bd);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(unsigned char *)(puVar2 + 4) = 0;
  }
  DAT_005b3fc8 = puVar2;
  FUN_0016dfc4();
  temp_v1 = 4;
  temp_v2 = &LAB_0010031d;
  puVar2 = &DAT_005b3fcc;
  temp_v3 = &LAB_0010032d;
  temp_v4 = &LAB_00100327;
  FUN_002fb0d4(&DAT_005b3fcc,&temp_v1,FUN_0014b66c,temp_v5,DAT_005b3fc8[3] + DAT_005b3fc8[2],0x12,
               0xfffffffe,0);
  if (((unsigned int)puVar2 & 0x7e00000) != 0x600000 && (int)puVar2 < 0) {
    FUN_002e3140();
  }
  return;
}
