/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5498` (_code @ 0x1b5498, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00212120(int);
int FUN_0027e774(int, int);
int FUN_0027e7b4(unsigned int, unsigned int);
int FUN_00295660(unsigned int, unsigned char [100]);
int FUN_002bd06c(unsigned int);
int FUN_002bf694(unsigned char [100], unsigned int);
int FUN_002c08f0(void);
int FUN_002c415c(void);
int FUN_002c4938(unsigned char [100], int);

extern unsigned int *DAT_00435d78; /* 0x435d78 */

/* Supplied declaration required: FUN_00212120. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
/* Supplied declaration required: FUN_00295660. */
extern int FUN_00295bd0(void);
extern int FUN_002b6b04(void);
/* Supplied declaration required: FUN_002bd06c. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c08f0. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_001b5498(void)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short *psVar7;
  unsigned char temp_v4 [100];
  
  FUN_002c08f0();
  if (DAT_00435d78 == (unsigned int *)0x0) {
    return 0;
  }
  psVar2 = (short *)*DAT_00435d78;
  while( 1 ) {
    puVar3 = DAT_00435d78;
    if (psVar2 == (short *)0x0) {
      return 0;
    }
    psVar7 = *(short **)(psVar2 + 0x152);
    if (-1 < psVar2[0x151]) break;
    if (*(int *)(psVar2 + 0x154) == 0) {
      *DAT_00435d78 = (unsigned int)psVar7;
    }
    else {
      *(short **)(*(int *)(psVar2 + 0x154) + 0x2a4) = psVar7;
    }
    if (*(int *)(psVar2 + 0x152) == 0) {
      puVar3[1] = *(unsigned int *)(psVar2 + 0x154);
    }
    else {
      *(unsigned int *)(*(int *)(psVar2 + 0x152) + 0x2a8) = *(unsigned int *)(psVar2 + 0x154);
    }
    puVar3[2] = puVar3[2] - 1;
    FUN_002c415c();
    psVar2 = psVar7;
  }
  if (psVar2[1] != 0) {
    if ((psVar2[1] != 1) || (temp_v3 = FUN_002b6b04(), temp_v3 == 0)) {
      psVar2[0x151] = psVar2[0x151] - 1;
      psVar2[0x150] = psVar2[0x150] + 1;
      return 0;
    }
  }
  else {
    temp_v3 = FUN_002b6b04();
    if ((temp_v3 == 0) && (temp_v3 = FUN_00295bd0(), temp_v3 == 0)) {
      FUN_002c4938(temp_v4,0x60);
      temp_v0 = *psVar2;
      if (temp_v0 != 0) {
        if (temp_v0 == 1) {
          if ((*(int *)(psVar2 + 8) != 0 || *(int *)(psVar2 + 10) != 0) &&
             (-1 < *(int *)(psVar2 + 0x14e))) {
            if ((*(unsigned int *)(psVar2 + 8) & 2) != 0) {
              temp_v1 = FUN_002bd1fc();
              FUN_002bf694(temp_v4,temp_v1);
            }
            else {
              temp_v2 = (unsigned int)(unsigned short)psVar2[0x6f];
              FUN_002bd06c(temp_v2);
              FUN_002bf694(temp_v4,temp_v2);
            }
            FUN_00295660(*(unsigned int *)(psVar2 + 0x14e),temp_v4);
          }
          FUN_0027e7b4(*(unsigned int *)(psVar2 + 6),*(unsigned int *)(psVar2 + 4) & 0xffff);
          FUN_0027e774((int)(char)psVar2[0x14c],1);
          psVar2[0x151] = 1;
          psVar2[1] = 1;
          psVar2[0x151] = psVar2[0x151] - 1;
          psVar2[0x150] = psVar2[0x150] + 1;
          return 0;
        }
        if (temp_v0 == 2) {
          if ((*(int *)(psVar2 + 10) != 0 || *(int *)(psVar2 + 8) != 0) &&
             (-1 < *(int *)(psVar2 + 0x14e))) {
            if ((*(unsigned int *)(psVar2 + 8) & 2) != 0) {
              temp_v1 = FUN_002bd1fc();
              FUN_002bf694(temp_v4,temp_v1);
            }
            else {
              temp_v2 = (unsigned int)(unsigned short)psVar2[0x6f];
              FUN_002bd06c(temp_v2);
              FUN_002bf694(temp_v4,temp_v2);
            }
            FUN_00295660(*(unsigned int *)(psVar2 + 0x14e),temp_v4);
          }
          FUN_00212120(psVar2[2]);
        }
      }
      else {
        FUN_0027e7b4(*(unsigned int *)(psVar2 + 6),*(unsigned int *)(psVar2 + 4) & 0xffff);
        FUN_0027e774((int)(char)psVar2[0x14c],1);
      }
      psVar2[0x151] = 1;
      psVar2[1] = 1;
      psVar2[0x151] = psVar2[0x151] - 1;
      psVar2[0x150] = psVar2[0x150] + 1;
      return 0;
    }
  }
  psVar2[0x151] = 1;
  psVar2[0x151] = psVar2[0x151] - 1;
  psVar2[0x150] = psVar2[0x150] + 1;
  return 0;
}

} /* extern "C" */
