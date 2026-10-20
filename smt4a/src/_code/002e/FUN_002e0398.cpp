/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0398` (_code @ 0x2e0398, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [128], unsigned char *, unsigned int, unsigned int);
int FUN_001695a0(void);
int FUN_0019a5a0(...);
int FUN_0020214c(void);
int FUN_0024b0c0(unsigned int, int);
int FUN_00275bc8(int, unsigned char *);
int FUN_00275f44(unsigned int, int, unsigned int);
int FUN_0046be60(unsigned char *, unsigned int, int);
int FUN_0046bed0(unsigned char *, unsigned int, int);

extern unsigned char LAB_002e0510; /* 0x2e0510 */
extern unsigned char LAB_002e0528; /* 0x2e0528 */
extern unsigned char *DAT_00570280; /* 0x570280 */
extern int DAT_00581274; /* 0x581274 */
extern short DAT_005f172e; /* 0x5f172e */
extern signed char DAT_005f1c72; /* 0x5f1c72 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0024b0c0. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_00357bc8(unsigned int, int);
/* Supplied declaration required: FUN_0046be60. */
/* Supplied declaration required: FUN_0046bed0. */
extern int FUN_0046e08c(unsigned char *, unsigned int, unsigned int);


unsigned int FUN_002e0398(void)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  
  temp_v0 = DAT_00581274;
  puVar3 = temp_v4;
  FUN_001695a0();
  FUN_00100388(temp_v4,&LAB_002e0510,*(unsigned int *)(temp_v0 + 0x68),*(unsigned int *)(temp_v0 + 0x68)
              );
  FUN_00100388(temp_v5,&LAB_002e0528,*(unsigned int *)(temp_v0 + 0x68),*(unsigned int *)(temp_v0 + 0x68))
  ;
  temp_v1 = FUN_0046e08c(DAT_00570280,*(unsigned int *)(temp_v0 + 0x68),0);
  if (temp_v1 != 0) {
    puVar3 = DAT_00570280;
    FUN_0046bed0(DAT_00570280,*(unsigned int *)(temp_v0 + 0x68),0);
    *(unsigned char **)(temp_v0 + 0x90) = puVar3;
    puVar3 = DAT_00570280;
    FUN_0046be60(DAT_00570280,*(unsigned int *)(temp_v0 + 0x68),0);
    *(unsigned char **)(temp_v0 + 0x94) = puVar3;
    if (*(int *)(temp_v0 + 0x90) != 0) {
      if (puVar3 != (unsigned char *)0x0) goto LAB_002e0474;
      FUN_0019a5a0(*(int *)(temp_v0 + 0x90));
      *(unsigned int *)(temp_v0 + 0x90) = 0;
    }
    if (*(int *)(temp_v0 + 0x94) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x94) = 0;
    }
    return 0;
  }
  FUN_0020214c();
  *(unsigned char **)(temp_v0 + 0x90) = puVar3;
  puVar3 = temp_v5;
  FUN_0020214c();
  *(unsigned char **)(temp_v0 + 0x94) = puVar3;
LAB_002e0474:
  temp_v1 = *(int *)(temp_v0 + 0x90);
  FUN_00275bc8(temp_v1,puVar3);
  *(int *)(temp_v0 + 0x98) = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  if (DAT_005f1c72 != '\0') {
    DAT_005f1c72 = '\0';
    FUN_0024b0c0(*(unsigned int *)(temp_v0 + 0x98),(int)DAT_005f172e);
    *(unsigned int *)(temp_v0 + 0x9c) = 0;
    temp_v1 = (int)DAT_005f172e;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x98);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x68);
  }
  else {
    *(unsigned int *)(temp_v0 + 0x9c) = 0;
    temp_v1 = FUN_00357bc8(*(unsigned int *)(temp_v0 + 0x90),temp_v0 + 0x6c);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x98);
    temp_v3 = temp_v2;
  }
  FUN_00275f44(temp_v2,temp_v1,temp_v3);
  return 1;
}

} /* extern "C" */
