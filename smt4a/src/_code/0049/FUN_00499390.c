/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499390` (_code @ 0x499390, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_00499560; /* 0x499560 */
extern unsigned char LAB_0049956c; /* 0x49956c */
extern unsigned char LAB_00499580; /* 0x499580 */
extern unsigned char LAB_00499598; /* 0x499598 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_00224880(unsigned int);
extern int FUN_0026272c(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002802c8(void);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_0031cfb4. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0035d03c. */
/* Supplied declaration required: FUN_00388758. */
extern unsigned int FUN_004d05b4(void);


void FUN_00499390(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    temp_v3 = FUN_0026272c();
    if (temp_v3 != 0) {
      temp_v2 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x184),&LAB_00499560);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x18c),temp_v2);
      FUN_001681cc(0xa0);
      *(unsigned int *)(param_1 + 8) = 1;
      FUN_0035d03c();
      return;
    }
    break;
  case 1:
    temp_v3 = FUN_00224880(*(unsigned int *)(param_1 + 0x18c));
    if (temp_v3 == 2) {
      temp_v3 = FUN_0031cfb4();
      if (temp_v3 != 0) {
        temp_v0 = FUN_0031cfb4();
        temp_v1 = FUN_004d05b4();
        if (temp_v0 <= temp_v1) {
          temp_v2 = 2;
          *(unsigned int *)(param_1 + 8) = temp_v2;
          return;
        }
      }
      *(unsigned int *)(param_1 + 8) = 5;
      return;
    }
    break;
  case 2:
    FUN_002804b0(&LAB_0049956c,param_1 + 0x394,0);
    FUN_002804b0(&LAB_00499580,param_1 + 0x398,0);
    temp_v2 = 3;
    *(unsigned int *)(param_1 + 8) = temp_v2;
    return;
  case 3:
    temp_v3 = *(int *)(param_1 + 0x394);
    if (temp_v3 != 0) {
      param_2 = *(int *)(param_1 + 0x398);
    }
    if (temp_v3 != 0 && param_2 != 0) {
      FUN_00275bc8();
      *(int *)(param_1 + 0x39c) = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      temp_v2 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x394),&LAB_00499598);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x39c),temp_v2);
      temp_v2 = 4;
      *(unsigned int *)(param_1 + 8) = temp_v2;
      return;
    }
    break;
  case 4:
    temp_v3 = FUN_00224880(*(unsigned int *)(param_1 + 0x39c));
    if (temp_v3 == 2) {
      *(unsigned int *)(param_1 + 8) = 5;
      return;
    }
    break;
  case 5:
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    FUN_0035d03c(0);
    temp_v2 = 6;
    *(unsigned int *)(param_1 + 8) = temp_v2;
    return;
  case 6:
    temp_v3 = FUN_002802c8();
    if (temp_v3 == 0) {
      FUN_00388758(1);
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 0x14;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}
