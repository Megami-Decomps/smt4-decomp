/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002637c8` (_code @ 0x2637c8, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00263940; /* 0x263940 */
extern unsigned char LAB_00263954; /* 0x263954 */
extern unsigned char LAB_00263968; /* 0x263968 */
extern int FUN_0032a850(); /* 0x32a850 */
extern unsigned char LAB_0032a9fc; /* 0x32a9fc */
extern unsigned char DAT_00403a28; /* 0x403a28 */
extern unsigned char DAT_00403a40; /* 0x403a40 */
extern unsigned char DAT_00403a58; /* 0x403a58 */
extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002637c8(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e140 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x140,1);
    DAT_0043e140 = puVar1;
  }
  puVar1 = DAT_0043e140;
  FUN_002c4938();
  puVar2 = &LAB_00263940;
  FUN_002c5788(&LAB_00263940,1,0,0,&LAB_0032a9fc,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_00263954,0x81,0,0,FUN_0032a850,0,0,puVar2);
  FUN_002c4a08(&LAB_00263968,0xdf,0,0,FUN_0032a850,0,0,*puVar1);
  puVar1 = DAT_0043e140;
  FUN_002c3178(DAT_0043e140 + 5);
  FUN_002c312c(puVar1 + 5,&DAT_00403a28,0x18,&DAT_00403a40,0x18,0,0,0,0,&DAT_00403a58,0x70);
  FUN_002bd954(puVar1 + 0xd,0xe,0x87,puVar1 + 5,1);
  FUN_002bee58(puVar1 + 0xd,0);
  return;
}
