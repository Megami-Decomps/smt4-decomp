/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002caea0` (_code @ 0x2caea0, 0x3d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001418fc(...);
int FUN_0014f0dc(...);
int FUN_001523b8(...);
int FUN_00183764(...);
int FUN_00186e2c(...);
int FUN_001ac2d4(...);
int FUN_001f42b0(...);
int FUN_001f474c(...);
int FUN_001f4998(...);
int FUN_00212204(...);
int FUN_00280c5c(...);
int FUN_00280d2c(...);
int FUN_002e08c8(...);
int FUN_00341060(...);
int FUN_00359370(...);
int FUN_00359510(...);
int FUN_0037a898(...);
int FUN_003ae864(...);
int FUN_003ba560(...);
int FUN_003d502c(...);
int FUN_003d54f8(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int nw_anim_PlayPolicy_Loop(...); /* 0x1c37f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern int FUN_00162ea4(void);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00183764. */
/* Supplied declaration required: FUN_00186e2c. */
extern int FUN_001ab8c0(void);
/* Supplied declaration required: FUN_001ac2d4. */
/* Supplied declaration required: FUN_001f42b0. */
/* Supplied declaration required: FUN_001f474c. */
/* Supplied declaration required: FUN_001f4998. */
extern unsigned int FUN_001f4a48(char *, unsigned int);
/* Supplied declaration required: FUN_00212204. */
/* Supplied declaration required: FUN_00280c5c. */
/* Supplied declaration required: FUN_00280d2c. */
/* Supplied declaration required: FUN_002e08c8. */
/* Supplied declaration required: FUN_00341060. */
/* Supplied declaration required: FUN_00359370. */
/* Supplied declaration required: FUN_00359510. */
/* Supplied declaration required: FUN_0037a898. */
extern unsigned int FUN_00387350(char *);
/* Supplied declaration required: FUN_003ae864. */
extern int FUN_003ba534(unsigned int);
/* Supplied declaration required: FUN_003ba560. */
/* Supplied declaration required: FUN_003d502c. */
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_002caea0(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = FUN_00164a9c();
  switch(*(unsigned int *)(temp_v0 + 0x568)) {
  case 0:
    temp_v1 = FUN_00162ea4();
    if (temp_v1 == 0) {
      FUN_001f474c("event/oc/oc_loop.bcenv",0);
      *(unsigned int *)(temp_v0 + 0x55c) = 0;
      temp_v2 = FUN_00387350("event/oc/oc_loop.bccam");
      *(unsigned int *)(temp_v0 + 0x560) = temp_v2;
      temp_v2 = FUN_00387350("event/oc/oc_start.bccam");
      *(unsigned int *)(temp_v0 + 0x564) = temp_v2;
      temp_v2 = FUN_001f4a48("event/oc/oc_loop.bam",0x38);
      *(unsigned int *)(temp_v0 + 0x558) = temp_v2;
    }
    break;
  case 1:
    piVar4 = (int *)(temp_v0 + 0x558);
    if ((*(int *)(temp_v0 + 0x558) == 0) || (temp_v1 = FUN_001ab8c0(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x558);
      *(unsigned int *)(temp_v0 + 0x574) = 1;
      if ((temp_v1 != 0) && (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0)) {
        FUN_00280c5c(temp_v1,1);
        FUN_00359510(*(unsigned int *)(*piVar4 + 8),1);
        FUN_001ac2d4(*(unsigned int *)(*piVar4 + 8),*(unsigned int *)(temp_v0 + 0x574));
        FUN_002e08c8(*(unsigned int *)(*piVar4 + 8));
        FUN_00341060(*(unsigned int *)(*piVar4 + 8));
      }
      FUN_003d502c(0);
      temp_v2 = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x574) * 4 + 0x560);
      *(unsigned int *)(temp_v0 + 0x55c) = temp_v2;
      FUN_003ba560(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0x560) + 4);
      *(romwright_code **)(temp_v1 + 0x4c) = nw_anim_PlayPolicy_Loop;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char *)(temp_v0 + 0x570) = 1;
      FUN_00186e2c(temp_v0 + 0x510,*(unsigned int *)(temp_v0 + 0x55c));
      FUN_001418fc(temp_v0 + 4);
      FUN_0014f0dc(temp_v0 + 4,temp_v0 + 0x510,temp_v0 + 0x51c,temp_v0 + 0x528);
      FUN_001523b8(temp_v0 + 4,1);
      FUN_00212204(0);
      FUN_003d54f8(1,10);
      *(unsigned int *)(temp_v0 + 0x568) = 2;
      *(unsigned int *)(temp_v0 + 0x56c) = 0;
    }
    break;
  case 2:
    temp_v1 = FUN_003ba534(*(unsigned int *)(temp_v0 + 0x55c));
    if ((temp_v1 != 0) || (temp_v1 = FUN_00162ea4(), temp_v1 != 0)) {
      piVar4 = (int *)(temp_v0 + 0x558);
      FUN_00183764(*(unsigned int *)(*(int *)(temp_v0 + 0x558) + 8));
      temp_v1 = (int)in_s0;
      FUN_0037a898(*(unsigned int *)(*piVar4 + 8));
      piVar5 = (int *)(temp_v0 + 0x574);
      FUN_001ac2d4(*(unsigned int *)(*piVar4 + 8),*(unsigned int *)(temp_v0 + 0x574));
      FUN_00359370(*(unsigned int *)(temp_v0 + 0x55c),0);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar5 = 0;
      FUN_001ac2d4(*(unsigned int *)(*piVar4 + 8),0);
      temp_v2 = *(unsigned int *)(temp_v0 + *piVar5 * 4 + 0x560);
      *(unsigned int *)(temp_v0 + 0x55c) = temp_v2;
      FUN_003ba560(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + *piVar5 * 4 + 0x560) + 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 0x44);
      (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
      *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x38);
      *(unsigned int *)(temp_v1 + 0x38) = temp_v2;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned int *)(temp_v0 + 0x568) = 3;
      *(unsigned int *)(temp_v0 + 0x56c) = 0;
    }
  case 3:
    FUN_00186e2c(temp_v0 + 0x510,*(unsigned int *)(temp_v0 + 0x55c));
    FUN_001418fc(temp_v0 + 4);
    FUN_0014f0dc(temp_v0 + 4,temp_v0 + 0x510,temp_v0 + 0x51c,temp_v0 + 0x528);
    FUN_001523b8(temp_v0 + 4,1);
    break;
  case 4:
    if (*(int *)(temp_v0 + 0x56c) != 0) {
      if (*(char *)(temp_v0 + 0x570) != '\0') {
        FUN_00359370(*(unsigned int *)(temp_v0 + 0x55c),0);
      }
      FUN_003ae864(*(unsigned int *)(temp_v0 + 0x560));
      FUN_003ae864(*(unsigned int *)(temp_v0 + 0x564));
      *(unsigned int *)(temp_v0 + 0x560) = 0;
      *(unsigned int *)(temp_v0 + 0x564) = 0;
      FUN_001f42b0(0);
      if (*(int *)(temp_v0 + 0x558) != 0) {
        FUN_001f4998();
      }
      *(unsigned int *)(temp_v0 + 0x55c) = 0;
      *(unsigned int *)(temp_v0 + 0x558) = 0;
      return 0xffffffff;
    }
    FUN_00280d2c(*(unsigned int *)(temp_v0 + 0x558));
    *(int *)(temp_v0 + 0x56c) = *(int *)(temp_v0 + 0x56c) + 1;
  }
  return 0;
}

} /* extern "C" */
