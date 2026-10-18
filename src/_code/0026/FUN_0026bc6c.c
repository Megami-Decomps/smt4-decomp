/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026bc6c` (_code @ 0x26bc6c, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0019215c(); /* 0x19215c */
extern unsigned char LAB_001a81a8; /* 0x1a81a8 */
extern int FUN_001a8268(); /* 0x1a8268 */
extern int FUN_001b18f0(); /* 0x1b18f0 */
extern int FUN_001e1728(); /* 0x1e1728 */
extern unsigned char LAB_00207230; /* 0x207230 */
extern int FUN_002072f0(); /* 0x2072f0 */
extern int FUN_00219588(); /* 0x219588 */
extern int FUN_0025cac0(); /* 0x25cac0 */
extern unsigned char LAB_0025cb2c; /* 0x25cb2c */
extern int FUN_00291f5c(); /* 0x291f5c */
extern unsigned char LAB_00291fc8; /* 0x291fc8 */
extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_001d13b0. */
extern unsigned char *FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */


void FUN_0026bc6c(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v0 = DAT_0043dcf0;
  pbVar2 = (unsigned char *)FUN_002a0d0c();
  temp_v1 = ~(*pbVar2 >> 7) & 1;
  if ((*pbVar2 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,&LAB_00291fc8);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,&LAB_0025cb2c);
    }
  }
  if ((*pbVar2 & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_001b18f0);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_00219588);
    }
  }
  if ((*pbVar2 & 0x7f) == 4) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_00291f5c);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_0025cac0);
    }
  }
  if ((*pbVar2 & 0x7f) == 5) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_0019215c);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_001e1728);
    }
  }
  if ((*pbVar2 & 0x7f) == 0x1f) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_001a8268);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,FUN_002072f0);
    }
  }
  if ((*pbVar2 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,&LAB_001a81a8);
    }
    else {
      FUN_002b7bca(temp_v0 + 0x738,0x18,8,&LAB_00207230);
    }
  }
  FUN_001d13b0();
  return;
}
