/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00108b10` (_code @ 0x108b10, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_004e3cd4; /* 0x4e3cd4 */
#ifndef ROMWRIGHT_STORAGE_DAT_004e3cd8_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e3cd8_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e3cd8_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004e3cd8_4_4_size_check[(sizeof(union romwright_storage_DAT_004e3cd8_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3cd8_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004e3cd8_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e3cd8_4_4 DAT_004e3cd8; /* 0x4e3cd8 */
extern unsigned int DAT_004e3cdc; /* 0x4e3cdc */
extern unsigned int DAT_004e3ce0; /* 0x4e3ce0 */
#ifndef ROMWRIGHT_STORAGE_DAT_004e3ce4_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e3ce4_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e3ce4_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004e3ce4_4_4_size_check[(sizeof(union romwright_storage_DAT_004e3ce4_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3ce4_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004e3ce4_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e3ce4_4_4 DAT_004e3ce4; /* 0x4e3ce4 */
extern int DAT_004e3ce8; /* 0x4e3ce8 */
extern int DAT_004e3cec; /* 0x4e3cec */
extern int DAT_004e3cf0; /* 0x4e3cf0 */

extern unsigned int FUN_0011c368(void);
/* Supplied declaration required: FUN_0011c380. */


unsigned int FUN_00108b10(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0011c368();
  temp_v1 = 0xffffffff;
  temp_v2 = 0xffffffff;
  uStack_14 = 0xffffffff;
  DAT_004e3cdc = DAT_004e3cd4;
  DAT_004e3ce0 = DAT_004e3cd8.whole;
  DAT_004e3ce4.u1[1] = (unsigned char)DAT_004e3ce4.whole;
  if ((char)DAT_004e3cd8.whole != '\x01') {
    DAT_004e3ce8 = 0;
    DAT_004e3ce4.u1[2] = 0;
    DAT_004e3ce4.s1[3] = '\0';
    if ((char)DAT_004e3cd8.whole == '\0') {
      DAT_004e3ce4.u1[0] = 0;
    }
  }
  else {
    DAT_004e3ce4.u1[0] = 1;
    DAT_004e3ce8 = DAT_004e3ce8 + 1;
    if (DAT_004e3ce4.s1[3] != '\0') {
      DAT_004e3ce4.u1[2] = DAT_004e3cf0 <= DAT_004e3ce8;
      if ((unsigned char)DAT_004e3ce4.u1[2]) {
        DAT_004e3ce8 = 0;
      }
    }
    else {
      DAT_004e3ce4.u1[2] = DAT_004e3ce8 == 1;
      if (DAT_004e3cec <= DAT_004e3ce8) {
        DAT_004e3ce4.s1[3] = '\x01';
        DAT_004e3ce8 = 0;
        DAT_004e3ce4.u1[2] = 1;
      }
    }
  }
  FUN_0011c380(&temp_v0,&DAT_004e3cd4);
  if ((char)DAT_004e3cd8.whole == '\0') {
    DAT_004e3cd4 = DAT_004e3cdc;
  }
  return 1;
}
