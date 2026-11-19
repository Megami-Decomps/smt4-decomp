/* NON_MATCHING: the table-row address uses different scratch registers and the null result is materialized instead of reusing the zero register. */
#include "gamedata/DataTableAccess.h"
#include "gamedata/DataTableAccess_Smt4a.h"
#include "shard/W6_W6Match5_StatisticsBanks.h"

extern "C" {

/* Clear the count and countdown of each counter named by table 0x18. */
void statisticsResetShopCounters(void)
{
    const StatisticsTableEntry *entries = dataTable18Sub0GetEntries();
    s32 count = dataTable18Sub0GetCount();

    for (s32 i = 0; i < count; ++i) {
        u8 row = entries[i].row;
        u8 bank = entries[i].bank;
        u16 column = entries[i].column;
        if (bank == 0) {
            if (column == 7)
                column = 6;
        } else if (column == 6) {
            column = 0;
        } else if (column == 7) {
            column = 1;
        }

        StatisticsCounter *counter = statisticsFindCounter(bank, row, column);
        counter->fields.count = 0;
        counter->fields.countdown = 0;
    }
}

} /* extern "C" */
