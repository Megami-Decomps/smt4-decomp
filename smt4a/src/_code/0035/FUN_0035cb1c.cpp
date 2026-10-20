/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cb1c` (_code @ 0x35cb1c, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(void);
int FUN_0019a7f4(int, int);
int FUN_001add24(int);
int FUN_00237210(unsigned int);
int FUN_002e132c(int);
int FUN_002e3328(void);
int FUN_00348d7c(unsigned int);
int FUN_003f881c(int, int);

extern signed char DAT_0057f23c; /* 0x57f23c */
extern unsigned int *DAT_0057f240; /* 0x57f240 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
extern int FUN_0018206c(unsigned int, int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001add24. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00237210. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00348d7c. */
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_003f881c. */


unsigned int FUN_0035cb1c(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = FUN_00236038(0);
    temp_v0 = FUN_003f86c8(0x46);
    if (temp_v0 == 0) {
      FUN_003f881c(0x46,0);
      DAT_0057f23c = '\x01';
    }
    FUN_00348d7c(temp_v1);
  }
  if (!(*(char *)(DAT_0057f240 + 1) == '\0' || *(char *)(DAT_0057f240 + 1) == '\n')) {
    temp_v1 = 0;
  }
  else {
    if (DAT_0057f23c != '\0') {
      FUN_001add24(0x46);
      DAT_0057f23c = '\0';
    }
    puVar1 = DAT_0057f240;
    temp_v0 = 0;
    if (*(short *)(DAT_0057f240 + 0x86) != 0) {
      do {
        FUN_001641c4();
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x86));
    }
    temp_v0 = 0;
    do {
      FUN_00237210(puVar1[temp_v0 + 0x22]);
      temp_v2 = temp_v0 + 1;
      puVar1[temp_v0 + 0x22] = 0;
      temp_v0 = temp_v2;
    } while (temp_v2 < 3);
    if (puVar1[2] != 0) {
      FUN_0019a5a0();
      puVar1[2] = 0;
    }
    if (puVar1[3] != 0) {
      FUN_0019a5a0();
      puVar1[3] = 0;
    }
    temp_v0 = 0;
    do {
      temp_v2 = FUN_0018206c(0x33,temp_v0);
      if (temp_v2 != 0) {
        FUN_0019a7f4(0x33,temp_v0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x13);
    FUN_002e132c(0x33);
    FUN_001631d0(*puVar1,0);
    if (DAT_0057f240 != (unsigned int *)0x0) {
      FUN_002e3328();
      DAT_0057f240 = (unsigned int *)0x0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
