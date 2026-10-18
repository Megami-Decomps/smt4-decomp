/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295720` (_code @ 0x295720, 0x144 bytes) from smt4_v1.2.0.cxi.
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

extern int FUN_00206528(); /* 0x206528 */
extern int FUN_0022535c(); /* 0x22535c */
extern unsigned char LAB_002958b4; /* 0x2958b4 */
extern unsigned char LAB_002958c4; /* 0x2958c4 */
extern unsigned char LAB_002958d8; /* 0x2958d8 */
extern unsigned char DAT_003ff838; /* 0x3ff838 */
extern unsigned char DAT_003ff898; /* 0x3ff898 */
extern unsigned char DAT_003ff9dc; /* 0x3ff9dc */
extern unsigned char DAT_003ffa6c; /* 0x3ffa6c */
extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c3178. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_00295720(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if (DAT_00434210 == 0) {
    temp_v0 = 0x100;
    FUN_002c498c(0x100,0x100,0,0x30c,1);
    DAT_00434210 = temp_v0;
    FUN_002c4938();
    *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x308) = 0;
    *(unsigned int *)(temp_v0 + 0x2fc) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x300) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x304) = 0;
    *(unsigned int *)(temp_v0 + 0x2e8) = 0;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
    puVar2 = &LAB_002958b4;
    FUN_002c5788(&LAB_002958b4,2,0,0,FUN_00206528,0,0);
    *(unsigned char **)(temp_v0 + 0x2e4) = puVar2;
    FUN_002c4a08(&LAB_002958c4,0x7d,0,0,FUN_0022535c,0,0,puVar2);
    FUN_002c4a08(&LAB_002958d8,0xdb,0,0,FUN_0022535c,0,0,*(unsigned int *)(temp_v0 + 0x2e4));
    FUN_002c3178(temp_v0);
    FUN_002c312c(temp_v0,&DAT_003ff838,0x60,&DAT_003ff898,0x144,&DAT_003ff9dc,0x90,0,0,&DAT_003ffa6c,
                 0x9bc);
  }
  return;
}
