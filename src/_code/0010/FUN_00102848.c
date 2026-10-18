/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102848` (_code @ 0x102848, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00102988; /* 0x102988 */
extern int FUN_0010a954(); /* 0x10a954 */
extern int FUN_0010edd4(); /* 0x10edd4 */
extern int FUN_0010efb4(); /* 0x10efb4 */
extern int FUN_0010f060(); /* 0x10f060 */
extern unsigned int *DAT_0043e18c; /* 0x43e18c */
extern unsigned int *DAT_0043e190; /* 0x43e190 */
extern unsigned int *DAT_0043e194; /* 0x43e194 */
extern romwright_code *pcRam00464d74; /* 0x464d74 */

/* Supplied declaration required: FUN_0010a748. */
/* Supplied declaration required: FUN_0010af84. */
/* Supplied declaration required: FUN_0010b350. */
/* Supplied declaration required: FUN_0010e5bc. */
/* Supplied declaration required: FUN_0010ec4c. */
/* Supplied declaration required: FUN_002c4bf0. */
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_00102848(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  FUN_002c5b04(5,0);
  FUN_002c4e28(0xe);
  FUN_002c5ab8(5,0);
  temp_v0 = 0;
  do {
    puVar1 = (unsigned int *)FUN_002c5ab8(0xe,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002c4c2c();
  DAT_0043e18c = puVar1;
  FUN_002c4c2c();
  DAT_0043e190 = puVar1;
  FUN_002c4c2c();
  DAT_0043e194 = puVar1;
  *(unsigned char *)((int)DAT_0043e18c + 9) = 1;
  *(unsigned char *)((int)DAT_0043e190 + 9) = 6;
  *(unsigned char *)((int)puVar1 + 9) = 0xc;
  FUN_0010af84();
  FUN_0010a748();
  FUN_0010b350();
  FUN_002c4c00(&LAB_00102988,0xea,0,0,FUN_0010a954,0,DAT_0043e18c,*DAT_0043e18c);
  puVar1 = DAT_0043e18c;
  *(unsigned char *)(DAT_0043e18c + 0x284) = 1;
  *(unsigned char *)(DAT_0043e190 + 0x284) = 0;
  *(unsigned char *)(DAT_0043e194 + 0x284) = 0;
  FUN_002c4bf0(puVar1[1],0x100);
  FUN_002c4bf0(DAT_0043e190[1],0x200);
  FUN_002c4bf0(DAT_0043e194[1],0x100);
  FUN_0010ec4c(FUN_0010efb4);
  FUN_0010e5bc(FUN_0010edd4);
  pcRam00464d74 = FUN_0010f060;
  return;
}
