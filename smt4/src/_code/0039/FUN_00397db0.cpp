/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397db0` (_code @ 0x397db0, 0x628 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028cfbc(...);
int FUN_002be5a4(int, int, unsigned char [4]);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int FUN_00398aa0(...);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0028cfbc. */
extern int FUN_0029e908(int);
extern int FUN_002aeaac(unsigned int, int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00398aa0. */


void FUN_00397db0(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  unsigned char temp_v4 [4];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  int unaff_r8;
  short temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [4];
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  
  temp_v9 = 0xf;
  temp_v11 = *(char *)(param_1 + 0x29) == '\0';
  if (temp_v11) {
    unaff_r8 = 0;
  }
  temp_v14 = 6;
  if (temp_v11) goto LAB_00397df8;
  unaff_r8 = 0;
  temp_v9 = 0xe;
  temp_v14 = 9;
  do {
    temp_v8 = 0;
    do {
      temp_v5 = *(int *)(param_1 + 0x10);
      temp_v11 = temp_v5 == temp_v8;
      if (temp_v11) {
        temp_v5 = *(int *)(param_1 + 0x14);
      }
      if (!temp_v11 || temp_v5 != unaff_r8) {
        temp_v10 = *(short *)(
                           "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇芠芢芤芦芨苂苢苤苦苭腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹螔臣膇膿膾膼膽膺膻臧螓膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝懲敏既暑梅海渚漢煮爫蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹膛臣膇膿膾膼膽膺膻臧膛膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀懲敏既暑梅海渚漢煮爫腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                           + temp_v8 * 2 + unaff_r8 * 0x1e);
        if (*(char *)(param_1 + 0x29) != '\0') {
          temp_v5 = FUN_002bf4f8(0x2e,unaff_r8 * temp_v9 + temp_v8 + 0xce);
        }
        else {
          temp_v5 = FUN_002bf4f8(0x2e,unaff_r8 * temp_v9 + temp_v8 + 0x56);
        }
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v5 + 10);
        temp_v13 = 0x15;
        FUN_002bf380(2,0x2e,1,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v5 + 8));
        temp_v6 = FUN_002bf4f8(0x2e,0x1a);
        temp_v7 = *(int *)(param_1 + 0xa4);
        temp_v0 = *(short *)(temp_v6 + 8);
        temp_v1 = *(short *)(temp_v5 + 8);
        temp_v2 = *(short *)(temp_v5 + 10);
        temp_v3 = *(short *)(temp_v6 + 10);
        if (temp_v10 != -1) {
          temp_v5 = FUN_002aeaac(3,(int)temp_v1);
          temp_v5 = (**(romwright_code **)(**(int **)(temp_v5 + 8) + 0x44))(*(int **)(temp_v5 + 8),temp_v10);
          (*(unsigned int *)temp_v4) = (*(unsigned int *)temp_v12);
          if (temp_v5 == 0) {
            temp_v10 = -0x7ec0;
          }
          VectorSignedToFloat((int)temp_v2 + (int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12[1] = (char)temp_v10;
          temp_v12[0] = (char)((unsigned short)temp_v10 >> 8);
          temp_v12[3] = temp_v4[3];
          temp_v12[2] = 0;
          VectorSignedToFloat(temp_v7 + temp_v1 + (int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be5a4(3,0x323232ff,temp_v12);
          FUN_002bf538();
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v9);
    do {
      unaff_r8 = unaff_r8 + 1;
      if (temp_v14 <= unaff_r8) {
        temp_v14 = param_1 + 0x67c;
        if (*(char *)(param_1 + 0x648) == '\0') {
          temp_v9 = *(int *)(param_1 + 0x14) * temp_v9 + *(int *)(param_1 + 0x10);
          temp_v10 = *(short *)(
                             "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇芠芢芤芦芨苂苢苤苦苭腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹螔臣膇膿膾膼膽膺膻臧螓膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝懲敏既暑梅海渚漢煮爫蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹膛臣膇膿膾膼膽膺膻臧膛膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀懲敏既暑梅海渚漢煮爫腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                             + *(int *)(param_1 + 0x10) * 2 + *(int *)(param_1 + 0x14) * 0x1e);
          if (*(char *)(param_1 + 0x29) != '\0') {
            temp_v9 = FUN_002bf4f8(0x2e,temp_v9 + 0xce);
          }
          else {
            temp_v9 = FUN_002bf4f8(0x2e,temp_v9 + 0x56);
          }
          (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v9 + 10);
          temp_v13 = 0x15;
          FUN_002bf380(2,0x2e,2,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8));
          temp_v8 = FUN_002bf4f8(0x2e,0x22);
          temp_v13 = 1;
          (*(unsigned int *)temp_v12) = 0x0;
          FUN_00398aa0(param_1,(int)temp_v10,
                       *(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8) +
                       (int)*(short *)(temp_v8 + 8),
                       (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v9 + 10));
          if (*(char *)(param_1 + 1) == '\x02') {
            FUN_002bf538();
            temp_v8 = DAT_0044ea00;
            temp_v5 = FUN_002c5da8(6,1,0);
            piVar10 = (int *)(temp_v8 + 0x12ac);
            temp_v6 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v5;
            if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
              (**(romwright_code **)(temp_v8 + 0x12c8))();
              *(unsigned char *)(temp_v8 + 0x12c4) = 0;
            }
            (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v9 + 10);
            temp_v13 = 0x1f;
            FUN_002bf380(2,0x2e,3,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8));
            if (0 < *(short *)(param_1 + 0x942)) {
              (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v9 + 10);
              temp_v13 = 0x1f;
              FUN_002bf288(2,0x2e,0x21,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8));
            }
            temp_v9 = DAT_0044ea00;
            temp_v8 = FUN_002c5da8(6,7,0);
            piVar10 = (int *)(temp_v9 + 0x12ac);
            temp_v5 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v8;
            if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v5 != temp_v8) {
              (**(romwright_code **)(temp_v9 + 0x12c8))();
              *(unsigned char *)(temp_v9 + 0x12c4) = 0;
            }
            FUN_002bf538();
          }
        }
        if (*(char *)(param_1 + 0x29) == '\0') {
          temp_v15 = param_1 + 0x5e4;
          temp_v8 = 0;
          temp_v9 = FUN_0028cfbc();
          if (0 < temp_v9) {
            do {
              temp_v9 = FUN_002bf4f8(0x2e,temp_v8 + 0xc6);
              (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v9 + 10);
              temp_v13 = 0x15;
              FUN_002bf380(2,0x2e,4,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8));
              (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v9 + 10);
              temp_v13 = 0x1a;
              FUN_002bf288(2,0x2e,temp_v8 + 0x29,
                           *(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v9 + 8));
              FUN_002bf538();
              temp_v8 = temp_v8 + 1;
              temp_v9 = FUN_0028cfbc(temp_v15);
            } while (temp_v8 < temp_v9);
          }
          if (*(char *)(param_1 + 0x648) != '\0') {
            temp_v9 = FUN_0029e908(temp_v15);
            temp_v8 = FUN_002bf4f8(0x2e,temp_v9 + 0xc6);
            (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
            temp_v13 = 0x1f;
            FUN_002bf380(2,0x2e,5,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
            (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
            temp_v13 = 0x24;
            FUN_002bf288(2,0x2e,temp_v9 + 0x32,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8))
            ;
            FUN_002bf538();
            FUN_002bf538();
            temp_v9 = DAT_0044ea00;
            temp_v5 = FUN_002c5da8(6,1,0);
            piVar10 = (int *)(temp_v9 + 0x12ac);
            temp_v6 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v5;
            if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
              (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v5);
              *(unsigned char *)(temp_v9 + 0x12c4) = 0;
            }
            (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
            temp_v13 = 0x29;
            FUN_002bf380(2,0x2e,6,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
            temp_v9 = DAT_0044ea00;
            temp_v5 = FUN_002c5da8(6,7,0);
            piVar10 = (int *)(temp_v9 + 0x12ac);
            temp_v6 = piVar10[*piVar10 + 2];
            piVar10[*piVar10 + 2] = temp_v5;
            if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
              (**(romwright_code **)(temp_v9 + 0x12c8))(temp_v5);
              *(unsigned char *)(temp_v9 + 0x12c4) = 0;
            }
            if (0 < *(short *)(param_1 + 0x942)) {
              (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
              temp_v13 = 0x29;
              FUN_002bf288(2,0x2e,0x39,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
            }
            FUN_002bf538();
            return;
          }
        }
        return;
      }
LAB_00397df8:;
    } while (temp_v9 == 0);
  } while( 1 );
}

} /* extern "C" */
