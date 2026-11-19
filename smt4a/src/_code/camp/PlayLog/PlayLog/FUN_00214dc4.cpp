#include <stdio.h>
#include "ui/UiSpriteApi.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214dc4` (_code @ 0x214dc4, 0x47c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

int textDrawString(...);
int texDrawCompositeSprite(...);
int efctSetSpeed(void);
int fontMeasureLineAdvance(...);
int textFormatFullWidthNumber(...);
int uiDrawListScrollBar(...);
int VectorSignedToFloat(...);

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

extern unsigned char LAB_00215248; /* 0x215248 */
extern int g_playLog; /* 0x57f278 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textDrawString. */
/* Supplied declaration required: texDrawCompositeSprite. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: fontMeasureLineAdvance. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int resourceRunOperationIfUnblocked(int);
/* Supplied declaration required: textFormatFullWidthNumber. */
/* Supplied declaration required: uiDrawListScrollBar. */
extern int uiSearchPrimary(int);


void FUN_00214dc4(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *puVar9;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  unsigned char temp_v10 [64];
  unsigned char temp_v11 [16];
  unsigned char temp_v12 [16];
  int temp_v13;
  
  temp_v0 = g_playLog;
  temp_v8 = 0;
  temp_v1 = uiSearchPrimary(g_playLog + 0x2dc);
  if (0 < temp_v1) {
    temp_v13 = temp_v0 + 0x400;
    do {
      temp_v1 = vec2GetXInt((UiSpriteState *)(reinterpret_cast<const void *>(temp_v0 + temp_v8 * 0x8c + 0x20)));
      efctSetSpeed();
      if (temp_v8 == 0) {
        if (*(char *)(temp_v13 + 0x88) != '\0') {
          texDrawTableEntryAtStoredOrigin(2,0x25,0,temp_v1,0,0xb);
          texDrawTableEntryAtStoredOrigin(2,0x25,1,temp_v1,0,0xb);
          if (*(char *)(temp_v0 + 0x489) != '\0') {
            texDrawTableEntryAtStoredOrigin(2,0x25,0x1e,temp_v1,0,0x10);
          }
          else {
            texDrawTableEntryAtStoredOrigin(2,0x25,0x1f,temp_v1,0,0x10);
          }
        }
        else {
          texDrawCompositeSprite(2,0x25,0,temp_v1,0,0xb);
        }
      }
      temp_v2 = uiSearchPrimary(temp_v0 + 0x2dc);
      if (temp_v2 - 1 == temp_v8) {
        texDrawTableEntryAtStoredOrigin(2,0x25,0x1d,temp_v1,0,0xb);
        uiDrawListScrollBar(temp_v0 + 0x2dc,temp_v1,0,0x25,7,8,9,3,5,4,6,(int)*(short *)(temp_v0 + 0x34c),
                     (int)*(short *)(temp_v0 + 0x348),(int)*(short *)(temp_v0 + 0x34a),0xb,0);
      }
      temp_v2 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x25,temp_v8 + 0x15));
      texDrawCompositeSprite(2,0x25,1,*(short *)(temp_v2 + 8) + temp_v1,(int)*(short *)(temp_v2 + 10),0xb);
      temp_v3 = resourceRunOperationIfUnblocked(temp_v0 + 0x2dc);
      temp_v9 = (unsigned int)*(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424);
      temp_v4 = dataTableGet(0x37,0);
      temp_v3 = dataTableGetEntries();
      temp_v5 = dataTableGetCount(temp_v4);
      if ((temp_v9 < temp_v5) && (temp_v3 = temp_v3 + temp_v9 * 0x40, temp_v3 != 0)) {
        temp_v6 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x25,0x13));
        sprintf((char *)temp_v10,"%s",temp_v3 + 2);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v6 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0x57d8ffff,temp_v10,(int)*(short *)(temp_v6 + 10));
        temp_v6 = reinterpret_cast<int>(asdTMTexTableEntryAt(0x25,0x14));
        if (*(char *)(temp_v3 + 0x3f) != '\x01') {
          if (*(char *)(temp_v3 + 0x37) != '0') {
            temp_v7 = resourceRunOperationIfUnblocked(temp_v0 + 0x2dc);
            textFormatFullWidthNumber(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v7 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            sprintf((char *)temp_v10,"%s\x81@%s",temp_v11,temp_v3 + 0x37);
          }
          else {
            temp_v3 = resourceRunOperationIfUnblocked(temp_v0 + 0x2dc);
            textFormatFullWidthNumber(temp_v11,
                         *(unsigned int *)
                          (temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c));
            sprintf((char *)temp_v10,"%s",temp_v11);
          }
        }
        else {
          temp_v3 = resourceRunOperationIfUnblocked(temp_v0 + 0x2dc);
          temp_v5 = *(unsigned int *)(temp_v0 + *(short *)(temp_v0 + (temp_v3 + temp_v8) * 2 + 0x424) * 4 + 0x35c);
          temp_v9 = temp_v5 % 0xe10;
          textFormatFullWidthNumber(temp_v11,temp_v5 / 0xe10,temp_v9 * -0x77777777);
          textFormatFullWidthNumber(temp_v12,temp_v9 / 0x3c);
          sprintf((char *)temp_v10,(const char *)&LAB_00215248,temp_v11,temp_v12);
        }
        puVar9 = temp_v10;
        fontMeasureLineAdvance(puVar9,2);
        VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v2 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((((int)**(short **)(temp_v6 + 0xc) + (int)*(short *)(temp_v6 + 8)) -
                            (int)puVar9) + temp_v1 + (int)*(short *)(temp_v2 + 8),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        textDrawString(2,0xffffffff,temp_v10,(int)*(short *)(temp_v2 + 8));
      }
      efctSetSpeed();
      temp_v8 = temp_v8 + 1;
      temp_v1 = uiSearchPrimary(temp_v0 + 0x2dc);
    } while (temp_v8 < temp_v1);
  }
  return;
}

} /* extern "C" */
