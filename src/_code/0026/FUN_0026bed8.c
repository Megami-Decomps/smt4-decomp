/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026bed8` (_code @ 0x26bed8, 0x214 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_0019205c(); /* 0x19205c */
extern unsigned char LAB_001a8098; /* 0x1a8098 */
extern int FUN_001a8158(); /* 0x1a8158 */
extern int FUN_001b17ec(); /* 0x1b17ec */
extern int FUN_001e1628(); /* 0x1e1628 */
extern unsigned char LAB_002070cc; /* 0x2070cc */
extern int FUN_0020718c(); /* 0x20718c */
extern int FUN_0021948c(); /* 0x21948c */
extern int FUN_0025ccf8(); /* 0x25ccf8 */
extern unsigned char LAB_0025cd64; /* 0x25cd64 */
extern int FUN_00292200(); /* 0x292200 */
extern unsigned char LAB_0029226c; /* 0x29226c */
extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_001d12b0. */
extern unsigned char *FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b7f0a. */


void FUN_0026bed8(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char *pbVar2;
  unsigned char temp_v1;
  
  temp_v0 = DAT_0043dcf0;
  pbVar2 = (unsigned char *)FUN_002a0fac();
  temp_v1 = ~(*pbVar2 >> 7) & 1;
  if ((*pbVar2 & 0x7f) == 2) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,&LAB_0029226c);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,&LAB_0025cd64);
    }
  }
  if ((*pbVar2 & 0x7f) == 1) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_001b17ec);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_0021948c);
    }
  }
  if ((*pbVar2 & 0x7f) == 4) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_00292200);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_0025ccf8);
    }
  }
  if ((*pbVar2 & 0x7f) == 5) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_0019205c);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_001e1628);
    }
  }
  if ((*pbVar2 & 0x7f) == 0x1f) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_001a8158);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,FUN_0020718c);
    }
  }
  if ((*pbVar2 & 0x7f) == 3) {
    if (temp_v1 != 0) {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,&LAB_001a8098);
    }
    else {
      FUN_002b7f0a(temp_v0 + 0x738,0x18,8,&LAB_002070cc);
    }
  }
  FUN_001d12b0();
  return;
}
