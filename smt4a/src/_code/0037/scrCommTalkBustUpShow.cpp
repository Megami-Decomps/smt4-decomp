#include "common.h"
#include "gamedata/GameFlags.h"

extern "C" {

u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
s32 dataTableValueOrZero(s32 index);
struct TalkRecord {
    /* 0x00 */ u8 unk00[0xE0];
    /* 0xE0 */ u16 setFlags[3];
    /* 0xE6 */ u16 clearFlags[3];
};
TalkRecord *FUN_001ad9b4(u32 id);
s32 goalConditionsSatisfied(u32 id);
u32 scrWorkGetValue(s32 index);
void scrWorkSetValue(s32 index, u32 value);
void scrSetResult(s32 result);
void scrCommMessageSetMode(s32 mode);
void messageSlotSet(s32 slot);
void sysPlaySe(s32 id);
void eventTexSetFlag(s32 value);
void bustupCutAnimSetFlag(s32 value);
void btlTalkBustUpCreate(void);
s32 btlTalkBustUpExists(void);
u32 btlTalkBustUpGetId(void);
void btlTalkBustUpSetDemonTexture(u16 id, s32 arg);
void btlTalkBustUpSetUnk2F4(s32 value);
s32 FUN_0035fcbc(void);
void FUN_003deea4(s32 arg);
void FUN_00417a60(u32 id);
s32 FUN_004186a4(void);
u32 FUN_004186e0(void);
void optionsClearFlag1(void);


/* Script command: shows the talk bust-up of a talk record. Its first frame applies the record's flags; later
 * frames run a two-phase sequence (phase 0 prepares the message window state, phase 1 shows the bust-up). */
u32 scrCommTalkBustUpShow(void)
{
    u16 id = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        TalkRecord *record;
        s32 i;

        scrWorkSetValue(0, 0);
        record = FUN_001ad9b4(id);
        if (goalConditionsSatisfied(id) == 0) {
            scrSetResult(0);
            return 1;
        }
        scrWorkSetValue(0, 0);
        for (i = 0; i < 3; i++) {
            if (record->setFlags[i] != 0) {
                gameFlagSetValue(record->setFlags[i], 1, 1);
            }
            if (record->clearFlags[i] != 0) {
                gameFlagSetValue(record->clearFlags[i], 0, 1);
            }
        }
        return 0;
    } else {
        s32 phase;

        dataTableValueOrZero(30);
        FUN_001ad9b4(id);
        phase = scrWorkGetValue(0);
        if (phase == 0) {
            if (FUN_0035fcbc() == 0) {
                eventTexSetFlag(0);
                bustupCutAnimSetFlag(0);
                if (btlTalkBustUpExists() != 0) {
                    scrWorkSetValue(2, btlTalkBustUpGetId());
                } else {
                    scrWorkSetValue(2, -1);
                }
                btlTalkBustUpSetUnk2F4(0);
                scrWorkSetValue(3, 0);
                scrCommMessageSetMode(1);
                scrWorkSetValue(0, 1);
            }
            return 0;
        }
        if (phase == 1) {
            s32 demon;

            scrCommMessageSetMode(-1);
            messageSlotSet(0);
            sysPlaySe(146);
            scrWorkGetValue(3);
            eventTexSetFlag(1);
            bustupCutAnimSetFlag(1);
            demon = scrWorkGetValue(2);
            if (demon >= 0) {
                if (btlTalkBustUpExists() == 0) {
                    btlTalkBustUpCreate();
                }
                if (demon != 0 && btlTalkBustUpGetId() != demon) {
                    btlTalkBustUpSetDemonTexture(demon, 0);
                }
                btlTalkBustUpSetUnk2F4(1);
            }
            if (FUN_004186a4() != 0 && FUN_004186e0() == id) {
                optionsClearFlag1();
            }
        }
        FUN_00417a60(id);
        FUN_003deea4(0);
        scrSetResult(1);
        return 1;
    }
}

} /* extern "C" */
