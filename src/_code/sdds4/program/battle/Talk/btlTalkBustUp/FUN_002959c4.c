/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002959c4` (_code @ 0x2959c4, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_002063c4(); /* 0x2063c4 */
extern int FUN_00225270(); /* 0x225270 */
extern unsigned char LAB_00295b58; /* 0x295b58 */
extern unsigned char LAB_00295b68; /* 0x295b68 */
extern unsigned char LAB_00295b7c; /* 0x295b7c */
extern unsigned char DAT_003ff884; /* 0x3ff884 */
extern unsigned char DAT_003ff8e4; /* 0x3ff8e4 */
extern unsigned char DAT_003ffa28; /* 0x3ffa28 */
extern unsigned char DAT_003ffab8; /* 0x3ffab8 */
extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002959c4(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if (DAT_00434210 == 0) {
    temp_v0 = FUN_002c4b84(0x100,0x100,0,0x30c,1);
    DAT_00434210 = temp_v0;
    FUN_002c4b30(temp_v0,0x30c);
    *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x308) = 0;
    *(unsigned int *)(temp_v0 + 0x2fc) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x300) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x304) = 0;
    *(unsigned int *)(temp_v0 + 0x2e8) = 0;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
    puVar2 = &LAB_00295b58;
    FUN_002c5978(&LAB_00295b58,2,0,0,FUN_002063c4,0,0);
    *(unsigned char **)(temp_v0 + 0x2e4) = puVar2;
    FUN_002c4c00(&LAB_00295b68,0x7d,0,0,FUN_00225270,0,0,puVar2);
    FUN_002c4c00(&LAB_00295b7c,0xdb,0,0,FUN_00225270,0,0,*(unsigned int *)(temp_v0 + 0x2e4));
    FUN_002c3344(temp_v0);
    FUN_002c32f8(temp_v0,&DAT_003ff884,0x60,&DAT_003ff8e4,0x144,&DAT_003ffa28,0x90,0,0,&DAT_003ffab8,
                 0x9bc);
  }
  return;
}
