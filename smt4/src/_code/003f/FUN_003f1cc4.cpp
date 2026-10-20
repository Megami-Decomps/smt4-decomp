/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1cc4` (_code @ 0x3f1cc4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int FUN_0034068c(...); /* 0x34068c */
extern int FUN_003472c8(...); /* 0x3472c8 */
extern unsigned char LAB_0034883c; /* 0x34883c */
extern unsigned char LAB_003494f0; /* 0x3494f0 */
extern unsigned char LAB_00376968; /* 0x376968 */
extern int FUN_00376d14(...); /* 0x376d14 */
extern unsigned int DAT_00464ff8; /* 0x464ff8 */
extern unsigned int DAT_00464ffc; /* 0x464ffc */
extern unsigned char g_asdSound; /* 0x4e1f68 */

/* Supplied declaration required: FUN_002c5d5c. */
extern int FUN_00377174(int);
extern int FUN_003771e0(unsigned char *);
extern int FUN_003773d4(int);
extern int FUN_00378a54(int);
extern int nw_snd_Sound3DListener_Sound3DListener_sub_object(int);


void FUN_003f1cc4(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  DAT_00464ff8 = 0;
  DAT_00464ffc = 0;
  temp_v0 = FUN_003771e0(&g_asdSound);
  temp_v0 = FUN_00378a54(temp_v0 + 0x184);
  temp_v0 = FUN_003773d4(temp_v0 + 0xc0);
  temp_v0 = temp_v0 + 0x278;
  FUN_002c5d5c(temp_v0,FUN_0034068c,0x50,4);
  temp_v0 = temp_v0 + 0x140;
  FUN_002c5d5c(temp_v0,&LAB_0034883c,0x3c,2);
  temp_v0 = temp_v0 + 0x78;
  FUN_002c5d5c(temp_v0,&LAB_003494f0,0x10,2);
  temp_v0 = temp_v0 + 0x20;
  FUN_002c5d5c(temp_v0,FUN_003472c8,0x3c,4);
  temp_v0 = FUN_00377174(temp_v0 + 0xf0);
  temp_v0 = temp_v0 + 0x3c;
  FUN_002c5d5c(temp_v0,FUN_00376d14,0x84,0x10);
  temp_v0 = temp_v0 + 0x840;
  FUN_002c5d5c(temp_v0,&LAB_00376968,4,0x10);
  temp_v0 = nw_snd_Sound3DListener_Sound3DListener_sub_object(temp_v0 + 0x100);
  *(unsigned int *)(temp_v0 + 0xf4) = 0;
  *(unsigned int *)(temp_v0 + 0xf8) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0xffffffff;
  return;
}

} /* extern "C" */
