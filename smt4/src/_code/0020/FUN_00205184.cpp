/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205184` (_code @ 0x205184, 0x3e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(...);
int animPlayerSetLoopPolicy(...);
int gfxObjectDestroy(...);
int FUN_0028703c(...);
int FUN_00287728(...);
int FUN_0029bb14(...);
void FUN_0029c2cc(...);
int FUN_002a03d8(...);
int FUN_002a0428(...);
int modelSlotAttachChild(...);
int FUN_002a04f0(...);
int FUN_002a09b4(...);
int modelSelectPrimaryMotion(...);
int asdModelSlotRelease(...);
int asdMdlManagerDestroy(...);
int cameraExportParameters(...);
int FUN_002b2b64(...);
int FUN_002c159c(...);
int FUN_002c1e30(...);
int FUN_002c1edc(...);
int FUN_002f50b8(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int nw_anim_PlayPolicy_Loop(...); /* 0x151500 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: animPlayerSetLoopPolicy. */
/* Supplied declaration required: gfxObjectDestroy. */
extern int effTimelineIsDone(unsigned int);
extern unsigned int FUN_00263c1c(char *);
/* Supplied declaration required: FUN_0028703c. */
/* Supplied declaration required: FUN_00287728. */
extern unsigned int asdMdlManagerCreateSecondList(char *, unsigned int);
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: modelSlotAttachChild. */
/* Supplied declaration required: FUN_002a04f0. */
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: modelSelectPrimaryMotion. */
/* Supplied declaration required: asdModelSlotRelease. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int modelHasLoadedAttachment(void);
/* Supplied declaration required: cameraExportParameters. */
/* Supplied declaration required: FUN_002b2b64. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c159c. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002f50b8. */


unsigned int FUN_00205184(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int *piVar5;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = jobGetWork();
  switch(*(unsigned int *)(temp_v0 + 0x564)) {
  case 0:
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 == 0) {
      FUN_002a09b4("event/oc/oc_loop.bcenv",0);
      *(unsigned int *)(temp_v0 + 0x558) = 0;
      temp_v2 = FUN_00263c1c("event/oc/oc_loop.bccam");
      *(unsigned int *)(temp_v0 + 0x55c) = temp_v2;
      temp_v2 = FUN_00263c1c("event/oc/oc_start.bccam");
      *(unsigned int *)(temp_v0 + 0x560) = temp_v2;
      temp_v2 = asdMdlManagerCreateSecondList("event/oc/oc_loop.bam",0x38);
      *(unsigned int *)(temp_v0 + 0x554) = temp_v2;
    }
    break;
  case 1:
    piVar4 = (int *)(temp_v0 + 0x554);
    if ((*(int *)(temp_v0 + 0x554) == 0) || (temp_v1 = modelHasLoadedAttachment(), temp_v1 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x554);
      *(unsigned int *)(temp_v0 + 0x570) = 1;
      if ((temp_v1 != 0) && (*(int *)(*(int *)(temp_v1 + 8) + 0xc) < 0)) {
        FUN_002a0428(temp_v1,1);
        animPlayerSetLoopPolicy(*(unsigned int *)(*piVar4 + 8),1);
        modelSelectPrimaryMotion(*(unsigned int *)(*piVar4 + 8),*(unsigned int *)(temp_v0 + 0x570));
        FUN_0028703c(*(unsigned int *)(*piVar4 + 8));
        FUN_0029bb14(*(unsigned int *)(*piVar4 + 8));
      }
      FUN_002a04f0(0);
      temp_v2 = *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x570) * 4 + 0x55c);
      *(unsigned int *)(temp_v0 + 0x558) = temp_v2;
      modelSlotAttachChild(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0x55c) + 4);
      *(romwright_code **)(temp_v1 + 0x4c) = nw_anim_PlayPolicy_Loop;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char *)(temp_v0 + 0x56c) = 1;
      cameraExportParameters(temp_v0 + 0x50c,*(unsigned int *)(temp_v0 + 0x558));
      FUN_002c159c(temp_v0 + 4);
      FUN_002c1edc(temp_v0 + 4,temp_v0 + 0x50c,temp_v0 + 0x518,temp_v0 + 0x524);
      FUN_002c1e30(temp_v0 + 4,1);
      FUN_00287728(0);
      FUN_002a03d8(1,10);
      *(unsigned int *)(temp_v0 + 0x564) = 2;
      *(unsigned int *)(temp_v0 + 0x568) = 0;
    }
    break;
  case 2:
    temp_v1 = effTimelineIsDone(*(unsigned int *)(temp_v0 + 0x558));
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c1d5c(), temp_v1 != 0)) {
      piVar5 = (int *)(temp_v0 + 0x554);
      FUN_002b2b64(*(unsigned int *)(*(int *)(temp_v0 + 0x554) + 8));
      temp_v1 = (int)in_s0;
      FUN_002f50b8(*(unsigned int *)(*piVar5 + 8));
      piVar4 = (int *)(temp_v0 + 0x570);
      modelSelectPrimaryMotion(*(unsigned int *)(*piVar5 + 8),*(unsigned int *)(temp_v0 + 0x570));
      FUN_0029c2cc(*(unsigned int *)(temp_v0 + 0x558),0);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      *piVar4 = 0;
      modelSelectPrimaryMotion(*(unsigned int *)(*piVar5 + 8),0);
      temp_v2 = *(unsigned int *)(temp_v0 + *piVar4 * 4 + 0x55c);
      *(unsigned int *)(temp_v0 + 0x558) = temp_v2;
      modelSlotAttachChild(temp_v2,0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + *piVar4 * 4 + 0x55c) + 4);
      temp_v2 = *(unsigned int *)(temp_v1 + 0x44);
      (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
      *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x38);
      *(unsigned int *)(temp_v1 + 0x38) = temp_v2;
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned int *)(temp_v0 + 0x564) = 3;
      *(unsigned int *)(temp_v0 + 0x568) = 0;
    }
  case 3:
    cameraExportParameters(temp_v0 + 0x50c,*(unsigned int *)(temp_v0 + 0x558));
    FUN_002c159c(temp_v0 + 4);
    FUN_002c1edc(temp_v0 + 4,temp_v0 + 0x50c,temp_v0 + 0x518,temp_v0 + 0x524);
    FUN_002c1e30(temp_v0 + 4,1);
    break;
  case 4:
    if (*(int *)(temp_v0 + 0x568) != 0) {
      if (*(char *)(temp_v0 + 0x56c) != '\0') {
        FUN_0029c2cc(*(unsigned int *)(temp_v0 + 0x558),0);
      }
      gfxObjectDestroy(*(unsigned int *)(temp_v0 + 0x55c));
      gfxObjectDestroy(*(unsigned int *)(temp_v0 + 0x560));
      *(unsigned int *)(temp_v0 + 0x55c) = 0;
      *(unsigned int *)(temp_v0 + 0x560) = 0;
      asdModelSlotRelease(0);
      if (*(int *)(temp_v0 + 0x554) != 0) {
        asdMdlManagerDestroy();
      }
      *(unsigned int *)(temp_v0 + 0x558) = 0;
      *(unsigned int *)(temp_v0 + 0x554) = 0;
      return 0xffffffff;
    }
    asdMdlManagerMarkDestroy(*(unsigned int *)(temp_v0 + 0x554));
    *(int *)(temp_v0 + 0x568) = *(int *)(temp_v0 + 0x568) + 1;
  }
  return 0;
}

} /* extern "C" */
