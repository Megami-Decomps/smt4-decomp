/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbc1a` (_code @ 0x2fbc1a, 0xe6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010ed92. */
extern unsigned int *FUN_002e6dac(int);
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e7328(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e755c. */
/* Supplied declaration required: FUN_002ea0c8. */
extern int FUN_002ee9e4(void);
/* Supplied declaration required: FUN_002ee9f4. */
/* Supplied declaration required: FUN_002eea18. */
/* Supplied declaration required: FUN_002eea6a. */
extern int FUN_002eea8a(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002eea94. */
extern int FUN_002eeabc(void);
/* Supplied declaration required: FUN_002eead8. */


unsigned long long FUN_002fbc1a(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_18;
  
  temp_v4 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002eea8a(param_1,&temp_v4);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e7328(param_1,temp_v4 & 0xffff);
    temp_v2 = 0;
    if (temp_v0 == 0) {
      return romwright_piece_4_4(temp_v4,temp_v2);
    }
    if ((temp_v4 & 0xffff) != 0) {
      FUN_002eea94(param_2,(temp_v4 & 0xffff) + 1);
      temp_v0 = FUN_002ee9e4();
      if ((temp_v0 == 0) || (temp_v0 = FUN_002eeabc(), temp_v0 != 0)) {
        temp_v0 = FUN_002eeabc();
        if (temp_v0 == 0) {
          FUN_002eead8(param_1,*(unsigned int *)(param_2 + 4),temp_v4 & 0xffff);
          temp_v2 = 1;
          return romwright_piece_4_4(temp_v4,temp_v2);
        }
        FUN_002ee9f4(&temp_v5,0);
        temp_v3 = temp_v4;
        puVar2 = (unsigned int *)FUN_002e6dac(temp_v3 * 2 + 4);
        *puVar2 = temp_v3;
        for (temp_v1 = 0; temp_v1 < temp_v3; temp_v1 = temp_v1 + 1) {
        }
        FUN_002eead8(param_1,puVar2 + 1,temp_v4 & 0xffff);
        FUN_002eea18(&temp_v5,puVar2 + 1,0);
        FUN_002ea0c8(param_2,temp_v5);
        for (temp_v1 = 0; temp_v1 < *puVar2; temp_v1 = temp_v1 + 1) {
        }
        FUN_002e6e14();
      }
      else {
        FUN_002ee9f4(&temp_v5,(temp_v4 & 0xffff) + 1);
        FUN_002e755c(param_1,temp_v5,temp_v4 & 0xffff);
        FUN_0010ed92(&temp_v5,*(unsigned int *)(param_2 + 4),temp_v4 & 0xffff,0);
      }
      FUN_002eea6a(&temp_v5);
    }
  }
  temp_v2 = 1;
  return romwright_piece_4_4(temp_v4,temp_v2);
}
