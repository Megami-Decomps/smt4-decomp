/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f400c` (_code @ 0x2f400c, 0x678 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int modelPartSetRotationDegrees(...); // declcheck: local (romwright prototype; its types do not fit map/LmapPlayerModel.h: including it fails to compile)
int nodeSetTranslation(...);
int modelSetScale(...);
int lightOwnerRegister(...);
int modelSelectPrimaryMotion(...);
int __ARM_common_memcpy4_8(...);
int textFormatBuffer(...);
int dataTable2cSub1GetCount(void);
int VectorSignedToFloat(...);

extern int *g_modelGroups; /* 0x447e10 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int asdMdlManagerClone(int, unsigned int);
/* Supplied declaration required: modelPartSetRotationDegrees. */
/* Supplied declaration required: nodeSetTranslation. */
extern int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: modelSetScale. */
/* Supplied declaration required: lightOwnerRegister. */
/* Supplied declaration required: modelSelectPrimaryMotion. */
/* Supplied declaration required: __ARM_common_memcpy4_8. */
extern int modelHasLoadedAttachment(int);
/* Supplied declaration required: textFormatBuffer. */
extern char *dataTable2cSub1GetRecord(int);
/* Supplied declaration required: dataTable2cSub1GetCount. */


unsigned int FUN_002f400c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  char *pcVar4;
  int temp_v1;
  int temp_v2;
  int *piVar7;
  unsigned int in_fpscr;
  int temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5 [140];
  
  piVar3 = g_modelGroups;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v1 = *g_modelGroups;
  if (temp_v1 != 0x15) {
    if (temp_v1 < 0x15) {
      if (temp_v1 != 10) {
        if (temp_v1 == 0xb) {
          temp_v2 = g_modelGroups[1];
          piVar7 = g_modelGroups + temp_v2 * 0xb + 0x445;
          temp_v1 = modelHasLoadedAttachment(g_modelGroups[temp_v2 * 0xb + 0x44d]);
          if (temp_v1 == 0) {
            return 0;
          }
          *(unsigned char *)piVar7 = 1;
          *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x1115) = 1;
          *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x1116) = 0;
          piVar3[temp_v2 * 0xb + 0x446] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x447] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x448] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x449] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x44a] = 2;
          *(unsigned char *)(piVar3 + temp_v2 * 0xb + 0x44e) = 1;
          piVar3[temp_v2 * 0xb + 0x44f] = -1;
          lightOwnerRegister(piVar3[temp_v2 * 0xb + 0x44d],1);
          nodeSetTranslation(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),0,
                       piVar3 + temp_v2 * 0xb + 0x446);
          modelPartSetRotationDegrees(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),0);
          modelSelectPrimaryMotion(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),piVar3[temp_v2 * 0xb + 0x44a])
          ;
          modelSetScale(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8));
          puVar2 = (unsigned int *)piVar3[temp_v2 * 0xb + 0x44d];
          *puVar2 = *puVar2 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
          *g_modelGroups = *g_modelGroups + 1;
          return 0;
        }
        if (temp_v1 != 0xc) {
          if (temp_v1 != 0x14) {
            return 0;
          }
          g_modelGroups[1] = 0;
          piVar3[0x4ae] = 2;
          textFormatBuffer(temp_v5,"map/m022/m022_blk%02d.bam",2);
          temp_v1 = asdMdlManagerCreateSecondList(temp_v5,7);
          piVar3[0x4b0] = temp_v1;
          *(unsigned char *)(piVar3 + 0x4af) = 0;
          *g_modelGroups = *g_modelGroups + 1;
          return 0;
        }
        temp_v1 = 1;
        do {
          piVar3 = g_modelGroups;
          piVar7 = g_modelGroups + temp_v1 * 0xb + 0x445;
          g_modelGroups[temp_v1 * 0xb + 1099] = 1;
          textFormatBuffer(temp_v5,"map/m022/m022_blk%02d.bam",1);
          temp_v3 = asdMdlManagerClone(g_modelGroups[0x44d],0);
          piVar3[temp_v1 * 0xb + 0x44d] = temp_v3;
          *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x44c) = 1;
          *(unsigned char *)piVar7 = 1;
          *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x1115) = 1;
          *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x1116) = 0;
          temp_v2 = (int)temp_v4;
          piVar3[temp_v1 * 0xb + 0x446] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x447] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x448] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x449] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x44a] = 2;
          *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x44e) = 1;
          piVar3[temp_v1 * 0xb + 0x44f] = -1;
          lightOwnerRegister(temp_v3,1);
          nodeSetTranslation(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),0,
                       piVar3 + temp_v1 * 0xb + 0x446);
          modelPartSetRotationDegrees(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),0);
          modelSelectPrimaryMotion(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),piVar3[temp_v1 * 0xb + 0x44a])
          ;
          modelSetScale(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8));
          puVar2 = (unsigned int *)piVar3[temp_v1 * 0xb + 0x44d];
          temp_v1 = temp_v1 + 1;
          *puVar2 = *puVar2 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
          piVar3 = g_modelGroups;
        } while (temp_v1 < 9);
        g_modelGroups[1] = 0;
        temp_v0 = *(short *)((int)piVar3 + 0xe);
        if ((temp_v0 == 2 || temp_v0 == 3) || (temp_v0 == 6 || temp_v0 == 7)) {
          *piVar3 = 0x1e;
          return 0;
        }
        temp_v1 = 0x14;
      }
      else {
        g_modelGroups[1] = 0;
        piVar3[1099] = 1;
        textFormatBuffer(temp_v5,"map/m022/m022_blk%02d.bam",1);
        temp_v1 = asdMdlManagerCreateSecondList(temp_v5,0x38);
        piVar3[0x44d] = temp_v1;
        *(unsigned char *)(piVar3 + 0x44c) = 0;
        temp_v1 = *g_modelGroups + 1;
        piVar3 = g_modelGroups;
      }
      *piVar3 = temp_v1;
    }
    else if (temp_v1 == 0x16) {
      temp_v1 = 1;
      do {
        piVar3 = g_modelGroups;
        piVar7 = g_modelGroups + temp_v1 * 0xb + 0x4a8;
        g_modelGroups[temp_v1 * 0xb + 0x4ae] = 2;
        textFormatBuffer(temp_v5,"map/m022/m022_blk%02d.bam",2);
        temp_v3 = asdMdlManagerClone(g_modelGroups[0x4b0],0);
        piVar3[temp_v1 * 0xb + 0x4b0] = temp_v3;
        *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x4af) = 1;
        *(unsigned char *)piVar7 = 1;
        *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x12a1) = 1;
        *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x12a2) = 0;
        temp_v2 = (int)temp_v4;
        piVar3[temp_v1 * 0xb + 0x4a9] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4aa] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ab] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ac] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ad] = 2;
        *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x4b1) = 1;
        lightOwnerRegister(temp_v3,1);
        nodeSetTranslation(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),0,piVar3 + temp_v1 * 0xb + 0x4a9
                    );
        modelPartSetRotationDegrees(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),0);
        modelSelectPrimaryMotion(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),piVar3[temp_v1 * 0xb + 0x4ad]);
        modelSetScale(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8));
        puVar2 = (unsigned int *)piVar3[temp_v1 * 0xb + 0x4b0];
        temp_v1 = temp_v1 + 1;
        *puVar2 = *puVar2 | 2;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
        piVar3 = g_modelGroups;
      } while (temp_v1 < 3);
      g_modelGroups[1] = 0;
      *piVar3 = 0x1e;
    }
    else {
      if (temp_v1 == 0x1e) {
        temp_v1 = 0;
        g_modelGroups[1] = 0;
        dataTable2cSub1GetCount();
        if (0 < (int)piVar3) {
          do {
            pcVar4 = (char *)dataTable2cSub1GetRecord(temp_v1);
            piVar3 = g_modelGroups;
            if (*pcVar4 == -1) break;
            if (((int)*pcVar4 == (int)(short)g_modelGroups[3]) &&
               ((int)pcVar4[1] == (int)*(short *)((int)g_modelGroups + 0xe))) {
              temp_v3 = 0;
              do {
                if ((char)g_modelGroups[temp_v3 * 0x11 + 5] == '\0') goto LAB_002f45c4;
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 0x40);
              temp_v3 = -1;
LAB_002f45c4:
              g_modelGroups[2] = temp_v3;
              temp_v3 = piVar3[1];
              piVar3[temp_v3 * 0x11 + 0xf] = (int)*(short *)(pcVar4 + 2);
              *(unsigned char *)(piVar3 + temp_v3 * 0x11 + 5) = 1;
              *(unsigned char *)((int)piVar3 + temp_v3 * 0x44 + 0x15) = 1;
              piVar3[temp_v3 * 0x11 + 6] = 0;
              piVar3[temp_v3 * 0x11 + 7] = 0;
              *(unsigned char *)(piVar3 + temp_v3 * 0x11 + 9) = 0;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 10] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 0xb] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 0xc] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              piVar3[temp_v3 * 0x11 + 0xd] = temp_v2;
              piVar3[temp_v3 * 0x11 + 0xe] = 2;
              __ARM_common_memcpy4_8(piVar3 + temp_v3 * 0x11 + 0x10,pcVar4 + 0xc);
              piVar3[temp_v3 * 0x11 + 0x15] = -1;
              piVar3 = g_modelGroups;
              g_modelGroups[1] = g_modelGroups[1] + 1;
            }
            temp_v1 = temp_v1 + 1;
            dataTable2cSub1GetCount();
          } while (temp_v1 < (int)piVar3);
        }
        *g_modelGroups = 99;
        return 1;
      }
      if (temp_v1 == 99) {
        return 1;
      }
    }
  }
  else {
    temp_v2 = g_modelGroups[1];
    piVar7 = g_modelGroups + temp_v2 * 0xb + 0x4a8;
    temp_v1 = modelHasLoadedAttachment(g_modelGroups[temp_v2 * 0xb + 0x4b0]);
    if (temp_v1 != 0) {
      *(unsigned char *)piVar7 = 1;
      *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x12a1) = 1;
      *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x12a2) = 0;
      piVar3[temp_v2 * 0xb + 0x4a9] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4aa] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ab] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ac] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ad] = 2;
      *(unsigned char *)(piVar3 + temp_v2 * 0xb + 0x4b1) = 1;
      lightOwnerRegister(piVar3[temp_v2 * 0xb + 0x4b0],1);
      nodeSetTranslation(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),0,piVar3 + temp_v2 * 0xb + 0x4a9);
      modelPartSetRotationDegrees(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),0);
      modelSelectPrimaryMotion(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),piVar3[temp_v2 * 0xb + 0x4ad]);
      modelSetScale(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8));
      puVar2 = (unsigned int *)piVar3[temp_v2 * 0xb + 0x4b0];
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      *g_modelGroups = *g_modelGroups + 1;
    }
  }
  return 0;
}

} /* extern "C" */
