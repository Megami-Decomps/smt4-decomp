/* NON_MATCHING: candidate-loop base registers differ and repeated stat groups become block copies rather than retained scalar halfwords. */
#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
GameOptions *gameGetSupportUnitData(void);
void *gameGetPlayerData(void);
s32 randNextInRange(u16);
u32 tableEntryIndexByKey(s32, u8);
SupportUnitRecord *supportUnitGetEntry(s32, u32);

void FUN_003c86bc(void)
{
    struct Candidates { u8 prefix[0x60A]; u16 ids[3]; };
    struct PlayerVariant { u8 prefix[0x76]; u8 key; };
    struct StatCopies {
        u16 base[7];
        u16 current[7];
        u16 maximum[7];
        u16 copy[2];
    };
    GameOptions *options = gameGetSupportUnitData();
    u32 count = options->unk60A != 0;
    if (options->unk60C != 0)
        ++count;
    if (options->unk60E != 0)
        ++count;
    s32 choice = randNextInRange(count - 1);
    for (s32 i = 0; i < 3; ++i) {
        s16 id = reinterpret_cast<Candidates *>(options)->ids[i];
        if (id) {
            if (choice == 0) {
                options = gameGetSupportUnitData();
                u32 variant = ~0u;
                for (s32 j = 0; j < 3; ++j) {
                    if (reinterpret_cast<Candidates *>(options)->ids[j] == id) {
                        PlayerVariant *player = static_cast<PlayerVariant *>(gameGetPlayerData());
                        variant = tableEntryIndexByKey(id, player->key);
                        break;
                    }
                }
                memClear(options, 0x604);
                const SupportUnitRecord *record = supportUnitGetEntry(id, variant);
                options->unk604 = id;
                options->supportIndex = variant;
                options->unk46 = 0x4B1;
                options->unk0048[0] = record->flags & 0x7F;
                // These stat copies overlay the legacy settings prefix; keep the context-specific interpretation local.
                StatCopies *stats = reinterpret_cast<StatCopies *>(options);
                for (s32 stat = 0; stat < 7; ++stat)
                    stats->base[stat] = record->stats.base[stat];
                for (s32 stat = 0; stat < 7; ++stat)
                    stats->maximum[stat] = stats->current[stat] = stats->base[stat];
                stats->copy[0] = stats->base[0];
                stats->copy[1] = stats->base[1];
                return;
            }
            --choice;
        }
    }
}
}
