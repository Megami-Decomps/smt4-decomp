/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb35c` (_code @ 0x4bb35c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0036b9a8(int, int, int, int);
int FUN_003a476c(unsigned int, unsigned int, char [33], unsigned int, int, char [34], int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0057f2c8; /* 0x57f2c8 */
extern char s__SHIN_MEGAMITENSEI_4_0057f2cc[33]; /* 0x57f2cc */
extern char s_Shin_Megami_Tensei_I_0057f34a[34]; /* 0x57f34a */

extern int FUN_00359008(unsigned int, unsigned int, char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0036b9a8. */
/* Supplied declaration required: FUN_003a476c. */
extern unsigned int FUN_0042d694(unsigned int);


unsigned int FUN_004bb35c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0042d694(0x19a2);
  FUN_003a476c(temp_v0,DAT_0057f2c8,s__SHIN_MEGAMITENSEI_4_0057f2cc,*(unsigned int *)(param_1 + 4),
               0x1200,s_Shin_Megami_Tensei_I_0057f34a,0x20,99);
  switch(temp_v0) {
  default:
    FUN_0036b9a8(2,3,0xff,0);
    temp_v0 = FUN_0042d694(0x19a2);
    temp_v1 = FUN_00359008(temp_v0,DAT_0057f2c8,s_Shin_Megami_Tensei_I_0057f34a,
                         *(unsigned int *)(param_1 + 4),0x1200);
    if (temp_v1 != 5) {
      return 0;
    }
    return 0x11;
  case 2:
  case 3:
  case 5:
  case 7:
    return 0x11;
  case 4:
    return 3;
  case 6:
    return 0x81;
  }
}

} /* extern "C" */
