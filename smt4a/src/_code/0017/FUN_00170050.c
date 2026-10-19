/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170050` (_code @ 0x170050, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0056ec40; /* 0x56ec40 */
extern unsigned int DAT_0056ec44; /* 0x56ec44 */
extern unsigned int DAT_0056ec48; /* 0x56ec48 */
extern unsigned int DAT_0056ec6c; /* 0x56ec6c */
extern unsigned int DAT_0056ec70; /* 0x56ec70 */
extern unsigned int DAT_0056ec74; /* 0x56ec74 */
extern unsigned int DAT_0056ec78; /* 0x56ec78 */
extern unsigned int DAT_0056ec7c; /* 0x56ec7c */
extern unsigned int DAT_0056ec80; /* 0x56ec80 */
extern unsigned int DAT_0056ec84; /* 0x56ec84 */
extern unsigned char DAT_0056ec88; /* 0x56ec88 */
extern unsigned int DAT_0056ec8c; /* 0x56ec8c */
extern unsigned char DAT_0056ec90; /* 0x56ec90 */
extern unsigned int DAT_0056ec98; /* 0x56ec98 */
extern unsigned int DAT_0056ec9c; /* 0x56ec9c */
extern unsigned int DAT_0056eca4; /* 0x56eca4 */
extern unsigned int DAT_0056eca8; /* 0x56eca8 */
extern unsigned int DAT_0056ecac; /* 0x56ecac */
extern unsigned char DAT_0056ecb0; /* 0x56ecb0 */
extern signed char DAT_005c0aa0; /* 0x5c0aa0 */
extern unsigned char DAT_005c0aa2; /* 0x5c0aa2 */
#ifndef ROMWRIGHT_STORAGE_s_______005c0aa3_14_1_DEFINED
#define ROMWRIGHT_STORAGE_s_______005c0aa3_14_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s_______005c0aa3_14_1 {
    char whole[14];
    unsigned char u1[14];
    signed char s1[14];
};
typedef char romwright_storage_s_______005c0aa3_14_1_size_check[(sizeof(union romwright_storage_s_______005c0aa3_14_1) == 14) ? 1 : -1];
typedef char romwright_storage_s_______005c0aa3_14_1_u1_width_check[(sizeof(((union romwright_storage_s_______005c0aa3_14_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s_______005c0aa3_14_1_s1_width_check[(sizeof(((union romwright_storage_s_______005c0aa3_14_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s_______005c0aa3_14_1 s_______005c0aa3; /* 0x5c0aa3 */
extern unsigned int DAT_005c0ab4; /* 0x5c0ab4 */
extern unsigned int *DAT_005c0abc; /* 0x5c0abc */
extern unsigned int DAT_00643080; /* 0x643080 */

/* Supplied declaration required: FUN_0016f864. */
/* Supplied declaration required: FUN_0016f988. */
/* Supplied declaration required: FUN_0018b28c. */
extern unsigned int FUN_002e3390(void);
extern unsigned int nn_gxlow_CTR_Gpu_AcquireRight(unsigned int, unsigned int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170050(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00643080);
  if (DAT_005c0aa0 != '\0') {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_00643080);
    return;
  }
  DAT_005c0aa0 = 1;
  if (s_______005c0aa3.whole[0] == '\0') {
    FUN_0016f864();
    s_______005c0aa3.whole[0] = '\x01';
  }
  temp_v0 = (*(unsigned int *)&s_______005c0aa3.u1[1]);
  temp_v1 = FUN_002e3390();
  FUN_0016f988(s_______005c0aa3.whole + 0xd,temp_v0,temp_v1,0);
  DAT_005c0ab4 = (*(unsigned int *)0x005c0ab0);
  nn_gxlow_CTR_Gpu_AcquireRight((unsigned int)&DAT_005c0ab4,0xffff8001,(unsigned char)DAT_005c0aa2);
  DAT_0056ec40 = 0;
  DAT_0056ec48 = 0xffffffff;
  DAT_0056ec44 = 0;
  DAT_0056ec6c = 0;
  DAT_0056ec70 = 0;
  DAT_0056ec74 = 0;
  DAT_0056ec78 = 0;
  DAT_0056ec7c = 0;
  DAT_0056ec80 = 0;
  DAT_0056ec84 = 0;
  DAT_0056ec88 = 0;
  DAT_0056ec8c = 0;
  DAT_0056ec90 = 0;
  DAT_0056ec98 = 0;
  DAT_0056ec9c = 0;
  DAT_0056eca4 = 0;
  DAT_0056eca8 = 0;
  DAT_0056ecac = 0;
  DAT_0056ecb0 = 1;
  DAT_005c0abc = &DAT_0056ec40;
  FUN_0018b28c();
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00643080);
  return;
}
