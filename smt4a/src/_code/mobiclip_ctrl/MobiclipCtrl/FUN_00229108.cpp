/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229108` (_code @ 0x229108, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00423670(unsigned char *, unsigned int *, int, int);
int FUN_00423a8c(unsigned int *, unsigned int *, unsigned int, int);
int FUN_004241e0(unsigned char *, int, unsigned int, unsigned int);
int FUN_004250dc(unsigned char *, int);
int FUN_004251e8(unsigned char *, unsigned int);
int FUN_0043128c(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int DAT_00588028; /* 0x588028 */
extern int DAT_0058802c; /* 0x58802c */
extern unsigned int DAT_00617e64; /* 0x617e64 */
extern unsigned char DAT_00617e70; /* 0x617e70 */
extern unsigned int DAT_00617f18; /* 0x617f18 */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern int DAT_00618488; /* 0x618488 */

/* Supplied declaration required: FUN_00423670. */
/* Supplied declaration required: FUN_00423a8c. */
/* Supplied declaration required: FUN_004241e0. */
extern unsigned int FUN_004249c4(unsigned char *, int);
extern unsigned int FUN_00424c0c(unsigned char *, int);
extern int FUN_00424c2c(unsigned char *, unsigned int);
extern unsigned int FUN_004250d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_004250dc. */
/* Supplied declaration required: FUN_004251e8. */
/* Supplied declaration required: FUN_0043128c. */
extern unsigned long long ll_sdiv(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00229108(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  
  FUN_004251e8(&DAT_00617f40,param_3);
  FUN_004250dc(&DAT_00617f40,0);
  temp_v2 = FUN_004250d0(&DAT_00617f40,0);
  temp_v3 = FUN_00424c2c(&DAT_00617f40,temp_v2);
  puVar5 = &DAT_00617e70;
  FUN_00423670(&DAT_00617e70,&DAT_00617e64,temp_v3,0);
  if (puVar5 == (unsigned char *)0x0) {
    FUN_0043128c();
  }
  temp_v6 = param_4;
  if (DAT_00618488 != -1) {
    temp_v2 = FUN_00424c0c(&DAT_00617f40,DAT_00618488);
    temp_v6 = 0x10;
    puVar6 = &DAT_00617f18;
    FUN_00423a8c(&DAT_00617f18,&DAT_00617e64,temp_v2,1);
    if (puVar6 == (unsigned int *)0x0) {
      FUN_0043128c();
    }
  }
  temp_v0 = (unsigned long long)*(unsigned int *)(temp_v3 + 0x10) * 1000000;
  temp_v5 = ll_sdiv((int)temp_v0,(int)((unsigned long long)temp_v0 >> 0x20),*(unsigned int *)(temp_v3 + 0xc),0);
  DAT_0058802c = (int)((unsigned long long)temp_v5 >> 0x20);
  DAT_00588028 = (unsigned int)temp_v5;
  temp_v4 = FUN_004249c4(&DAT_00617f40,temp_v3);
  temp_v1 = DAT_00588028;
  temp_v3 = ((int)temp_v4 >> 0x1f) * DAT_00588028 +
          (int)((unsigned long long)DAT_00588028 * (unsigned long long)temp_v4 >> 0x20);
  DAT_0058802c = temp_v4 * DAT_0058802c + temp_v3;
  DAT_00588028 = (int)((unsigned long long)DAT_00588028 * (unsigned long long)temp_v4);
  FUN_004241e0(&DAT_00617f40,temp_v3,temp_v1,temp_v6);
  return;
}

} /* extern "C" */
