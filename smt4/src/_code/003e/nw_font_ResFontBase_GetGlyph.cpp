/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_font_ResFontBase_GetGlyph` (_code @ 0x3ea148, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_uidivmod(...);
int nw_font_ResFontBase_FindGlyphIndex(unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: aeabi_uidivmod. */
/* Supplied declaration required: nw_font_ResFontBase_FindGlyphIndex. */


void nw_font_ResFontBase_GetGlyph(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  unsigned short *puVar8;
  int temp_v6;
  short temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int unaff_r4;
  unsigned char *pbVar11;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  temp_v4 = param_1;
  nw_font_ResFontBase_FindGlyphIndex(param_1,param_3);
  if (temp_v4 == 0xffff) {
    temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 8) + 2);
  }
  pbVar11 = *(unsigned char **)(*(int *)(param_1 + 8) + 8);
  temp_v5 = aeabi_uidivmod(temp_v4,(unsigned int)*(unsigned short *)(pbVar11 + 0xc) * (unsigned int)*(unsigned short *)(pbVar11 + 0xe));
  *param_2 = *(int *)(pbVar11 + 4) * temp_v5 + *(int *)(pbVar11 + 0x14);
  temp_v9 = *(unsigned int *)(param_1 + 8);
  puVar7 = *(unsigned short **)(temp_v9 + 0xc);
  do {
    if (puVar7 == (unsigned short *)0x0) {
      puVar8 = (unsigned short *)(temp_v9 + 4);
LAB_003ea20c:
      *(unsigned short *)(param_2 + 1) = *puVar8;
      *(unsigned char *)((int)param_2 + 6) = *(unsigned char *)(puVar8 + 1);
      temp_v6 = *(int *)(param_1 + 0xc);
      if (temp_v6 != 0) {
        temp_v6 = temp_v6 + temp_v5 * 0x14;
      }
      param_2[5] = temp_v6;
      temp_v2 = *(unsigned short *)(pbVar11 + 0xc);
      aeabi_uidivmod(temp_v4,(unsigned int)temp_v2 * (unsigned int)*(unsigned short *)(pbVar11 + 0xe),temp_v5,temp_v9,unaff_r4,
                     unaff_r5,unaff_r6);
      temp_v3 = aeabi_uidivmod(temp_v8,(unsigned int)temp_v2);
      temp_v0 = pbVar11[1];
      temp_v1 = *pbVar11;
      *(unsigned char *)((int)param_2 + 7) = temp_v0;
      *(unsigned short *)(param_2 + 4) = *(unsigned short *)(pbVar11 + 10);
      *(unsigned short *)(param_2 + 2) = *(unsigned short *)(pbVar11 + 0x10);
      *(unsigned short *)((int)param_2 + 10) = *(unsigned short *)(pbVar11 + 0x12);
      *(unsigned short *)(param_2 + 3) = (temp_v1 + 1) * temp_v7 + 1;
      *(unsigned short *)((int)param_2 + 0xe) = (temp_v0 + 1) * temp_v3 + 1;
      return;
    }
    temp_v11 = temp_v4 <= *puVar7;
    temp_v10 = *puVar7 == temp_v4;
    if (!temp_v11 || temp_v10) {
      temp_v11 = puVar7[1] <= temp_v4;
      temp_v10 = temp_v4 == puVar7[1];
    }
    if (!temp_v11 || temp_v10) {
      temp_v9 = (unsigned int)*puVar7;
      puVar8 = (unsigned short *)((int)puVar7 + (temp_v4 - temp_v9) * 3 + 8);
      goto LAB_003ea20c;
    }
    puVar7 = *(unsigned short **)(puVar7 + 2);
  } while( 1 );
}

} /* extern "C" */
