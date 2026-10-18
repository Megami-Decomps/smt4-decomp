/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1ef0` (_code @ 0x3f1ef0, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int FUN_003408c4(); /* 0x3408c4 */
extern int FUN_0034752c(); /* 0x34752c */
extern unsigned char LAB_00348a94; /* 0x348a94 */
extern unsigned char LAB_00349748; /* 0x349748 */
extern unsigned char LAB_00376b78; /* 0x376b78 */
extern int FUN_00376f24(); /* 0x376f24 */
extern unsigned int DAT_00464ff8; /* 0x464ff8 */
extern unsigned int DAT_00464ffc; /* 0x464ffc */
extern unsigned char DAT_004e1f68; /* 0x4e1f68 */

/* Supplied declaration required: FUN_002c5f58. */
extern int FUN_00377384(int);
extern int FUN_003773f0(unsigned char *);
extern int FUN_0037740c(int);
extern int FUN_003775e4(int);
extern int FUN_00378c64(int);


void FUN_003f1ef0(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  DAT_00464ff8 = 0;
  DAT_00464ffc = 0;
  temp_v0 = FUN_003773f0(&DAT_004e1f68);
  temp_v0 = FUN_00378c64(temp_v0 + 0x184);
  temp_v0 = FUN_003775e4(temp_v0 + 0xc0);
  temp_v0 = temp_v0 + 0x278;
  FUN_002c5f58(temp_v0,FUN_003408c4,0x50,4);
  temp_v0 = temp_v0 + 0x140;
  FUN_002c5f58(temp_v0,&LAB_00348a94,0x3c,2);
  temp_v0 = temp_v0 + 0x78;
  FUN_002c5f58(temp_v0,&LAB_00349748,0x10,2);
  temp_v0 = temp_v0 + 0x20;
  FUN_002c5f58(temp_v0,FUN_0034752c,0x3c,4);
  temp_v0 = FUN_00377384(temp_v0 + 0xf0);
  temp_v0 = temp_v0 + 0x3c;
  FUN_002c5f58(temp_v0,FUN_00376f24,0x84,0x10);
  temp_v0 = temp_v0 + 0x840;
  FUN_002c5f58(temp_v0,&LAB_00376b78,4,0x10);
  temp_v0 = FUN_0037740c(temp_v0 + 0x100);
  *(unsigned int *)(temp_v0 + 0xf4) = 0;
  *(unsigned int *)(temp_v0 + 0xf8) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0xffffffff;
  return;
}
