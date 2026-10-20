/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d33c` (_code @ 0x13d33c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_006400f8; /* 0x6400f8 */
#ifndef ROMWRIGHT_STORAGE_DAT_006400fc_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_006400fc_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_006400fc_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_006400fc_4_4_size_check[(sizeof(union romwright_storage_DAT_006400fc_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_006400fc_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_006400fc_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_006400fc_4_4 DAT_006400fc; /* 0x6400fc */
extern unsigned int DAT_00640100; /* 0x640100 */
extern unsigned int DAT_00640104; /* 0x640104 */
#ifndef ROMWRIGHT_STORAGE_DAT_00640108_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_00640108_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_00640108_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_00640108_4_4_size_check[(sizeof(union romwright_storage_DAT_00640108_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00640108_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_00640108_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_00640108_4_4 DAT_00640108; /* 0x640108 */
extern int DAT_0064010c; /* 0x64010c */
extern int DAT_00640110; /* 0x640110 */
extern int DAT_00640114; /* 0x640114 */

extern unsigned int FUN_00159590(void);
extern unsigned char nn_hid_CTR_TouchPanelReader_ReadLatest(unsigned int, unsigned int);


unsigned int FUN_0013d33c(void)

{
  int temp_v0;
  unsigned int uStack_14;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00159590();
  temp_v1 = 0xffffffff;
  temp_v2 = 0xffffffff;
  uStack_14 = 0xffffffff;
  DAT_00640100 = DAT_006400f8;
  DAT_00640104 = DAT_006400fc.whole;
  DAT_00640108.u1[1] = (unsigned char)DAT_00640108.whole;
  if ((char)DAT_006400fc.whole != '\x01') {
    DAT_0064010c = 0;
    DAT_00640108.u1[2] = 0;
    DAT_00640108.s1[3] = '\0';
    if ((char)DAT_006400fc.whole == '\0') {
      DAT_00640108.u1[0] = 0;
    }
  }
  else {
    DAT_00640108.u1[0] = 1;
    DAT_0064010c = DAT_0064010c + 1;
    if (DAT_00640108.s1[3] != '\0') {
      DAT_00640108.u1[2] = DAT_00640114 <= DAT_0064010c;
      if ((unsigned char)DAT_00640108.u1[2]) {
        DAT_0064010c = 0;
      }
    }
    else {
      DAT_00640108.u1[2] = DAT_0064010c == 1;
      if (DAT_00640110 <= DAT_0064010c) {
        DAT_00640108.s1[3] = '\x01';
        DAT_0064010c = 0;
        DAT_00640108.u1[2] = 1;
      }
    }
  }
  nn_hid_CTR_TouchPanelReader_ReadLatest((unsigned int)&temp_v0,(unsigned int)&DAT_006400f8);
  if ((char)DAT_006400fc.whole == '\0') {
    DAT_006400f8 = DAT_00640100;
  }
  return 1;
}

} /* extern "C" */
