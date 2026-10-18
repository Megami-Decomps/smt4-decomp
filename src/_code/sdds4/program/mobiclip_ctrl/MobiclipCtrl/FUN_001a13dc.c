/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a13dc` (_code @ 0x1a13dc, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int DAT_0044d028; /* 0x44d028 */
extern int DAT_0044d02c; /* 0x44d02c */
extern unsigned int DAT_004c3a44; /* 0x4c3a44 */
extern unsigned char DAT_004c3a50; /* 0x4c3a50 */
extern unsigned int DAT_004c3af8; /* 0x4c3af8 */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern int DAT_004c4068; /* 0x4c4068 */

/* Supplied declaration required: FUN_002ad8a8. */
extern unsigned long long FUN_002b5b44(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0034f27c. */
extern int FUN_0034f698(unsigned int *, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0034fdd8. */
extern unsigned int FUN_003505bc(unsigned char *, int);
extern unsigned int FUN_00350804(unsigned char *, int);
extern int FUN_00350824(unsigned char *, unsigned int);
extern unsigned int FUN_00350cc8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00350cd4. */
/* Supplied declaration required: FUN_00350de0. */


void FUN_001a13dc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  unsigned int temp_v7;
  
  FUN_00350de0(&DAT_004c3b20,param_3);
  FUN_00350cd4(&DAT_004c3b20,0);
  temp_v2 = FUN_00350cc8(&DAT_004c3b20,0);
  temp_v3 = FUN_00350824(&DAT_004c3b20,temp_v2);
  puVar5 = &DAT_004c3a50;
  FUN_0034f27c(&DAT_004c3a50,&DAT_004c3a44,temp_v3,0);
  if (puVar5 == (unsigned char *)0x0) {
    FUN_002ad8a8();
  }
  temp_v7 = param_4;
  if (DAT_004c4068 != -1) {
    temp_v2 = FUN_00350804(&DAT_004c3b20,DAT_004c4068);
    temp_v7 = 0x10;
    temp_v4 = FUN_0034f698(&DAT_004c3af8,&DAT_004c3a44,temp_v2,1);
    if (temp_v4 == 0) {
      FUN_002ad8a8(1);
    }
  }
  temp_v0 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x10) * 1000000;
  temp_v6 = FUN_002b5b44((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),*(unsigned int *)(temp_v3 + 0xc),0);
  DAT_0044d02c = (int)((unsigned long long)temp_v6 >> 0x20);
  DAT_0044d028 = (unsigned int)temp_v6;
  temp_v5 = FUN_003505bc(&DAT_004c3b20,temp_v3);
  temp_v1 = DAT_0044d028;
  temp_v3 = ((int)temp_v5 >> 0x1f) * DAT_0044d028 +
          (int)((unsigned long long)DAT_0044d028 * (unsigned long long)temp_v5 >> 0x20);
  DAT_0044d02c = temp_v5 * DAT_0044d02c + temp_v3;
  DAT_0044d028 = (int)((unsigned long long)DAT_0044d028 * (unsigned long long)temp_v5);
  FUN_0034fdd8(&DAT_004c3b20,temp_v3,temp_v1,temp_v7);
  return;
}
