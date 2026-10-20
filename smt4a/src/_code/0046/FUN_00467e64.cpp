/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467e64` (_code @ 0x467e64, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001505ac(unsigned int *, int, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int FUN_0019ea64(int);
int FUN_001ad9b4(void);
int FUN_00229314(int);
int FUN_002804b0(unsigned char *, unsigned int *, int);
int FUN_002e6354(unsigned int *, int);
int FUN_002e6dd4(int, int);
int FUN_0031e198(void);
int FUN_00417e08(int);
int FUN_0046ba10(void);
int FUN_0046bb98(int);
int FUN_0046bc14(int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(unsigned int *);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00467fd4; /* 0x467fd4 */
extern unsigned char LAB_00467ff8; /* 0x467ff8 */
extern unsigned char DAT_00533458; /* 0x533458 */
extern unsigned char DAT_00533470; /* 0x533470 */

/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0019ea64. */
extern int FUN_0019f1a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_00229314. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: FUN_0046ba10. */
/* Supplied declaration required: FUN_0046bb98. */
/* Supplied declaration required: FUN_0046bc14. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00467e64(unsigned int *param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  FUN_0046ba10();
  *param_1 = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  FUN_002e6354(param_1 + 0xf3,0x640);
  FUN_002804b0(&LAB_00467fd4,param_1 + 0xa1,0);
  FUN_002804b0(&LAB_00467ff8,param_1 + 0xa2,0);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(param_1 + 7);
  FUN_001505ac(param_1 + 7,0,0,&DAT_00533458,0x18,0,0,0,0,&DAT_00533470,0xa8);
  FUN_0046bb98((int)param_1 + 0x19);
  FUN_0046bc14((int)param_1 + 0x19);
  param_1[0x2b5] = 0;
  param_1[0x339] = 0;
  param_1[0x338] = 0;
  param_1[0x2ae] = 0;
  *(unsigned char *)((int)param_1 + 0x1b) = 0;
  FUN_0031e198();
  FUN_0019ea64(0);
  FUN_00229314(0);
  temp_v2 = 0x15e;
  do {
    temp_v0 = temp_v2;
    FUN_001ad9b4();
    if (((temp_v0 != 0) && (*(char *)(temp_v0 + 6) == '\0')) &&
       (temp_v1 = FUN_0019f1a4(temp_v2,1), temp_v1 == 0)) {
      FUN_00417e08(temp_v2);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  FUN_002e6dd4((int)param_1 + 0xcf6,0x150);
  FUN_002e6dd4((int)param_1 + 0xe46,0x28);
  *(unsigned short *)(param_1 + 0x33d) = 0;
  return;
}

} /* extern "C" */
