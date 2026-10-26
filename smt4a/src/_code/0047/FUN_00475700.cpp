/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00475700` (_code @ 0x475700, 0x40c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "addon/AocBufferRequest.h"

extern "C" {

int textFormatBuffer(...);
int FUN_001a1564(...);
int legacyResourceIdRemap(...);
int FUN_00426eb8(int *, int, unsigned int, unsigned int);
int FUN_00426fe4(int *, int, int);
int recordClearWideHandle(...);
int FUN_0042792c(...);
int FUN_00427c38(int *, unsigned char [1024], int);
int FUN_00427ff4(...);
int stringFormatUnbounded(...);
void aocApplicationRecreatePrimaryRequest(AocApplicationRequestView *app);
int FUN_00473980(...);
int FUN_00474d0c(void);
int FUN_00500244(...);

/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int sp570; /* 0x570: local_570 */
} param_1_stack;

extern unsigned char LAB_00475b10; /* 0x475b10 */
extern unsigned char LAB_00475b20; /* 0x475b20 */
extern unsigned char LAB_00475b24; /* 0x475b24 */
extern unsigned char LAB_00475b34; /* 0x475b34 */
extern unsigned char LAB_00475b44; /* 0x475b44 */
extern unsigned char LAB_00475b54; /* 0x475b54 */
extern unsigned char LAB_00475b64; /* 0x475b64 */
extern unsigned char LAB_00475b70; /* 0x475b70 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_001a1564. */
/* Supplied declaration required: legacyResourceIdRemap. */
/* Supplied declaration required: FUN_00426eb8. */
/* Supplied declaration required: FUN_00426fe4. */
extern unsigned int halfPair48LowByteA(int);
extern unsigned int halfPair48LowByteB(int);
/* Supplied declaration required: recordClearWideHandle. */
/* Supplied declaration required: FUN_0042792c. */
/* Supplied declaration required: FUN_00427c38. */
/* Supplied declaration required: FUN_00427ff4. */
/* Supplied declaration required: stringFormatUnbounded. */
/* Supplied declaration required: aocApplicationRecreatePrimaryRequest. */
/* Supplied declaration required: FUN_00473980. */
/* Supplied declaration required: FUN_00474d0c. */
extern unsigned int FUN_00500234(unsigned int);
/* Supplied declaration required: FUN_00500244. */
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


int * FUN_00475700(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [1024];
  unsigned char temp_v8 [64];
  unsigned char temp_v9 [64];
  unsigned char temp_v10 [64];
  int temp_v11;
  unsigned int uStack_a4;
  int temp_v12;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int temp_v13;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int temp_v14 [3];
  int temp_v15;
  unsigned char *temp_v16;
  unsigned char temp_v17;
  int temp_v18;
  unsigned int uStack_24;
  
  temp_v0 = g_aocMain;
  FUN_00426fe4(&temp_v11,g_aocMain + 0x28,g_aocMain + 0x18);
  *(unsigned int *)(param_1 + 0xc) = temp_v11;
  *(unsigned int *)(param_1 + 0x10) = uStack_a4;
  temp_v1 = legacyResourceIdRemap(param_1 + 0xc);
  piVar6 = (int *)-(temp_v1 >> 0x1f);
  if (piVar6 == (int *)0x0) {
    piVar6 = temp_v14;
    FUN_00427c38(piVar6,temp_v7,0x400);
    temp_v17 = 1;
    temp_v2 = halfPair48LowByteB(temp_v0 + 0x28);
    temp_v3 = halfPair48LowByteA(temp_v0 + 0x28);
    FUN_00426eb8(&temp_v12,0,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x368) = temp_v12;
    *(unsigned int *)(temp_v0 + 0x36c) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x370) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x374) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x378) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x37c) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x380) = uStack_88;
    *(unsigned int *)(temp_v0 + 900) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x388) = temp_v13;
    *(unsigned int *)(temp_v0 + 0x38c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x390) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x394) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x398) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x39c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x3a0) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x3a4) = uStack_64;
    temp_v2 = halfPair48LowByteB(temp_v0 + 0x28);
    temp_v3 = halfPair48LowByteA(temp_v0 + 0x28);
    FUN_00426eb8(&temp_v12,2,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x3a8) = temp_v12;
    *(unsigned int *)(temp_v0 + 0x3ac) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x3b0) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x3b4) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x3b8) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x3bc) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x3c0) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x3c4) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x3c8) = temp_v13;
    *(unsigned int *)(temp_v0 + 0x3cc) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x3d0) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x3d4) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x3d8) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x3dc) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x3e0) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x3e4) = uStack_64;
    temp_v2 = halfPair48LowByteB(temp_v0 + 0x28);
    temp_v3 = halfPair48LowByteA(temp_v0 + 0x28);
    FUN_00426eb8(&temp_v12,3,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 1000) = temp_v12;
    *(unsigned int *)(temp_v0 + 0x3ec) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x3f0) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x3f4) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x3f8) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x3fc) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x400) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x404) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x408) = temp_v13;
    *(unsigned int *)(temp_v0 + 0x40c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x410) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x414) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x418) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x41c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x420) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x424) = uStack_64;
    temp_v2 = halfPair48LowByteB(temp_v0 + 0x28);
    temp_v3 = halfPair48LowByteA(temp_v0 + 0x28);
    FUN_00426eb8(&temp_v12,5,temp_v3,temp_v2);
    *(unsigned int *)(temp_v0 + 0x428) = temp_v12;
    *(unsigned int *)(temp_v0 + 0x42c) = uStack_9c;
    *(unsigned int *)(temp_v0 + 0x430) = uStack_98;
    *(unsigned int *)(temp_v0 + 0x434) = uStack_94;
    *(unsigned int *)(temp_v0 + 0x438) = uStack_90;
    *(unsigned int *)(temp_v0 + 0x43c) = uStack_8c;
    *(unsigned int *)(temp_v0 + 0x440) = uStack_88;
    *(unsigned int *)(temp_v0 + 0x444) = uStack_84;
    *(unsigned int *)(temp_v0 + 0x448) = temp_v13;
    *(unsigned int *)(temp_v0 + 0x44c) = uStack_7c;
    *(unsigned int *)(temp_v0 + 0x450) = uStack_78;
    *(unsigned int *)(temp_v0 + 0x454) = uStack_74;
    *(unsigned int *)(temp_v0 + 0x458) = uStack_70;
    *(unsigned int *)(temp_v0 + 0x45c) = uStack_6c;
    *(unsigned int *)(temp_v0 + 0x460) = uStack_68;
    *(unsigned int *)(temp_v0 + 0x464) = uStack_64;
    stringFormatUnbounded(temp_v0 + 0x468,&LAB_00475b20,&LAB_00475b10);
    stringFormatUnbounded(temp_v0 + 0x4a8,&LAB_00475b20,&LAB_00475b24);
    stringFormatUnbounded(temp_v0 + 0x4e8,&LAB_00475b20,&LAB_00475b34);
    stringFormatUnbounded(temp_v0 + 0x528,&LAB_00475b20,&LAB_00475b44);
    stringFormatUnbounded(temp_v0 + 0x568,&LAB_00475b20,&LAB_00475b54);
    temp_v14[0] = temp_v0 + 0x368;
    temp_v14[1] = 9;
    if (*(int *)(temp_v0 + 0x364) != 0) {
      temp_v14[2] = temp_v0 + 0xe3;
      temp_v15 = *(int *)(temp_v0 + 0x364);
    }
    aocApplicationRecreatePrimaryRequest(reinterpret_cast<AocApplicationRequestView *>(temp_v0));
    textFormatBuffer(temp_v8,&LAB_00475b64);
    textFormatBuffer(temp_v9,&LAB_00475b10);
    textFormatBuffer(temp_v10,&LAB_00475b70);
    temp_v16 = temp_v8;
    while( 1 ) {
      FUN_0042792c(&temp_v11,*(unsigned int *)(temp_v0 + 0x5a8),*(unsigned int *)(temp_v0 + 0x684),0x40,
                   piVar6);
      *(unsigned int *)(param_1 + 0xc) = temp_v11;
      *(unsigned int *)(param_1 + 0x10) = uStack_a4;
      temp_v1 = legacyResourceIdRemap(param_1 + 0xc);
      if (temp_v1 < 0) break;
      temp_v4 = FUN_00500244(*(unsigned int *)(temp_v0 + 0x5a8));
      if ((*(unsigned int *)(temp_v0 + 0x684) < temp_v4) ||
         (temp_v1 = FUN_00500244(*(unsigned int *)(temp_v0 + 0x5a8)), temp_v1 == 0)) {
        temp_v2 = FUN_00500234(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x67c) = temp_v2;
        temp_v2 = FUN_00500244(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x680) = temp_v2;
        temp_v2 = FUN_00500244(*(unsigned int *)(temp_v0 + 0x5a8));
        *(unsigned int *)(temp_v0 + 0x680) = temp_v2;
        temp_v18 = 0;
        uStack_24 = 0;
        FUN_00427ff4(&temp_v11,temp_v0 + 0x84,&temp_v18);
        *(unsigned int *)(param_1 + 0xc) = temp_v11;
        *(unsigned int *)(param_1 + 0x10) = uStack_a4;
        temp_v1 = legacyResourceIdRemap(param_1 + 0xc);
        if (-1 < temp_v1) {
          temp_v1 = nn_fnd_DateTime_GetDay((unsigned int)&temp_v18);
          temp_v5 = nn_fnd_DateTime_GetMonth((unsigned int)&temp_v18);
          temp_v6 = nn_fnd_DateTime_GetYear((unsigned int)&temp_v18);
          FUN_001a1564(temp_v6,temp_v5,temp_v1);
          *(int *)(param_1 + 0x18) = temp_v6;
          temp_v1 = param_1;
          FUN_00474d0c();
          recordClearWideHandle(temp_v0 + 0x28);
          if (-1 < temp_v1) {
            FUN_00473980(&temp_v11,temp_v0);
            *(unsigned int *)(param_1 + 0xc) = temp_v11;
            *(unsigned int *)(param_1 + 0x10) = uStack_a4;
            legacyResourceIdRemap(param_1 + 0xc);
          }
          return piVar6;
        }
        break;
      }
      temp_v1 = FUN_00500244(*(unsigned int *)(temp_v0 + 0x5a8));
      *(unsigned int *)(temp_v0 + 0x684) = (((temp_v1 + 0x3fU) >> 6) - 1) * 0x40;
    }
    recordClearWideHandle(temp_v0 + 0x28);
  }
  return piVar6;
}

} /* extern "C" */
