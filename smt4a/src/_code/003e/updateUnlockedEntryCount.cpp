#include "shard/Shard003E.h"

extern "C" {

extern u8 *gameDataBlockGetArea2D68(void);
extern SummarySource *gameGetSlotTable(void);

/* Counts the unlocked entries: 8, plus the bits set in bytes 9..11 of the table at gameDataBlockGetArea2D68 (the first one jumps to 9), at most 0x18. */
void updateUnlockedEntryCount(void)
{
    s32 count = 8;

    if ((gameDataBlockGetArea2D68()[9] & 0x2) != 0) {
        count = 9;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x4) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x8) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x10) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x20) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x40) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[9] & 0x80) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x1) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x2) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x4) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x8) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x10) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x20) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x40) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[10] & 0x80) != 0) {
        count++;
    }
    if ((gameDataBlockGetArea2D68()[11] & 0x1) != 0) {
        count++;
    }
    if (count > 0x18) {
        count = 0x18;
    }
    gameGetSlotTable()->unk1CA3 = count;
}

} /* extern "C" */
