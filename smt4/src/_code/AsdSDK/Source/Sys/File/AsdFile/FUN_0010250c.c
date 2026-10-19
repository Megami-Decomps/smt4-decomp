/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010250c` (_code @ 0x10250c, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00102698; /* 0x102698 */
extern unsigned int DAT_00465008; /* 0x465008 */
extern unsigned int DAT_0046500c; /* 0x46500c */
extern unsigned int DAT_00465010; /* 0x465010 */
extern unsigned int DAT_00465014; /* 0x465014 */
extern unsigned int DAT_00465028; /* 0x465028 */

/* Supplied declaration required: FUN_0010d0f8. */
/* Supplied declaration required: FUN_0010f5dc. */
/* Supplied declaration required: FUN_0010f698. */
/* Supplied declaration required: FUN_0010f73c. */
/* Supplied declaration required: FUN_0010f764. */
/* Supplied declaration required: FUN_0010f7b8. */
/* Supplied declaration required: FUN_0010f7e4. */
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c52dc. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c5300. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


void FUN_0010250c(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int uStack_1c;
  
  puVar4 = (unsigned int *)&temp_v2;
  puVar5 = (unsigned int *)&temp_v2;
  DAT_00465010 = 0;
  FUN_0010f5dc();
  temp_v0 = 0x10;
  FUN_0010f73c(0x10,0x10,1);
  temp_v1 = 0x100;
  temp_v2 = 1;
  FUN_002c5300(0x100,0x100,0,temp_v0);
  temp_v2 = 1;
  DAT_00465008 = temp_v1;
  FUN_0010f7e4(0x10,0x10,temp_v1,temp_v0);
  temp_v0 = 0x10;
  FUN_0010f7b8(0x10,0x10,1);
  temp_v1 = 0x100;
  temp_v2 = 1;
  FUN_002c5300(0x100,0x100,0,temp_v0);
  puVar3 = &LAB_00102698;
  uStack_1c = 1;
  temp_v2 = temp_v0;
  DAT_0046500c = temp_v1;
  FUN_0010f698(&LAB_00102698,0x10,0x10,temp_v1);
  if ((int)puVar3 < 0) {
    FUN_002c52f8();
  }
  temp_v2 = 0;
  FUN_002c52dc(&temp_v2,0,2);
  if (-1 < (int)puVar4) {
    puVar4 = (unsigned int *)0x0;
    DAT_00465014 = temp_v2;
  }
  if ((int)puVar4 < 0) {
    FUN_002c526c();
  }
  FUN_002c5254(&temp_v2,DAT_00465014,1);
  if ((int)puVar5 < 0) {
    FUN_002c526c();
  }
  nn_os_LightEvent_Initialize((unsigned int)&DAT_00465028,0);
  FUN_0010d0f8();
  FUN_0010f764();
  return;
}
