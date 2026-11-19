/* NON_MATCHING: the vitals multiplier operand order and the HP clamp compare differ; the MP clamp matches. */
#include "game/GameGlobalsRef.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "shard/Shard0035.h"

extern "C" {

// Scale the displayed unit's level and vitals by the current progression multiplier.
void statusScaleUnitDisplayVitals(void *unitData, u32 id)
{
    struct UnitVitalsView {
        /* 0x00 */ u16 unk00;
        /* 0x02 */ u16 level;
        /* 0x04 */ u8 unk04[12];
        /* 0x10 */ s32 hp;
        /* 0x14 */ s32 mp;
    };
    typedef char UnitVitalsOffsets[offsetof(UnitVitalsView, level) == 2 &&
        offsetof(UnitVitalsView, hp) == 0x10 && offsetof(UnitVitalsView, mp) == 0x14 ? 1 : -1];
    UnitVitalsView *unit = static_cast<UnitVitalsView *>(unitData);
    ObjB *session = g_gameGlobals.instance;
    f32 progression = static_cast<f32>(static_cast<s32>(gameDataGetTableValue()));
    if (progression < 0.0f) {
        progression = 0.0f;
    } else if (progression > 9.0f) {
        progression = 9.0f;
    }
    const NkmEnemyRecordA *base = nkmEnemyFindById(static_cast<u16>(id));
    u16 level = static_cast<u16>(static_cast<s32>(static_cast<f32>(base->level & 0x7FFFu) *
        (progression * 0.55f + 1.0f) + progression * progression * 5.0f));
    unit->level = level;
    if (level >= 999) {
        level = 999;
    }
    unit->level = level;
    if (base != NULL) {
        f32 multiplier = progression * 0.3f + 1.0f + progression * progression * (1.0f / 15.0f);
        s32 maxHp = static_cast<s32>(static_cast<f32>(static_cast<u32>(base->maxHp)) * multiplier);
        session->scaledMaxHp = maxHp;
        if (9999999 <= maxHp) {
            maxHp = 9999999;
        }
        session->scaledMaxHp = maxHp;
        s32 maxMp = static_cast<s32>(static_cast<f32>(static_cast<u32>(base->maxMp)) * multiplier);
        session->scaledMaxMp = maxMp;
        s32 cappedMaxMp = 9999999;
        if (maxMp < cappedMaxMp) {
            cappedMaxMp = maxMp;
        }
        session->scaledMaxMp = cappedMaxMp;
    } else {
        session->scaledMaxHp = unit->hp;
        session->scaledMaxMp = unit->mp;
    }
}
}
