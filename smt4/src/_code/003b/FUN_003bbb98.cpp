/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbb98` (_code @ 0x3bbb98, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021f57c(char [37], unsigned int, int, unsigned int, int);
int FUN_002d55f0(int);
int FUN_002e0e44(unsigned int, unsigned int, char [22], unsigned int, int);
int FUN_002ebaec(int, int, int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */
extern char s_Master__I_got_a_card_0043ddf2[37]; /* 0x43ddf2 */
extern char s_Shin_Megami_Tensei_I_0043de3c[22]; /* 0x43de3c */

/* Supplied declaration required: FUN_0021f57c. */
/* Supplied declaration required: FUN_002d55f0. */
/* Supplied declaration required: FUN_002e0e44. */
/* Supplied declaration required: FUN_002ebaec. */
extern unsigned int FUN_00357818(unsigned int);


unsigned int FUN_003bbb98(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  char *pcVar2;
  char *pcVar3;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  FUN_002ebaec(2,3,0xff,0,param_4);
  temp_v0 = FUN_00357818(0xe5c);
  FUN_002e0e44(temp_v0,DAT_0043ddb8,s_Shin_Megami_Tensei_I_0043de3c,*(unsigned int *)(param_1 + 4),
               0x1200);
  pcVar2 = s_Master__I_got_a_card_0043ddf2;
  FUN_0021f57c(s_Master__I_got_a_card_0043ddf2,*(unsigned int *)(param_1 + 8),0xc80,param_2,0x4c);
  if ((int)pcVar2 < 0) {
    if (pcVar2 == (char *)0xe0a1086c) {
      temp_v1 = 5;
    }
    else if (pcVar2 == (char *)0xe0a1086d) {
      temp_v1 = 9;
    }
    else {
      pcVar3 = (char *)0xc8e10865;
      if (pcVar2 != (char *)0xc8e10865) {
        pcVar3 = (char *)0xc8e10866;
      }
      if (!(pcVar2 != (char *)0xc8e10865 && pcVar2 != pcVar3)) {
        temp_v1 = 0x41;
      }
      else if (pcVar2 == (char *)0xc8a10bf0) {
        temp_v1 = 0x21;
      }
      else {
        temp_v1 = 0x11;
      }
    }
  }
  else {
    FUN_002d55f0(param_1 + 0xc);
  }
  return temp_v1;
}

} /* extern "C" */
