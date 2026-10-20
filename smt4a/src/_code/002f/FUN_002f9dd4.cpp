/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9dd4` (_code @ 0x2f9dd4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int FUN_002e6e5c(int *);
int FUN_003034ec(...);

/* stack frame of param_4: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned char sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char g_flagBlock; /* 0x594958 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_003034ec. */


unsigned int
FUN_002f9dd4(unsigned int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puStack_1c;
  unsigned int uStack_18;
  int temp_v2;
  
  puStack_1c = param_2;
  uStack_18 = param_3;
  temp_v2 = param_4;
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x14)) != '\0') {
    temp_v1 = param_1;
    temp_v0 = onlineGetActiveLock();
    FUN_002e6e34(&temp_v1,temp_v0);
    temp_v2 = romwright_piece_3_1((((unsigned int)(temp_v2) >> 8) & 0xffffffU),*param_2);
    temp_v0 = FUN_003034ec(param_1,&temp_v2);
    FUN_002e6e5c(&temp_v1);
  }
  else {
    temp_v1 = romwright_piece_3_1((int)((unsigned int)param_1 >> 8),*param_2);
    temp_v0 = FUN_003034ec(param_1);
  }
  return temp_v0;
}

} /* extern "C" */
